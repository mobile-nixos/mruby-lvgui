# FFI bindings to LVGL.

module LVGL::FFI
  extend Fiddle::BasicTypes
  extend Fiddle::Importer
  extend LVGL::Fiddlier

  dlload("liblvgui.so")

  # Alias all built-in types to their [u]intXX_t variants.
  [
    :SHORT,
    :LONG,
    :LONG_LONG,
    :CHAR,
    :INT,
  ].each do |type|
    [
      "",
      "unsigned",
    ].each do |signedness|
      sz = Fiddle.const_get("SIZEOF_#{type}".to_sym) * 8
      alias_name = "int#{sz}_t"
      aliased_type = type.to_s.downcase.gsub("_", " ")

      if signedness == "unsigned"
        alias_name = "u#{alias_name}"
        aliased_type = "#{signedness} #{aliased_type}"
      end
      typealias(alias_name, aliased_type)
    end
  end
  typealias("bool", "uint8_t")

  # lv_conf.h
  typealias("lv_coord_t", "int16_t")
  typedef "lv_obj_user_data_t", "void *"

  # introspection.h
  extern "bool lv_introspection_is_simulator()"
  extern "bool lv_introspection_is_debug()"
  extern "bool lv_introspection_use_assert_style()"

  # lvgl/src/lv_misc/lv_task.h
  enum!(:LV_TASK_PRIO, [
    :OFF,
    :LOWEST,
    :LOW,
    :MID,
    :HIGH,
    :HIGHEST,
  ], type: "uint8_t")
  typealias("lv_task_prio_t", "LV_TASK_PRIO")

  # lvgl/src/lv_themes/lv_theme.h
  extern "void lv_theme_set_current(lv_theme_t *)"
  extern "lv_theme_t * lv_theme_get_current(void)"

  # lvgl/src/lv_themes/lv_theme_night.h
  extern "lv_theme_t * lv_theme_night_init(uint16_t, lv_font_t *)"
  extern "lv_theme_t * lv_theme_get_night(void)"

  # lvgl/src/lv_core/lv_obj.h
  enum!(:LV_EVENT, [
    :PRESSED,             # < The object has been pressed*/
    :PRESSING,            # < The object is being pressed (called continuously while pressing)*/
    :PRESS_LOST,          # < User is still pressing but slid cursor/finger off of the object */
    :SHORT_CLICKED,       # < User pressed object for a short period of time, then released it. Not called if dragged. */
    :LONG_PRESSED,        # < Object has been pressed for at least `LV_INDEV_LONG_PRESS_TIME`.  Not called if dragged.*/
    :LONG_PRESSED_REPEAT, # < Called after `LV_INDEV_LONG_PRESS_TIME` in every
                          #   `LV_INDEV_LONG_PRESS_REP_TIME` ms.  Not called if dragged.*/
    :CLICKED,             # < Called on release if not dragged (regardless to long press)*/
    :RELEASED,            # < Called in every cases when the object has been released*/                                    
    :DRAG_BEGIN,		  
    :DRAG_END,
    :DRAG_THROW_BEGIN,
    :KEY,
    :FOCUSED,
    :DEFOCUSED,
    :VALUE_CHANGED,		  # < The object's value has changed (i.e. slider moved) */
    :INSERT,
    :REFRESH,
    :APPLY,  # < "Ok", "Apply" or similar specific button has clicked*/
    :CANCEL, # < "Close", "Cancel" or similar specific button has clicked*/
    :DELETE, # < Object is being deleted */

  ], type: "uint8_t")
  typealias("lv_event_t", "LV_EVENT")
  typedef "lv_event_cb_t", "void (*lv_event_cb_t)(struct _lv_obj_t *, lv_event_t)"

  extern "lv_obj_t * lv_obj_create(lv_obj_t *, const lv_obj_t *)"
  extern "const lv_style_t * lv_obj_get_style(const lv_obj_t *)"
  extern "void lv_obj_set_style(lv_obj_t *, const lv_style_t *)"
  extern "lv_coord_t lv_obj_get_width(const lv_obj_t *)"
  extern "lv_coord_t lv_obj_get_height(const lv_obj_t *)"
  extern "lv_coord_t lv_obj_get_width_fit(const lv_obj_t *)"
  extern "lv_coord_t lv_obj_get_height_fit(const lv_obj_t *)"
  extern "void lv_obj_set_width(lv_obj_t *, lv_coord_t)"
  extern "void lv_obj_set_height(lv_obj_t *, lv_coord_t)"
  extern "lv_coord_t lv_obj_get_x(const lv_obj_t *)"
  extern "lv_coord_t lv_obj_get_y(const lv_obj_t *)"
  extern "lv_obj_user_data_t lv_obj_get_user_data(const lv_obj_t *)"
  extern "lv_obj_user_data_t * lv_obj_get_user_data_ptr(const lv_obj_t *)"
  extern "void lv_obj_set_user_data(lv_obj_t *, lv_obj_user_data_t)"
  extern "void lv_obj_set_event_cb(lv_obj_t *, lv_event_cb_t)"
  extern "void lv_obj_set_pos(lv_obj_t *, lv_coord_t, lv_coord_t)"
  extern "void lv_obj_set_x(lv_obj_t *, lv_coord_t)"
  extern "void lv_obj_set_y(lv_obj_t *, lv_coord_t)"
  extern "void lv_obj_clean(lv_obj_t *)"
  extern "lv_obj_t * lv_obj_get_parent(const lv_obj_t *)"

  def handle_lv_event(obj_p, event)
    #userdata = lv_obj_get_user_data(obj_p)
    #instance = userdata.to_value
    # Pick from our registry, until we can rehydrate the object type with Fiddle.
    instance = LVGL::LVObject::REGISTRY[obj_p.to_i]
    instance.instance_exec do
      if @event_handler_proc
        @event_handler_proc.call(event)
      end
    end
  end
  bound_method! :handle_lv_event, "void handle_lv_event_(struct _lv_obj_t *, lv_event_t)"

  # lvgl/src/lv_objx/lv_btn.h
  extern "lv_obj_t * lv_btn_create(lv_obj_t *, const lv_obj_t *)"
  extern "void lv_btn_set_ink_in_time(lv_obj_t *, uint16_t)"
  extern "void lv_btn_set_ink_wait_time(lv_obj_t *, uint16_t)"
  extern "void lv_btn_set_ink_out_time(lv_obj_t *, uint16_t)"

  # lvgl/src/lv_objx/lv_cont.h
  #typedef uint8_t lv_layout_t;
  enum!(:LV_LAYOUT, [
    {OFF: 0}, #< No layout */
    :CENTER, #< Center objects */
    :COL_L,  #< Column left align*/
    :COL_M,  #< Column middle align*/
    :COL_R,  #< Column right align*/
    :ROW_T,  #< Row top align*/
    :ROW_M,  #< Row middle align*/
    :ROW_B,  #< Row bottom align*/
    :PRETTY, #< Put as many object as possible in row and begin a new row*/
    :GRID,   #< Align same-sized object into a grid*/
  ], type: "uint8_t")
  typealias("lv_layout_t", "LV_LAYOUT")

  enum!(:LV_FIT, [
    :NONE,  #< Do not change the size automatically*/
    :TIGHT, #< Shrink wrap around the children */
    :FLOOD, #< Align the size to the parent's edge*/
    :FILL,  #< Align the size to the parent's edge first but if there is an object out of it
            #        then get larger */
  ], type: "uint8_t")
  typealias("lv_fit_t", "LV_FIT")

  # typedef uint8_t lv_cont_style_t;
  enum!(:LV_CONT_STYLE, [
    :MAIN,
  ])
  typealias("lv_cont_style_t", "LV_CONT_STYLE")

  extern "lv_obj_t * lv_cont_create(lv_obj_t *, const lv_obj_t *)"
  extern "void lv_cont_set_layout(lv_obj_t *, lv_layout_t)"
  extern "void lv_cont_set_fit4(lv_obj_t *, lv_fit_t, lv_fit_t, lv_fit_t, lv_fit_t)"
  extern "void lv_cont_set_fit2(lv_obj_t *, lv_fit_t, lv_fit_t)"
  extern "void lv_cont_set_fit(lv_obj_t *, lv_fit_t)"

  # lvgl/src/lv_misc/lv_color.h
  typealias("lv_color_t", "uint32_t")
  typealias("lv_opa_t", "uint8_t")

  # lvgl/src/lv_core/lv_disp.h
  extern "void lv_disp_load_scr(lv_obj_t *)"

  # lvgl/src/lv_objx/lv_img.h
  extern "lv_obj_t * lv_img_create(lv_obj_t *, const lv_obj_t *)"
  extern "void lv_img_set_src(lv_obj_t *, const void *)"

  # lvgl/src/lv_objx/lv_label.h
  enum!(:LV_LABEL_LONG, [
    :EXPAND,     #< Expand the object size to the text size*/
    :BREAK,      #< Keep the object width, break the too long lines and expand the object
                 #  height*/
    :DOT,        #< Keep the size and write dots at the end if the text is too long*/
    :SROLL,      #< Keep the size and roll the text back and forth*/
    :SROLL_CIRC, #< Keep the size and roll the text circularly*/
    :CROP,       #< Keep the size and crop the text out of it*/
  ], type: "uint8_t")
  typealias("lv_label_long_mode_t", "LV_LABEL_LONG")

  enum!(:LV_LABEL_ALIGN, [
    :LEFT,   #< Align text to left */
    :CENTER, #< Align text to center */
    :RIGHT,  #< Align text to right */
    :AUTO,   #< Use LEFT or RIGHT depending on the direction of the text (LTR/RTL)*/
  ], type: "uint8_t")
  typealias("lv_label_align_t", "LV_LABEL_ALIGN")

  enum!(:LV_LABEL_STYLE, [
    :MAIN
  ], type: "uint8_t")
  typealias("lv_label_style_t", "LV_LABEL_STYLE")

  extern "lv_obj_t * lv_label_create(lv_obj_t *, const lv_obj_t *)"
  extern "void lv_label_set_text(lv_obj_t *, const char *)"
  # extern "void lv_label_set_text_fmt(lv_obj_t * label, const char * fmt, ...)" varargs?
  extern "void lv_label_set_long_mode(lv_obj_t *, lv_label_long_mode_t)"
  extern "void lv_label_set_align(lv_obj_t *, lv_label_align_t)"

  # lvgl/src/lv_objx/lv_page.h
  enum!(:LV_ANIM, [
    :OFF,
    :ON,
  ])
  typealias("lv_anim_enable_t", "LV_ANIM")
  enum!(:LV_PAGE_STYLE, [
    :BG,
    :SCRL,
    :SB,
    :EDGE_FLASH,
  ], type: "uint8_t")
  typealias("lv_page_style_t", "LV_PAGE_STYLE")

  extern "lv_obj_t * lv_page_create(lv_obj_t *, const lv_obj_t *)"
  extern "void lv_page_clean(lv_obj_t *)"
  extern "lv_obj_t * lv_page_get_scrl(const lv_obj_t *)"
  extern "void lv_page_set_scrl_layout(lv_obj_t *, lv_layout_t)"
  extern "void lv_page_glue_obj(lv_obj_t *, bool)"
  extern "void lv_page_set_style(lv_obj_t *, lv_page_style_t, const lv_style_t *)"
  extern "void lv_page_focus(lv_obj_t *, const lv_obj_t *, lv_anim_enable_t)"

  # lvgl/src/lv_core/lv_style.h

  #typedef uint8_t lv_border_part_t
  enum!(:LV_BORDER, [
    { :NONE     => 0x00 },
    { :BOTTOM   => 0x01 },
    { :TOP      => 0x02 },
    { :LEFT     => 0x04 },
    { :RIGHT    => 0x08 },
    { :FULL     => 0x0F },
    { :INTERNAL => 0x10 },
  ], type: :uint8_t)
  typealias("lv_border_part_t", "LV_BORDER")

  enum!(:LV_SHADOW, [
    :BOTTOM,
    :FULL,
  ], type: :uint8_t)
  typealias("lv_shadow_type_t", "LV_SHADOW")

  #extern "void lv_style_init(void)"
  extern "void lv_style_copy(lv_style_t *, const lv_style_t *)"

  # Focus groups
  typedef "lv_group_focus_cb_t", "void (*lv_group_focus_cb_t)(struct _lv_group_t *)"
  extern "lv_group_t * lvgui_get_focus_group()"
  extern "void lv_group_add_obj(lv_group_t *, lv_obj_t *)"
  extern "void lv_group_remove_obj(lv_obj_t *)"
  extern "void lv_group_remove_all_objs(lv_group_t *)"
  extern "void lv_group_focus_obj(lv_obj_t *)"
  extern "void lv_group_focus_next(lv_group_t *)"
  extern "void lv_group_focus_prev(lv_group_t *)"
  extern "void lv_group_focus_freeze(lv_group_t *, bool)"
  extern "void lv_group_set_click_focus(lv_group_t *, bool)"
  extern "void lv_group_set_wrap(lv_group_t *, bool)"
  extern "lv_obj_t *lv_group_get_focused(const lv_group_t *)"
  extern "void lv_group_set_focus_cb(lv_group_t *, lv_group_focus_cb_t)"
  extern "lv_obj_t * lv_group_get_focused(const lv_group_t *)"

  typedef "lv_group_user_data_t", "void *"
  extern "lv_group_user_data_t *lv_group_get_user_data(lv_group_t *)"
  extern "void lv_group_set_user_data(lv_group_t *, lv_group_user_data_t)"

  def handle_lv_focus(group_p)
    #userdata = lv_group_get_user_data(group_p)
    #instance = userdata.to_value
    # Pick from our registry, until we can rehydrate the object type with Fiddle.
    instance = LVGL::LVGroup::REGISTRY[group_p.to_i]
    instance.instance_exec do
      if @focus_handler_proc
        @focus_handler_proc.call()
      end
    end
  end
  bound_method! :handle_lv_focus, "void handle_lv_focus_(_lv_group_t *)"
end
