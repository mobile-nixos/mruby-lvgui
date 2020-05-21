module LVGL
  [
    :CONT_STYLE,
    :EVENT,
    :FIT,
    :LABEL_ALIGN,
    :LABEL_LONG,
    :LABEL_STYLE,
    :LAYOUT,
    :PAGE_STYLE,
    :TABVIEW_STYLE,
    :TASK_PRIO,
  ].each do |enum|
    const_set(enum, LVGL::FFI.const_get("LV_#{enum}".to_sym))
  end

  def self.ffi_call!(klass, meth, *args)
    unless klass.const_defined?(:LV_TYPE)
      raise "Tried to ffi_call!(..., #{meth}) with a #{klass.name}, which does not define LV_TYPE"
    end

    ffi_name = "lv_#{klass.const_get(:LV_TYPE)}_#{meth}".to_sym
    if LVGL::FFI.respond_to?(ffi_name)
      args = args.map { |arg| if arg == nil then 0 else arg end }
      return LVGL::FFI.send(ffi_name, *args)
    else
      if klass.superclass
        return ffi_call!(klass.superclass, meth, *args)
      else
        raise "Could not find #{meth} in the class hierarchy."
      end
    end
  end

  class LVObject
    LV_TYPE = :obj

    # Hack...
    # I need to figure out how to use Fiddle's #to_value to rehydrate an mruby
    # Object into its proper form.
    REGISTRY = {
      # @self_pointer int value => instance
    }

    def initialize(parent = nil)
      @event_handler_proc = nil
      parent_ptr =
        if parent
          parent.lv_obj_pointer
        else
          nil
        end

      @self_pointer = LVGL.ffi_call!(self.class, :create, parent_ptr, nil)
      register_userdata
      unless parent
        $stderr.puts("[HACK] Creating #{self.class.name} as screen. (Switching lv_disp_load_scr!)")
        LVGL::FFI.lv_disp_load_scr(@self_pointer)
      end
    end

    def lv_obj_pointer()
      @self_pointer
    end

    def self.from_pointer(pointer)
      instance = self.new()
      instance.instance_exec do
        @self_pointer = pointer
      end

      instance
    end

    def get_style()
      style = LVGL.ffi_call!(self.class, :get_style, @self_pointer)
      LVGL::LVStyle.from_pointer(style)
    end

    def set_style(style)
      # Prevents the object from being collected
      @style = style
      LVGL.ffi_call!(self.class, :set_style, @self_pointer, style.lv_style_pointer)
    end

    def glue_obj(value)
      value =
        if value
          1
        else
          0
        end
      LVGL::FFI.lv_page_glue_obj(@self_pointer, value)
    end

    def method_missing(meth, *args)
      LVGL.ffi_call!(self.class, meth, @self_pointer, *args)
    end

    def event_handler=(cb_proc)
      # Hook the handler on-the-fly.
      unless @event_handler
        LVGL.ffi_call!(self.class, :set_event_cb, @self_pointer, LVGL::FFI["handle_lv_event"])
      end
      @event_handler_proc = cb_proc
    end

    def register_userdata()
      userdata = Fiddle::Pointer[self]
      REGISTRY[@self_pointer.to_i] = self
      LVGL.ffi_call!(self.class, :set_user_data, @self_pointer, userdata)
    end
  end

  class LVContainer < LVObject
    LV_TYPE = :cont

    def set_layout(*args)
      LVGL::FFI.lv_cont_set_layout(@self_pointer, *args)
    end

    def get_style(type)
      # type is unused, see lvgl/src/lv_objx/lv_cont.h
      super()
    end

    def set_style(type, style)
      # type is unused, see lvgl/src/lv_objx/lv_cont.h
      super(style)
    end
  end

  class LVLabel < LVObject
    LV_TYPE = :label

    def get_style(type)
      # type is unused, see lvgl/src/lv_objx/lv_label.h
      super()
    end

    def set_style(type, style)
      # type is unused, see lvgl/src/lv_objx/lv_label.h
      super(style)
    end
  end

  class LVImage < LVObject
    LV_TYPE = :img
  end

  class LVTabview < LVObject
    LV_TYPE = :tabview

    class LVTabpage < LVContainer
      private
      def initialize(*args)
      end
    end

    def set_sliding(en)
      value =
        if en
          1
        else
          0
        end
      LVGL.ffi_call!(self.class, :set_sliding, @self_pointer, value)
    end

    def get_style(type)
      # type is unused, see lvgl/src/lv_objx/lv_cont.h
      super()
    end

    def set_style(type, style)
      # type is unused, see lvgl/src/lv_objx/lv_cont.h
      super(style)
    end

    def add_tab(name)
      tab_pointer = LVGL.ffi_call!(self.class, :add_tab, @self_pointer, name)
      LVTabpage.from_pointer(tab_pointer)
    end
  end

  class LVPage < LVContainer
    LV_TYPE = :page

    def set_style(type, style)
      # Prevents the object from being collected
      @style = style
      LVGL.ffi_call!(self.class, :set_style, @self_pointer, type, style.lv_style_pointer)
    end
  end

  class LVButton < LVContainer
    LV_TYPE = :btn
  end

  # Wraps an +LvStyleStruct+ in a class with some light duty housekeeping.
  class LVStyle
    # Given a +Fiddle::Pointer+ pointing to an +LvStyleStruct+, instantiates
    # an LVStyle class, and wraps with +LvStyleStruct+.
    def self.from_pointer(pointer)
      instance = LVGL::LVStyle.new()
      instance.instance_exec do
        @self_pointer = LVGL::FFI::LvStyleStruct.new(pointer.to_i)
      end

      instance
    end

    # Allocates a new +LvStyleStruct+, and copies the styles using the LVGL
    # +lv_style_copy+.
    def initialize_copy(orig)
      @self_pointer = LVGL::FFI::LvStyleStruct.malloc()
      LVGL::FFI.lv_style_copy(@self_pointer, orig.lv_style_pointer)
    end

    def lv_style_pointer()
      @self_pointer
    end

    # Proxy all methods to the LvStyleStruct we are wrapping.
    # It's dumb, but it works so well!
    def method_missing(*args)
      @self_pointer.send(*args)
    end

    private

    def initialize()
    end

    public

    # Initializes global styles
    [
        "scr",
        "transp",
        "transp_tight",
        "transp_fit",
        "plain",
        "plain_color",
        "pretty",
        "pretty_color",
        "btn_rel",
        "btn_pr",
        "btn_tgl_rel",
        "btn_tgl_pr",
        "btn_ina",
    ].each do |name|
      global_name = "lv_style_#{name}".downcase
      const_name = "style_#{name}".upcase.to_sym
      wrapped = self.from_pointer(
        LVGL::FFI.get_global_struct!(
          LVGL::FFI::LvStyleStruct,
          global_name
        )
      )
      const_set(const_name, wrapped)
   end
  end
end
