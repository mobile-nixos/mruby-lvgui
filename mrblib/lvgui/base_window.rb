module LVGUI
  # Extend this to make a "window"
  class BaseWindow
    include ::Singleton

    def initialize()
      super()
      # Initializes LVGUI things if required...
      LVGUI.init

      # Preps a basic display
      @screen = Screen.new()
      @header = Header.new(@screen)
      @toolbar = Toolbar.new(@screen)
      @container = Page.new(@screen)
    end

    # Switch to this window
    def present()
      LVGL::FFI.lv_disp_load_scr(@screen.lv_obj_pointer)

      # Allow the window to do some work every time it is switched to.
      on_present
    end

    def on_present()
    end
  end
end
