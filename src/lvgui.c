/*
 * Generated bindings...
 * Changing is fraught with perils.
 */
#include <lv_lib_nanosvg/lv_nanosvg.h>
#include <lvgl/lvgl.h>
#include <lv_conf.h>
#include <lv_drv_conf.h>
#include <mruby.h>
#include <mruby/data.h>
#include <mruby/hash.h>
#include <mruby/string.h>
#include <mruby/value.h>
#include <mruby/variable.h>
#include <stdlib.h>
#include <unistd.h>
#include <hal.h>
/*
 * Used to setup the width/height of the SDL window in Ruby...
 */
#if USE_MONITOR
extern int monitor_width;
extern int monitor_height;
#endif
typedef struct mrb_lv_userdata_ {
  mrb_value value;
  mrb_state * mrb;
} mrb_lv_userdata;

/* Function declarations */
void mrb_mruby_lvgui_gem_init(mrb_state * mrb);
void mrb_mruby_lvgui_gem_final(mrb_state * mrb);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_box_style(mrb_state * mrb, lv_style_t * style);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_dup(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_glass(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_glass__equals(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_border_color(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_border_color__equals(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_border_opa(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_border_opa__equals(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_border_part(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_border_part__equals(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_border_width(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_border_width__equals(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_grad_color(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_grad_color__equals(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_main_color(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_main_color__equals(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_opa(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_opa__equals(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_padding_bottom(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_padding_bottom__equals(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_padding_inner(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_padding_inner__equals(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_padding_left(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_padding_left__equals(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_padding_right(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_padding_right__equals(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_padding_top(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_padding_top__equals(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_radius(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_radius__equals(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_shadow_color(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_shadow_color__equals(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_shadow_type(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_shadow_type__equals(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_shadow_width(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_shadow_width__equals(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_image_color(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_image_color__equals(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_image_intense(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_image_intense__equals(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_image_opa(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_image_opa__equals(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_line_color(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_line_color__equals(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_line_opa(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_line_opa__equals(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_line_width(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_line_width__equals(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_text_color(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_text_color__equals(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_text_font(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_text_font__equals(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_text_letter_space(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_text_letter_space__equals(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_text_line_space(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_text_line_space__equals(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_text_opa(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_text_opa__equals(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_text_sel_color(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_text_sel_color__equals(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_module_Hacks_monitor_width__equals(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_module_Hacks_monitor_height__equals(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_module_Hacks_simulator__question_mark(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_module_Hacks_init(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_module_Hacks_theme_night(mrb_state * mrb, mrb_value self);
void mrb_mruby_lvgui_module_LVGL_module_Hacks_module_LVTask_task_handler(lv_task_t * task);
static mrb_value mrb_mruby_lvgui_module_LVGL_module_Hacks_module_LVTask_create_task(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_module_Hacks_module_LVTask_handle_tasks(mrb_state * mrb, mrb_value self);
static void mrb_mruby_lvgui_module_LVGL_class_LVObject_event_handler(lv_obj_t * obj, lv_event_t event);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_event_handler__equals(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_initialize(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_invalidate(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_move_foreground(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_move_background(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_set_pos(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_set_x(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_set_y(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_set_size(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_set_width(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_set_height(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_realign(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_set_auto_realign(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_set_ext_click_area(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_refresh_style(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_set_hidden(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_set_click(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_set_top(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_set_drag(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_set_drag_dir(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_set_drag_throw(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_set_drag_parent(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_set_parent_event(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_set_base_dir(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_set_opa_scale_enable(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_set_opa_scale(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_set_protect(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_clear_protect(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_refresh_ext_draw_pad(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_count_children(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_count_children_recursive(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_get_x(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_get_y(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_get_width(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_get_height(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_get_width_fit(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_get_height_fit(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_get_auto_realign(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_get_ext_click_pad_left(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_get_ext_click_pad_right(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_get_ext_click_pad_top(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_get_ext_click_pad_bottom(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_get_ext_draw_pad(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_get_hidden(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_get_click(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_get_top(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_get_drag(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_get_drag_dir(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_get_drag_throw(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_get_drag_parent(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_get_parent_event(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_get_base_dir(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_get_opa_scale_enable(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_get_opa_scale(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_get_protect(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_is_protected(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_is_focused(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_glue_obj(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_get_style(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_set_style(mrb_state * mrb, mrb_value self);
static void mrb_mruby_lvgui_module_LVGL_class_LVContainer_event_handler(lv_obj_t * obj, lv_event_t event);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVContainer_event_handler__equals(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVContainer_initialize(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVContainer_set_layout(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVContainer_set_fit4(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVContainer_set_fit2(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVContainer_set_fit(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVContainer_get_layout(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVContainer_get_fit_left(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVContainer_get_fit_right(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVContainer_get_fit_top(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVContainer_get_fit_bottom(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVContainer_get_style(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVContainer_set_style(mrb_state * mrb, mrb_value self);
static void mrb_mruby_lvgui_module_LVGL_class_LVPage_event_handler(lv_obj_t * obj, lv_event_t event);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVPage_event_handler__equals(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVPage_initialize(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVPage_get_scrl_height(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVPage_get_scrl_layout(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVPage_get_scrl_width(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVPage_set_scrl_fit(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVPage_set_scrl_fit2(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVPage_set_scrl_fit4(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVPage_set_scrl_height(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVPage_set_scrl_layout(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVPage_set_scrl_width(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVPage_get_style(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVPage_set_style(mrb_state * mrb, mrb_value self);
static void mrb_mruby_lvgui_module_LVGL_class_LVTabview_event_handler(lv_obj_t * obj, lv_event_t event);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVTabview_event_handler__equals(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVTabview_initialize(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVTabview_clean(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVTabview_set_tab_act(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVTabview_set_sliding(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVTabview_set_anim_time(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVTabview_set_btns_pos(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVTabview_set_btns_hidden(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVTabview_get_tab_act(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVTabview_get_tab_count(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVTabview_get_sliding(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVTabview_get_anim_time(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVTabview_get_btns_pos(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVTabview_get_btns_hidden(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVTabview_add_tab(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVTabview_get_style(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVTabview_set_style(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVTabview_class_LVTabpage_initialize(mrb_state * mrb, mrb_value self);
static void mrb_mruby_lvgui_module_LVGL_class_LVButton_event_handler(lv_obj_t * obj, lv_event_t event);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVButton_event_handler__equals(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVButton_initialize(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVButton_set_toggle(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVButton_set_state(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVButton_toggle(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVButton_set_layout(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVButton_set_fit4(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVButton_set_fit2(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVButton_set_fit(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVButton_set_ink_in_time(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVButton_set_ink_wait_time(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVButton_set_ink_out_time(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVButton_get_state(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVButton_get_toggle(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVButton_get_layout(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVButton_get_fit_left(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVButton_get_fit_right(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVButton_get_fit_top(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVButton_get_fit_bottom(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVButton_get_ink_in_time(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVButton_get_ink_wait_time(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVButton_get_ink_out_time(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVButton_get_style(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVButton_set_style(mrb_state * mrb, mrb_value self);
static void mrb_mruby_lvgui_module_LVGL_class_LVLabel_event_handler(lv_obj_t * obj, lv_event_t event);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVLabel_event_handler__equals(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVLabel_initialize(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVLabel_set_text(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVLabel_set_array_text(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVLabel_set_long_mode(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVLabel_set_align(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVLabel_set_recolor(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVLabel_set_body_draw(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVLabel_set_anim_speed(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVLabel_set_text_sel_start(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVLabel_set_text_sel_end(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVLabel_get_text(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVLabel_get_long_mode(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVLabel_get_align(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVLabel_get_recolor(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVLabel_get_body_draw(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVLabel_get_anim_speed(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVLabel_get_text_sel_start(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVLabel_get_text_sel_end(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVLabel_ins_text(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVLabel_cut_text(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVLabel_get_style(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVLabel_set_style(mrb_state * mrb, mrb_value self);
static void mrb_mruby_lvgui_module_LVGL_class_LVImage_event_handler(lv_obj_t * obj, lv_event_t event);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVImage_event_handler__equals(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVImage_initialize(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVImage_set_src(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVImage_set_auto_size(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVImage_set_offset_x(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVImage_set_offset_y(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVImage_get_src(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVImage_get_file_name(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVImage_get_auto_size(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVImage_get_offset_x(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVImage_get_offset_y(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVImage_get_style(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVImage_set_style(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_module_LVNanoSVG_resize_next_width(mrb_state * mrb, mrb_value self);
static mrb_value mrb_mruby_lvgui_module_LVGL_module_LVNanoSVG_resize_next_height(mrb_state * mrb, mrb_value self);

/*
 * Plumbing necessary for custom data for lv_style_t pointers.
 */
static mrb_lv_style_t_free(mrb_state *mrb, void *p) {
  // TODO: properly handle this!
}
static const struct mrb_data_type mrb_lv_style_t_type = {
  "lv_style_t",
  mrb_lv_style_t_free
};

// Start of LvStyle
/*
 * Hash to hold known LVStyle instances, indexed by address.to_i
 */
static mrb_value known_lv_styles;
// End of LvStyle
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_box_style(mrb_state * mrb, lv_style_t * style) {
mrb_value key = mrb_fixnum_value(style);
mrb_value value = mrb_hash_get(mrb, known_lv_styles, key);
if (mrb_nil_p(value)) {
  value = mrb_obj_value(Data_Wrap_Struct(
    mrb,
    (mrb_class_get_under(mrb, (mrb_module_get_under(mrb, (mrb->object_class), "LVGL")), "LVStyle")),
    &mrb_lv_style_t_type,
    style
  ));
  mrb_hash_set(mrb, known_lv_styles, key, value);
}

return value;
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_dup(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVStyle#dup()
 */
lv_style_t * copy = malloc(sizeof(*copy));
lv_style_t * unboxed_style = ((lv_style_t*)DATA_PTR(self));
lv_style_copy(copy, unboxed_style);
mrb_value key = mrb_fixnum_value(copy);

// Boxing the type in a fresh instance.
mrb_value new_instance = mrb_obj_value(Data_Wrap_Struct(
  mrb,
  (mrb_class_get_under(mrb, (mrb_module_get_under(mrb, (mrb->object_class), "LVGL")), "LVStyle")),
  &mrb_lv_style_t_type,
  copy
));
mrb_hash_set(mrb, known_lv_styles, key, new_instance);

return new_instance;
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_glass(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVStyle#glass()
 */
lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
return mrb_fixnum_value(style->glass);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_glass__equals(mrb_state * mrb, mrb_value self) {
mrb_int value = 0;
/*
 * Class method LVGL::LVStyle#glass__equals(value)
 */
mrb_get_args(
  mrb,
  "i",
  &value
);

lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
style->glass = value;
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_border_color(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVStyle#body_border_color()
 */
lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
return mrb_fixnum_value(style->body.border.color.full);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_border_color__equals(mrb_state * mrb, mrb_value self) {
mrb_int value = 0;
/*
 * Class method LVGL::LVStyle#body_border_color__equals(value)
 */
mrb_get_args(
  mrb,
  "i",
  &value
);

lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
style->body.border.color.full = value;
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_border_opa(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVStyle#body_border_opa()
 */
lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
return mrb_fixnum_value(style->body.border.opa);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_border_opa__equals(mrb_state * mrb, mrb_value self) {
mrb_int value = 0;
/*
 * Class method LVGL::LVStyle#body_border_opa__equals(value)
 */
mrb_get_args(
  mrb,
  "i",
  &value
);

lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
style->body.border.opa = value;
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_border_part(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVStyle#body_border_part()
 */
lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
return mrb_fixnum_value(style->body.border.part);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_border_part__equals(mrb_state * mrb, mrb_value self) {
mrb_int value = 0;
/*
 * Class method LVGL::LVStyle#body_border_part__equals(value)
 */
mrb_get_args(
  mrb,
  "i",
  &value
);

lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
style->body.border.part = value;
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_border_width(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVStyle#body_border_width()
 */
lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
return mrb_fixnum_value(style->body.border.width);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_border_width__equals(mrb_state * mrb, mrb_value self) {
mrb_int value = 0;
/*
 * Class method LVGL::LVStyle#body_border_width__equals(value)
 */
mrb_get_args(
  mrb,
  "i",
  &value
);

lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
style->body.border.width = value;
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_grad_color(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVStyle#body_grad_color()
 */
lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
return mrb_fixnum_value(style->body.grad_color.full);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_grad_color__equals(mrb_state * mrb, mrb_value self) {
mrb_int value = 0;
/*
 * Class method LVGL::LVStyle#body_grad_color__equals(value)
 */
mrb_get_args(
  mrb,
  "i",
  &value
);

lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
style->body.grad_color.full = value;
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_main_color(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVStyle#body_main_color()
 */
lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
return mrb_fixnum_value(style->body.main_color.full);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_main_color__equals(mrb_state * mrb, mrb_value self) {
mrb_int value = 0;
/*
 * Class method LVGL::LVStyle#body_main_color__equals(value)
 */
mrb_get_args(
  mrb,
  "i",
  &value
);

lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
style->body.main_color.full = value;
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_opa(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVStyle#body_opa()
 */
lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
return mrb_fixnum_value(style->body.opa);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_opa__equals(mrb_state * mrb, mrb_value self) {
mrb_int value = 0;
/*
 * Class method LVGL::LVStyle#body_opa__equals(value)
 */
mrb_get_args(
  mrb,
  "i",
  &value
);

lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
style->body.opa = value;
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_padding_bottom(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVStyle#body_padding_bottom()
 */
lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
return mrb_fixnum_value(style->body.padding.bottom);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_padding_bottom__equals(mrb_state * mrb, mrb_value self) {
mrb_int value = 0;
/*
 * Class method LVGL::LVStyle#body_padding_bottom__equals(value)
 */
mrb_get_args(
  mrb,
  "i",
  &value
);

lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
style->body.padding.bottom = value;
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_padding_inner(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVStyle#body_padding_inner()
 */
lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
return mrb_fixnum_value(style->body.padding.inner);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_padding_inner__equals(mrb_state * mrb, mrb_value self) {
mrb_int value = 0;
/*
 * Class method LVGL::LVStyle#body_padding_inner__equals(value)
 */
mrb_get_args(
  mrb,
  "i",
  &value
);

lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
style->body.padding.inner = value;
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_padding_left(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVStyle#body_padding_left()
 */
lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
return mrb_fixnum_value(style->body.padding.left);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_padding_left__equals(mrb_state * mrb, mrb_value self) {
mrb_int value = 0;
/*
 * Class method LVGL::LVStyle#body_padding_left__equals(value)
 */
mrb_get_args(
  mrb,
  "i",
  &value
);

lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
style->body.padding.left = value;
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_padding_right(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVStyle#body_padding_right()
 */
lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
return mrb_fixnum_value(style->body.padding.right);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_padding_right__equals(mrb_state * mrb, mrb_value self) {
mrb_int value = 0;
/*
 * Class method LVGL::LVStyle#body_padding_right__equals(value)
 */
mrb_get_args(
  mrb,
  "i",
  &value
);

lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
style->body.padding.right = value;
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_padding_top(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVStyle#body_padding_top()
 */
lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
return mrb_fixnum_value(style->body.padding.top);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_padding_top__equals(mrb_state * mrb, mrb_value self) {
mrb_int value = 0;
/*
 * Class method LVGL::LVStyle#body_padding_top__equals(value)
 */
mrb_get_args(
  mrb,
  "i",
  &value
);

lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
style->body.padding.top = value;
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_radius(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVStyle#body_radius()
 */
lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
return mrb_fixnum_value(style->body.radius);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_radius__equals(mrb_state * mrb, mrb_value self) {
mrb_int value = 0;
/*
 * Class method LVGL::LVStyle#body_radius__equals(value)
 */
mrb_get_args(
  mrb,
  "i",
  &value
);

lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
style->body.radius = value;
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_shadow_color(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVStyle#body_shadow_color()
 */
lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
return mrb_fixnum_value(style->body.shadow.color.full);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_shadow_color__equals(mrb_state * mrb, mrb_value self) {
mrb_int value = 0;
/*
 * Class method LVGL::LVStyle#body_shadow_color__equals(value)
 */
mrb_get_args(
  mrb,
  "i",
  &value
);

lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
style->body.shadow.color.full = value;
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_shadow_type(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVStyle#body_shadow_type()
 */
lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
return mrb_fixnum_value(style->body.shadow.type);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_shadow_type__equals(mrb_state * mrb, mrb_value self) {
mrb_int value = 0;
/*
 * Class method LVGL::LVStyle#body_shadow_type__equals(value)
 */
mrb_get_args(
  mrb,
  "i",
  &value
);

lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
style->body.shadow.type = value;
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_shadow_width(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVStyle#body_shadow_width()
 */
lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
return mrb_fixnum_value(style->body.shadow.width);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_shadow_width__equals(mrb_state * mrb, mrb_value self) {
mrb_int value = 0;
/*
 * Class method LVGL::LVStyle#body_shadow_width__equals(value)
 */
mrb_get_args(
  mrb,
  "i",
  &value
);

lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
style->body.shadow.width = value;
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_image_color(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVStyle#image_color()
 */
lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
return mrb_fixnum_value(style->image.color.full);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_image_color__equals(mrb_state * mrb, mrb_value self) {
mrb_int value = 0;
/*
 * Class method LVGL::LVStyle#image_color__equals(value)
 */
mrb_get_args(
  mrb,
  "i",
  &value
);

lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
style->image.color.full = value;
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_image_intense(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVStyle#image_intense()
 */
lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
return mrb_fixnum_value(style->image.intense);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_image_intense__equals(mrb_state * mrb, mrb_value self) {
mrb_int value = 0;
/*
 * Class method LVGL::LVStyle#image_intense__equals(value)
 */
mrb_get_args(
  mrb,
  "i",
  &value
);

lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
style->image.intense = value;
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_image_opa(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVStyle#image_opa()
 */
lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
return mrb_fixnum_value(style->image.opa);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_image_opa__equals(mrb_state * mrb, mrb_value self) {
mrb_int value = 0;
/*
 * Class method LVGL::LVStyle#image_opa__equals(value)
 */
mrb_get_args(
  mrb,
  "i",
  &value
);

lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
style->image.opa = value;
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_line_color(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVStyle#line_color()
 */
lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
return mrb_fixnum_value(style->line.color.full);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_line_color__equals(mrb_state * mrb, mrb_value self) {
mrb_int value = 0;
/*
 * Class method LVGL::LVStyle#line_color__equals(value)
 */
mrb_get_args(
  mrb,
  "i",
  &value
);

lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
style->line.color.full = value;
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_line_opa(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVStyle#line_opa()
 */
lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
return mrb_fixnum_value(style->line.opa);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_line_opa__equals(mrb_state * mrb, mrb_value self) {
mrb_int value = 0;
/*
 * Class method LVGL::LVStyle#line_opa__equals(value)
 */
mrb_get_args(
  mrb,
  "i",
  &value
);

lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
style->line.opa = value;
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_line_width(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVStyle#line_width()
 */
lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
return mrb_fixnum_value(style->line.width);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_line_width__equals(mrb_state * mrb, mrb_value self) {
mrb_int value = 0;
/*
 * Class method LVGL::LVStyle#line_width__equals(value)
 */
mrb_get_args(
  mrb,
  "i",
  &value
);

lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
style->line.width = value;
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_text_color(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVStyle#text_color()
 */
lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
return mrb_fixnum_value(style->text.color.full);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_text_color__equals(mrb_state * mrb, mrb_value self) {
mrb_int value = 0;
/*
 * Class method LVGL::LVStyle#text_color__equals(value)
 */
mrb_get_args(
  mrb,
  "i",
  &value
);

lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
style->text.color.full = value;
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_text_font(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVStyle#text_font()
 */
lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
return mrb_fixnum_value(style->text.font);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_text_font__equals(mrb_state * mrb, mrb_value self) {
mrb_int value = 0;
/*
 * Class method LVGL::LVStyle#text_font__equals(value)
 */
mrb_get_args(
  mrb,
  "i",
  &value
);

lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
style->text.font = value;
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_text_letter_space(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVStyle#text_letter_space()
 */
lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
return mrb_fixnum_value(style->text.letter_space);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_text_letter_space__equals(mrb_state * mrb, mrb_value self) {
mrb_int value = 0;
/*
 * Class method LVGL::LVStyle#text_letter_space__equals(value)
 */
mrb_get_args(
  mrb,
  "i",
  &value
);

lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
style->text.letter_space = value;
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_text_line_space(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVStyle#text_line_space()
 */
lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
return mrb_fixnum_value(style->text.line_space);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_text_line_space__equals(mrb_state * mrb, mrb_value self) {
mrb_int value = 0;
/*
 * Class method LVGL::LVStyle#text_line_space__equals(value)
 */
mrb_get_args(
  mrb,
  "i",
  &value
);

lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
style->text.line_space = value;
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_text_opa(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVStyle#text_opa()
 */
lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
return mrb_fixnum_value(style->text.opa);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_text_opa__equals(mrb_state * mrb, mrb_value self) {
mrb_int value = 0;
/*
 * Class method LVGL::LVStyle#text_opa__equals(value)
 */
mrb_get_args(
  mrb,
  "i",
  &value
);

lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
style->text.opa = value;
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_text_sel_color(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVStyle#text_sel_color()
 */
lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
return mrb_fixnum_value(style->text.sel_color.full);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVStyle_text_sel_color__equals(mrb_state * mrb, mrb_value self) {
mrb_int value = 0;
/*
 * Class method LVGL::LVStyle#text_sel_color__equals(value)
 */
mrb_get_args(
  mrb,
  "i",
  &value
);

lv_style_t * style = ((lv_style_t*)DATA_PTR(self));
style->text.sel_color.full = value;
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_module_Hacks_monitor_width__equals(mrb_state * mrb, mrb_value self) {
mrb_int value = 0;
/*
 * Class method LVGL::Hacks#monitor_width__equals(value)
 */
mrb_get_args(
  mrb,
  "i",
  &value
);

#if USE_MONITOR
monitor_width = value;
#endif
}
static mrb_value mrb_mruby_lvgui_module_LVGL_module_Hacks_monitor_height__equals(mrb_state * mrb, mrb_value self) {
mrb_int value = 0;
/*
 * Class method LVGL::Hacks#monitor_height__equals(value)
 */
mrb_get_args(
  mrb,
  "i",
  &value
);

#if USE_MONITOR
monitor_height = value;
#endif
}
static mrb_value mrb_mruby_lvgui_module_LVGL_module_Hacks_simulator__question_mark(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::Hacks#simulator__question_mark()
 */
#if LVGL_ENV_SIMULATOR
return mrb_true_value();
#else
return mrb_false_value();
#endif
}
static mrb_value mrb_mruby_lvgui_module_LVGL_module_Hacks_init(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::Hacks#init()
 */
hal_init();
lv_nanosvg_init();
}
static mrb_value mrb_mruby_lvgui_module_LVGL_module_Hacks_theme_night(mrb_state * mrb, mrb_value self) {
mrb_int hue = 0;
/*
 * Class method LVGL::Hacks#theme_night(hue)
 */
mrb_get_args(
  mrb,
  "i",
  &hue
);

lv_theme_set_current(
  lv_theme_night_init(hue, NULL)
);
}
void mrb_mruby_lvgui_module_LVGL_module_Hacks_module_LVTask_task_handler(lv_task_t * task) {
mrb_lv_userdata * data = (mrb_lv_userdata *)(task->user_data);
mrb_state * mrb = data->mrb;
mrb_value proc = data->value;
//mrb_value proc = mrb_iv_get(data->mrb, (data->value), mrb_intern_cstr(data->mrb, "@event_handler_proc"));
if (!mrb_nil_p(proc)) {
  mrb_funcall(mrb, proc, "call", 0);
}
}
static mrb_value mrb_mruby_lvgui_module_LVGL_module_Hacks_module_LVTask_create_task(mrb_state * mrb, mrb_value self) {
mrb_int period = 0;
mrb_int prio = 0;
mrb_value task = (mrb_nil_value());
/*
 * Class method LVGL::Hacks::LVTask#create_task(period, prio, task)
 */
mrb_get_args(
  mrb,
  "iio",
  &period, &prio, &task
);

mrb_lv_userdata * data = malloc(sizeof(mrb_lv_userdata));
// TODO: unregister on delete
mrb_gc_register(mrb, task);
data->mrb = mrb;
data->value = task;
lv_task_create(
  mrb_mruby_lvgui_module_LVGL_module_Hacks_module_LVTask_task_handler,
  period,
  prio,
  data
);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_module_Hacks_module_LVTask_handle_tasks(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::Hacks::LVTask#handle_tasks()
 */
lv_task_handler();
}
/*
 * Plumbing necessary for custom data for lv_obj_t pointers.
 */
static mrb_lv_obj_t_free(mrb_state *mrb, void *p) {
  // TODO: properly handle this!
}
static const struct mrb_data_type mrb_lv_obj_t_type = {
  "lv_obj_t",
  mrb_lv_obj_t_free
};

static void mrb_mruby_lvgui_module_LVGL_class_LVObject_event_handler(lv_obj_t * obj, lv_event_t event) {
mrb_lv_userdata * data = (mrb_lv_userdata *)(lv_obj_get_user_data(obj));
mrb_value m_event = mrb_fixnum_value(event);
mrb_value proc = mrb_iv_get(data->mrb, (data->value), mrb_intern_cstr(data->mrb, "@event_handler_proc"));
if (!mrb_nil_p(proc)) {
  mrb_funcall(data->mrb, proc, "call", 1, m_event);
}
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_event_handler__equals(mrb_state * mrb, mrb_value self) {
mrb_value value = (mrb_nil_value());
/*
 * Class method LVGL::LVObject#event_handler__equals(value)
 */
mrb_get_args(
  mrb,
  "o",
  &value
);

mrb_iv_set(mrb, self, mrb_intern_cstr(mrb, "@event_handler_proc"), value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_initialize(mrb_state * mrb, mrb_value self) {
mrb_value parent = (mrb_nil_value());
/*
 * Class method LVGL::LVObject#initialize(parent)
 */
mrb_get_args(
  mrb,
  "|o",
  &parent
);

// Forces the garbage collector to keep a reference.
// (TODO: unregister on delete, when delete is handled)
// Not registering, some objects leaves sight of mruby, but are
// still well alive inside the LVGL objects.
mrb_gc_register(mrb, self);
lv_obj_t * obj;

if (mrb_nil_p(parent)) {
  LV_LOG_INFO("[mruby] Creating LVObject as screen. (Switching lv_disp_load_scr!)");
  obj = lv_obj_create(NULL, NULL);
  // FIXME: Bad assumption here...
  lv_disp_load_scr(obj);
}
else {
  LV_LOG_INFO("[mruby] Creating LVObject as child.");
  obj = lv_obj_create(((lv_obj_t*)DATA_PTR(parent)), NULL);
}

// Associate the lv_obj to the mruby instance
mrb_data_init(self, obj, &mrb_lv_obj_t_type);

mrb_lv_userdata * data = malloc(sizeof(mrb_lv_userdata));
data->mrb = mrb;
data->value = self;

// Associate the mruby instance to the lv_obj
lv_obj_set_user_data(obj, (void *)(data));

// Associate the event handler to literally all mruby-instanciated
// lv_obj. We'll let the ruby-side code the chance to handle events.
// Another option would be to register this callback as needed.
lv_obj_set_event_cb(obj, mrb_mruby_lvgui_module_LVGL_class_LVObject_event_handler);

return self;
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_invalidate(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVObject#invalidate()
 */
lv_obj_invalidate(((lv_obj_t*)DATA_PTR(self)));
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_move_foreground(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVObject#move_foreground()
 */
lv_obj_move_foreground(((lv_obj_t*)DATA_PTR(self)));
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_move_background(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVObject#move_background()
 */
lv_obj_move_background(((lv_obj_t*)DATA_PTR(self)));
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_set_pos(mrb_state * mrb, mrb_value self) {
mrb_int arg1 = 0;
mrb_int arg2 = 0;
/*
 * Class method LVGL::LVObject#set_pos(arg1, arg2)
 */
mrb_get_args(
  mrb,
  "ii",
  &arg1, &arg2
);

lv_obj_set_pos(((lv_obj_t*)DATA_PTR(self)), arg1, arg2);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_set_x(mrb_state * mrb, mrb_value self) {
mrb_int arg1 = 0;
/*
 * Class method LVGL::LVObject#set_x(arg1)
 */
mrb_get_args(
  mrb,
  "i",
  &arg1
);

lv_obj_set_x(((lv_obj_t*)DATA_PTR(self)), arg1);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_set_y(mrb_state * mrb, mrb_value self) {
mrb_int arg1 = 0;
/*
 * Class method LVGL::LVObject#set_y(arg1)
 */
mrb_get_args(
  mrb,
  "i",
  &arg1
);

lv_obj_set_y(((lv_obj_t*)DATA_PTR(self)), arg1);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_set_size(mrb_state * mrb, mrb_value self) {
mrb_int arg1 = 0;
mrb_int arg2 = 0;
/*
 * Class method LVGL::LVObject#set_size(arg1, arg2)
 */
mrb_get_args(
  mrb,
  "ii",
  &arg1, &arg2
);

lv_obj_set_size(((lv_obj_t*)DATA_PTR(self)), arg1, arg2);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_set_width(mrb_state * mrb, mrb_value self) {
mrb_int arg1 = 0;
/*
 * Class method LVGL::LVObject#set_width(arg1)
 */
mrb_get_args(
  mrb,
  "i",
  &arg1
);

lv_obj_set_width(((lv_obj_t*)DATA_PTR(self)), arg1);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_set_height(mrb_state * mrb, mrb_value self) {
mrb_int arg1 = 0;
/*
 * Class method LVGL::LVObject#set_height(arg1)
 */
mrb_get_args(
  mrb,
  "i",
  &arg1
);

lv_obj_set_height(((lv_obj_t*)DATA_PTR(self)), arg1);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_realign(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVObject#realign()
 */
lv_obj_realign(((lv_obj_t*)DATA_PTR(self)));
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_set_auto_realign(mrb_state * mrb, mrb_value self) {
mrb_bool arg1 = false;
/*
 * Class method LVGL::LVObject#set_auto_realign(arg1)
 */
mrb_get_args(
  mrb,
  "b",
  &arg1
);

lv_obj_set_auto_realign(((lv_obj_t*)DATA_PTR(self)), arg1);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_set_ext_click_area(mrb_state * mrb, mrb_value self) {
mrb_int arg1 = 0;
mrb_int arg2 = 0;
mrb_int arg3 = 0;
mrb_int arg4 = 0;
/*
 * Class method LVGL::LVObject#set_ext_click_area(arg1, arg2, arg3, arg4)
 */
mrb_get_args(
  mrb,
  "iiii",
  &arg1, &arg2, &arg3, &arg4
);

lv_obj_set_ext_click_area(((lv_obj_t*)DATA_PTR(self)), arg1, arg2, arg3, arg4);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_refresh_style(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVObject#refresh_style()
 */
lv_obj_refresh_style(((lv_obj_t*)DATA_PTR(self)));
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_set_hidden(mrb_state * mrb, mrb_value self) {
mrb_bool arg1 = false;
/*
 * Class method LVGL::LVObject#set_hidden(arg1)
 */
mrb_get_args(
  mrb,
  "b",
  &arg1
);

lv_obj_set_hidden(((lv_obj_t*)DATA_PTR(self)), arg1);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_set_click(mrb_state * mrb, mrb_value self) {
mrb_bool arg1 = false;
/*
 * Class method LVGL::LVObject#set_click(arg1)
 */
mrb_get_args(
  mrb,
  "b",
  &arg1
);

lv_obj_set_click(((lv_obj_t*)DATA_PTR(self)), arg1);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_set_top(mrb_state * mrb, mrb_value self) {
mrb_bool arg1 = false;
/*
 * Class method LVGL::LVObject#set_top(arg1)
 */
mrb_get_args(
  mrb,
  "b",
  &arg1
);

lv_obj_set_top(((lv_obj_t*)DATA_PTR(self)), arg1);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_set_drag(mrb_state * mrb, mrb_value self) {
mrb_bool arg1 = false;
/*
 * Class method LVGL::LVObject#set_drag(arg1)
 */
mrb_get_args(
  mrb,
  "b",
  &arg1
);

lv_obj_set_drag(((lv_obj_t*)DATA_PTR(self)), arg1);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_set_drag_dir(mrb_state * mrb, mrb_value self) {
mrb_int arg1 = 0;
/*
 * Class method LVGL::LVObject#set_drag_dir(arg1)
 */
mrb_get_args(
  mrb,
  "i",
  &arg1
);

lv_obj_set_drag_dir(((lv_obj_t*)DATA_PTR(self)), arg1);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_set_drag_throw(mrb_state * mrb, mrb_value self) {
mrb_bool arg1 = false;
/*
 * Class method LVGL::LVObject#set_drag_throw(arg1)
 */
mrb_get_args(
  mrb,
  "b",
  &arg1
);

lv_obj_set_drag_throw(((lv_obj_t*)DATA_PTR(self)), arg1);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_set_drag_parent(mrb_state * mrb, mrb_value self) {
mrb_bool arg1 = false;
/*
 * Class method LVGL::LVObject#set_drag_parent(arg1)
 */
mrb_get_args(
  mrb,
  "b",
  &arg1
);

lv_obj_set_drag_parent(((lv_obj_t*)DATA_PTR(self)), arg1);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_set_parent_event(mrb_state * mrb, mrb_value self) {
mrb_bool arg1 = false;
/*
 * Class method LVGL::LVObject#set_parent_event(arg1)
 */
mrb_get_args(
  mrb,
  "b",
  &arg1
);

lv_obj_set_parent_event(((lv_obj_t*)DATA_PTR(self)), arg1);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_set_base_dir(mrb_state * mrb, mrb_value self) {
mrb_int arg1 = 0;
/*
 * Class method LVGL::LVObject#set_base_dir(arg1)
 */
mrb_get_args(
  mrb,
  "i",
  &arg1
);

lv_obj_set_base_dir(((lv_obj_t*)DATA_PTR(self)), arg1);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_set_opa_scale_enable(mrb_state * mrb, mrb_value self) {
mrb_bool arg1 = false;
/*
 * Class method LVGL::LVObject#set_opa_scale_enable(arg1)
 */
mrb_get_args(
  mrb,
  "b",
  &arg1
);

lv_obj_set_opa_scale_enable(((lv_obj_t*)DATA_PTR(self)), arg1);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_set_opa_scale(mrb_state * mrb, mrb_value self) {
mrb_int arg1 = 0;
/*
 * Class method LVGL::LVObject#set_opa_scale(arg1)
 */
mrb_get_args(
  mrb,
  "i",
  &arg1
);

lv_obj_set_opa_scale(((lv_obj_t*)DATA_PTR(self)), arg1);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_set_protect(mrb_state * mrb, mrb_value self) {
mrb_int arg1 = 0;
/*
 * Class method LVGL::LVObject#set_protect(arg1)
 */
mrb_get_args(
  mrb,
  "i",
  &arg1
);

lv_obj_set_protect(((lv_obj_t*)DATA_PTR(self)), arg1);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_clear_protect(mrb_state * mrb, mrb_value self) {
mrb_int arg1 = 0;
/*
 * Class method LVGL::LVObject#clear_protect(arg1)
 */
mrb_get_args(
  mrb,
  "i",
  &arg1
);

lv_obj_clear_protect(((lv_obj_t*)DATA_PTR(self)), arg1);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_refresh_ext_draw_pad(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVObject#refresh_ext_draw_pad()
 */
lv_obj_refresh_ext_draw_pad(((lv_obj_t*)DATA_PTR(self)));
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_count_children(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVObject#count_children()
 */
const mrb_int return_value = lv_obj_count_children(((lv_obj_t*)DATA_PTR(self)));
return mrb_fixnum_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_count_children_recursive(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVObject#count_children_recursive()
 */
const mrb_int return_value = lv_obj_count_children_recursive(((lv_obj_t*)DATA_PTR(self)));
return mrb_fixnum_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_get_x(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVObject#get_x()
 */
const mrb_int return_value = lv_obj_get_x(((lv_obj_t*)DATA_PTR(self)));
return mrb_fixnum_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_get_y(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVObject#get_y()
 */
const mrb_int return_value = lv_obj_get_y(((lv_obj_t*)DATA_PTR(self)));
return mrb_fixnum_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_get_width(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVObject#get_width()
 */
const mrb_int return_value = lv_obj_get_width(((lv_obj_t*)DATA_PTR(self)));
return mrb_fixnum_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_get_height(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVObject#get_height()
 */
const mrb_int return_value = lv_obj_get_height(((lv_obj_t*)DATA_PTR(self)));
return mrb_fixnum_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_get_width_fit(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVObject#get_width_fit()
 */
const mrb_int return_value = lv_obj_get_width_fit(((lv_obj_t*)DATA_PTR(self)));
return mrb_fixnum_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_get_height_fit(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVObject#get_height_fit()
 */
const mrb_int return_value = lv_obj_get_height_fit(((lv_obj_t*)DATA_PTR(self)));
return mrb_fixnum_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_get_auto_realign(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVObject#get_auto_realign()
 */
const mrb_bool return_value = lv_obj_get_auto_realign(((lv_obj_t*)DATA_PTR(self)));
return mrb_bool_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_get_ext_click_pad_left(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVObject#get_ext_click_pad_left()
 */
const mrb_int return_value = lv_obj_get_ext_click_pad_left(((lv_obj_t*)DATA_PTR(self)));
return mrb_fixnum_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_get_ext_click_pad_right(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVObject#get_ext_click_pad_right()
 */
const mrb_int return_value = lv_obj_get_ext_click_pad_right(((lv_obj_t*)DATA_PTR(self)));
return mrb_fixnum_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_get_ext_click_pad_top(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVObject#get_ext_click_pad_top()
 */
const mrb_int return_value = lv_obj_get_ext_click_pad_top(((lv_obj_t*)DATA_PTR(self)));
return mrb_fixnum_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_get_ext_click_pad_bottom(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVObject#get_ext_click_pad_bottom()
 */
const mrb_int return_value = lv_obj_get_ext_click_pad_bottom(((lv_obj_t*)DATA_PTR(self)));
return mrb_fixnum_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_get_ext_draw_pad(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVObject#get_ext_draw_pad()
 */
const mrb_int return_value = lv_obj_get_ext_draw_pad(((lv_obj_t*)DATA_PTR(self)));
return mrb_fixnum_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_get_hidden(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVObject#get_hidden()
 */
const mrb_bool return_value = lv_obj_get_hidden(((lv_obj_t*)DATA_PTR(self)));
return mrb_bool_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_get_click(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVObject#get_click()
 */
const mrb_bool return_value = lv_obj_get_click(((lv_obj_t*)DATA_PTR(self)));
return mrb_bool_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_get_top(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVObject#get_top()
 */
const mrb_bool return_value = lv_obj_get_top(((lv_obj_t*)DATA_PTR(self)));
return mrb_bool_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_get_drag(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVObject#get_drag()
 */
const mrb_bool return_value = lv_obj_get_drag(((lv_obj_t*)DATA_PTR(self)));
return mrb_bool_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_get_drag_dir(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVObject#get_drag_dir()
 */
const mrb_int return_value = lv_obj_get_drag_dir(((lv_obj_t*)DATA_PTR(self)));
return mrb_fixnum_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_get_drag_throw(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVObject#get_drag_throw()
 */
const mrb_bool return_value = lv_obj_get_drag_throw(((lv_obj_t*)DATA_PTR(self)));
return mrb_bool_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_get_drag_parent(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVObject#get_drag_parent()
 */
const mrb_bool return_value = lv_obj_get_drag_parent(((lv_obj_t*)DATA_PTR(self)));
return mrb_bool_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_get_parent_event(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVObject#get_parent_event()
 */
const mrb_bool return_value = lv_obj_get_parent_event(((lv_obj_t*)DATA_PTR(self)));
return mrb_bool_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_get_base_dir(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVObject#get_base_dir()
 */
const mrb_int return_value = lv_obj_get_base_dir(((lv_obj_t*)DATA_PTR(self)));
return mrb_fixnum_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_get_opa_scale_enable(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVObject#get_opa_scale_enable()
 */
const mrb_bool return_value = lv_obj_get_opa_scale_enable(((lv_obj_t*)DATA_PTR(self)));
return mrb_bool_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_get_opa_scale(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVObject#get_opa_scale()
 */
const mrb_int return_value = lv_obj_get_opa_scale(((lv_obj_t*)DATA_PTR(self)));
return mrb_fixnum_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_get_protect(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVObject#get_protect()
 */
const mrb_int return_value = lv_obj_get_protect(((lv_obj_t*)DATA_PTR(self)));
return mrb_fixnum_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_is_protected(mrb_state * mrb, mrb_value self) {
mrb_int arg1 = 0;
/*
 * Class method LVGL::LVObject#is_protected(arg1)
 */
mrb_get_args(
  mrb,
  "i",
  &arg1
);

const mrb_bool return_value = lv_obj_is_protected(((lv_obj_t*)DATA_PTR(self)), arg1);
return mrb_bool_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_is_focused(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVObject#is_focused()
 */
const mrb_bool return_value = lv_obj_is_focused(((lv_obj_t*)DATA_PTR(self)));
return mrb_bool_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_glue_obj(mrb_state * mrb, mrb_value self) {
mrb_bool value = false;
/*
 * Class method LVGL::LVObject#glue_obj(value)
 */
mrb_get_args(
  mrb,
  "b",
  &value
);

lv_obj_t * unboxed_self = ((lv_obj_t*)DATA_PTR(self));
lv_page_glue_obj(unboxed_self, value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_get_style(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVObject#get_style()
 */
lv_style_t* style = lv_obj_get_style(((lv_obj_t*)DATA_PTR(self)));
return (mrb_mruby_lvgui_module_LVGL_class_LVStyle_box_style(mrb, style));
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVObject_set_style(mrb_state * mrb, mrb_value self) {
mrb_value style = (mrb_nil_value());
/*
 * Class method LVGL::LVObject#set_style(style)
 */
mrb_get_args(
  mrb,
  "o",
  &style
);

lv_style_t * unboxed_style = ((lv_style_t*)DATA_PTR(style));
lv_obj_set_style(((lv_obj_t*)DATA_PTR(self)), unboxed_style);
}
static void mrb_mruby_lvgui_module_LVGL_class_LVContainer_event_handler(lv_obj_t * obj, lv_event_t event) {
mrb_lv_userdata * data = (mrb_lv_userdata *)(lv_obj_get_user_data(obj));
mrb_value m_event = mrb_fixnum_value(event);
mrb_value proc = mrb_iv_get(data->mrb, (data->value), mrb_intern_cstr(data->mrb, "@event_handler_proc"));
if (!mrb_nil_p(proc)) {
  mrb_funcall(data->mrb, proc, "call", 1, m_event);
}
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVContainer_event_handler__equals(mrb_state * mrb, mrb_value self) {
mrb_value value = (mrb_nil_value());
/*
 * Class method LVGL::LVContainer#event_handler__equals(value)
 */
mrb_get_args(
  mrb,
  "o",
  &value
);

mrb_iv_set(mrb, self, mrb_intern_cstr(mrb, "@event_handler_proc"), value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVContainer_initialize(mrb_state * mrb, mrb_value self) {
mrb_value parent = (mrb_nil_value());
/*
 * Class method LVGL::LVContainer#initialize(parent)
 */
mrb_get_args(
  mrb,
  "|o",
  &parent
);

// Forces the garbage collector to keep a reference.
// (TODO: unregister on delete, when delete is handled)
// Not registering, some objects leaves sight of mruby, but are
// still well alive inside the LVGL objects.
mrb_gc_register(mrb, self);
lv_obj_t * obj;

if (mrb_nil_p(parent)) {
  LV_LOG_INFO("[mruby] Creating LVContainer as screen. (Switching lv_disp_load_scr!)");
  obj = lv_cont_create(NULL, NULL);
  // FIXME: Bad assumption here...
  lv_disp_load_scr(obj);
}
else {
  LV_LOG_INFO("[mruby] Creating LVContainer as child.");
  obj = lv_cont_create(((lv_obj_t*)DATA_PTR(parent)), NULL);
}

// Associate the lv_obj to the mruby instance
mrb_data_init(self, obj, &mrb_lv_obj_t_type);

mrb_lv_userdata * data = malloc(sizeof(mrb_lv_userdata));
data->mrb = mrb;
data->value = self;

// Associate the mruby instance to the lv_obj
lv_obj_set_user_data(obj, (void *)(data));

// Associate the event handler to literally all mruby-instanciated
// lv_obj. We'll let the ruby-side code the chance to handle events.
// Another option would be to register this callback as needed.
lv_obj_set_event_cb(obj, mrb_mruby_lvgui_module_LVGL_class_LVContainer_event_handler);

return self;
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVContainer_set_layout(mrb_state * mrb, mrb_value self) {
mrb_int arg1 = 0;
/*
 * Class method LVGL::LVContainer#set_layout(arg1)
 */
mrb_get_args(
  mrb,
  "i",
  &arg1
);

lv_cont_set_layout(((lv_obj_t*)DATA_PTR(self)), arg1);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVContainer_set_fit4(mrb_state * mrb, mrb_value self) {
mrb_int arg1 = 0;
mrb_int arg2 = 0;
mrb_int arg3 = 0;
mrb_int arg4 = 0;
/*
 * Class method LVGL::LVContainer#set_fit4(arg1, arg2, arg3, arg4)
 */
mrb_get_args(
  mrb,
  "iiii",
  &arg1, &arg2, &arg3, &arg4
);

lv_cont_set_fit4(((lv_obj_t*)DATA_PTR(self)), arg1, arg2, arg3, arg4);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVContainer_set_fit2(mrb_state * mrb, mrb_value self) {
mrb_int arg1 = 0;
mrb_int arg2 = 0;
/*
 * Class method LVGL::LVContainer#set_fit2(arg1, arg2)
 */
mrb_get_args(
  mrb,
  "ii",
  &arg1, &arg2
);

lv_cont_set_fit2(((lv_obj_t*)DATA_PTR(self)), arg1, arg2);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVContainer_set_fit(mrb_state * mrb, mrb_value self) {
mrb_int arg1 = 0;
/*
 * Class method LVGL::LVContainer#set_fit(arg1)
 */
mrb_get_args(
  mrb,
  "i",
  &arg1
);

lv_cont_set_fit(((lv_obj_t*)DATA_PTR(self)), arg1);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVContainer_get_layout(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVContainer#get_layout()
 */
const mrb_int return_value = lv_cont_get_layout(((lv_obj_t*)DATA_PTR(self)));
return mrb_fixnum_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVContainer_get_fit_left(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVContainer#get_fit_left()
 */
const mrb_int return_value = lv_cont_get_fit_left(((lv_obj_t*)DATA_PTR(self)));
return mrb_fixnum_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVContainer_get_fit_right(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVContainer#get_fit_right()
 */
const mrb_int return_value = lv_cont_get_fit_right(((lv_obj_t*)DATA_PTR(self)));
return mrb_fixnum_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVContainer_get_fit_top(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVContainer#get_fit_top()
 */
const mrb_int return_value = lv_cont_get_fit_top(((lv_obj_t*)DATA_PTR(self)));
return mrb_fixnum_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVContainer_get_fit_bottom(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVContainer#get_fit_bottom()
 */
const mrb_int return_value = lv_cont_get_fit_bottom(((lv_obj_t*)DATA_PTR(self)));
return mrb_fixnum_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVContainer_get_style(mrb_state * mrb, mrb_value self) {
mrb_int type = 0;
/*
 * Class method LVGL::LVContainer#get_style(type)
 */
mrb_get_args(
  mrb,
  "i",
  &type
);

lv_style_t* style = lv_cont_get_style(((lv_obj_t*)DATA_PTR(self)), type);
return (mrb_mruby_lvgui_module_LVGL_class_LVStyle_box_style(mrb, style));
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVContainer_set_style(mrb_state * mrb, mrb_value self) {
mrb_int type = 0;
mrb_value style = (mrb_nil_value());
/*
 * Class method LVGL::LVContainer#set_style(type, style)
 */
mrb_get_args(
  mrb,
  "io",
  &type, &style
);

lv_style_t * unboxed_style = ((lv_style_t*)DATA_PTR(style));
lv_cont_set_style(((lv_obj_t*)DATA_PTR(self)), type, unboxed_style);
}
static void mrb_mruby_lvgui_module_LVGL_class_LVPage_event_handler(lv_obj_t * obj, lv_event_t event) {
mrb_lv_userdata * data = (mrb_lv_userdata *)(lv_obj_get_user_data(obj));
mrb_value m_event = mrb_fixnum_value(event);
mrb_value proc = mrb_iv_get(data->mrb, (data->value), mrb_intern_cstr(data->mrb, "@event_handler_proc"));
if (!mrb_nil_p(proc)) {
  mrb_funcall(data->mrb, proc, "call", 1, m_event);
}
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVPage_event_handler__equals(mrb_state * mrb, mrb_value self) {
mrb_value value = (mrb_nil_value());
/*
 * Class method LVGL::LVPage#event_handler__equals(value)
 */
mrb_get_args(
  mrb,
  "o",
  &value
);

mrb_iv_set(mrb, self, mrb_intern_cstr(mrb, "@event_handler_proc"), value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVPage_initialize(mrb_state * mrb, mrb_value self) {
mrb_value parent = (mrb_nil_value());
/*
 * Class method LVGL::LVPage#initialize(parent)
 */
mrb_get_args(
  mrb,
  "|o",
  &parent
);

// Forces the garbage collector to keep a reference.
// (TODO: unregister on delete, when delete is handled)
// Not registering, some objects leaves sight of mruby, but are
// still well alive inside the LVGL objects.
mrb_gc_register(mrb, self);
lv_obj_t * obj;

if (mrb_nil_p(parent)) {
  LV_LOG_INFO("[mruby] Creating LVPage as screen. (Switching lv_disp_load_scr!)");
  obj = lv_page_create(NULL, NULL);
  // FIXME: Bad assumption here...
  lv_disp_load_scr(obj);
}
else {
  LV_LOG_INFO("[mruby] Creating LVPage as child.");
  obj = lv_page_create(((lv_obj_t*)DATA_PTR(parent)), NULL);
}

// Associate the lv_obj to the mruby instance
mrb_data_init(self, obj, &mrb_lv_obj_t_type);

mrb_lv_userdata * data = malloc(sizeof(mrb_lv_userdata));
data->mrb = mrb;
data->value = self;

// Associate the mruby instance to the lv_obj
lv_obj_set_user_data(obj, (void *)(data));

// Associate the event handler to literally all mruby-instanciated
// lv_obj. We'll let the ruby-side code the chance to handle events.
// Another option would be to register this callback as needed.
lv_obj_set_event_cb(obj, mrb_mruby_lvgui_module_LVGL_class_LVPage_event_handler);

return self;
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVPage_get_scrl_height(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVPage#get_scrl_height()
 */
const mrb_int return_value = lv_page_get_scrl_height(((lv_obj_t*)DATA_PTR(self)));
return mrb_fixnum_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVPage_get_scrl_layout(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVPage#get_scrl_layout()
 */
const mrb_int return_value = lv_page_get_scrl_layout(((lv_obj_t*)DATA_PTR(self)));
return mrb_fixnum_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVPage_get_scrl_width(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVPage#get_scrl_width()
 */
const mrb_int return_value = lv_page_get_scrl_width(((lv_obj_t*)DATA_PTR(self)));
return mrb_fixnum_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVPage_set_scrl_fit(mrb_state * mrb, mrb_value self) {
mrb_int arg1 = 0;
/*
 * Class method LVGL::LVPage#set_scrl_fit(arg1)
 */
mrb_get_args(
  mrb,
  "i",
  &arg1
);

lv_page_set_scrl_fit(((lv_obj_t*)DATA_PTR(self)), arg1);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVPage_set_scrl_fit2(mrb_state * mrb, mrb_value self) {
mrb_int arg1 = 0;
mrb_int arg2 = 0;
/*
 * Class method LVGL::LVPage#set_scrl_fit2(arg1, arg2)
 */
mrb_get_args(
  mrb,
  "ii",
  &arg1, &arg2
);

lv_page_set_scrl_fit2(((lv_obj_t*)DATA_PTR(self)), arg1, arg2);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVPage_set_scrl_fit4(mrb_state * mrb, mrb_value self) {
mrb_int arg1 = 0;
mrb_int arg2 = 0;
mrb_int arg3 = 0;
mrb_int arg4 = 0;
/*
 * Class method LVGL::LVPage#set_scrl_fit4(arg1, arg2, arg3, arg4)
 */
mrb_get_args(
  mrb,
  "iiii",
  &arg1, &arg2, &arg3, &arg4
);

lv_page_set_scrl_fit4(((lv_obj_t*)DATA_PTR(self)), arg1, arg2, arg3, arg4);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVPage_set_scrl_height(mrb_state * mrb, mrb_value self) {
mrb_int arg1 = 0;
/*
 * Class method LVGL::LVPage#set_scrl_height(arg1)
 */
mrb_get_args(
  mrb,
  "i",
  &arg1
);

lv_page_set_scrl_height(((lv_obj_t*)DATA_PTR(self)), arg1);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVPage_set_scrl_layout(mrb_state * mrb, mrb_value self) {
mrb_int arg1 = 0;
/*
 * Class method LVGL::LVPage#set_scrl_layout(arg1)
 */
mrb_get_args(
  mrb,
  "i",
  &arg1
);

lv_page_set_scrl_layout(((lv_obj_t*)DATA_PTR(self)), arg1);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVPage_set_scrl_width(mrb_state * mrb, mrb_value self) {
mrb_int arg1 = 0;
/*
 * Class method LVGL::LVPage#set_scrl_width(arg1)
 */
mrb_get_args(
  mrb,
  "i",
  &arg1
);

lv_page_set_scrl_width(((lv_obj_t*)DATA_PTR(self)), arg1);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVPage_get_style(mrb_state * mrb, mrb_value self) {
mrb_int type = 0;
/*
 * Class method LVGL::LVPage#get_style(type)
 */
mrb_get_args(
  mrb,
  "i",
  &type
);

lv_style_t* style = lv_page_get_style(((lv_obj_t*)DATA_PTR(self)), type);
return (mrb_mruby_lvgui_module_LVGL_class_LVStyle_box_style(mrb, style));
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVPage_set_style(mrb_state * mrb, mrb_value self) {
mrb_int type = 0;
mrb_value style = (mrb_nil_value());
/*
 * Class method LVGL::LVPage#set_style(type, style)
 */
mrb_get_args(
  mrb,
  "io",
  &type, &style
);

lv_style_t * unboxed_style = ((lv_style_t*)DATA_PTR(style));
lv_page_set_style(((lv_obj_t*)DATA_PTR(self)), type, unboxed_style);
}
static void mrb_mruby_lvgui_module_LVGL_class_LVTabview_event_handler(lv_obj_t * obj, lv_event_t event) {
mrb_lv_userdata * data = (mrb_lv_userdata *)(lv_obj_get_user_data(obj));
mrb_value m_event = mrb_fixnum_value(event);
mrb_value proc = mrb_iv_get(data->mrb, (data->value), mrb_intern_cstr(data->mrb, "@event_handler_proc"));
if (!mrb_nil_p(proc)) {
  mrb_funcall(data->mrb, proc, "call", 1, m_event);
}
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVTabview_event_handler__equals(mrb_state * mrb, mrb_value self) {
mrb_value value = (mrb_nil_value());
/*
 * Class method LVGL::LVTabview#event_handler__equals(value)
 */
mrb_get_args(
  mrb,
  "o",
  &value
);

mrb_iv_set(mrb, self, mrb_intern_cstr(mrb, "@event_handler_proc"), value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVTabview_initialize(mrb_state * mrb, mrb_value self) {
mrb_value parent = (mrb_nil_value());
/*
 * Class method LVGL::LVTabview#initialize(parent)
 */
mrb_get_args(
  mrb,
  "|o",
  &parent
);

// Forces the garbage collector to keep a reference.
// (TODO: unregister on delete, when delete is handled)
// Not registering, some objects leaves sight of mruby, but are
// still well alive inside the LVGL objects.
mrb_gc_register(mrb, self);
lv_obj_t * obj;

if (mrb_nil_p(parent)) {
  LV_LOG_INFO("[mruby] Creating LVTabview as screen. (Switching lv_disp_load_scr!)");
  obj = lv_tabview_create(NULL, NULL);
  // FIXME: Bad assumption here...
  lv_disp_load_scr(obj);
}
else {
  LV_LOG_INFO("[mruby] Creating LVTabview as child.");
  obj = lv_tabview_create(((lv_obj_t*)DATA_PTR(parent)), NULL);
}

// Associate the lv_obj to the mruby instance
mrb_data_init(self, obj, &mrb_lv_obj_t_type);

mrb_lv_userdata * data = malloc(sizeof(mrb_lv_userdata));
data->mrb = mrb;
data->value = self;

// Associate the mruby instance to the lv_obj
lv_obj_set_user_data(obj, (void *)(data));

// Associate the event handler to literally all mruby-instanciated
// lv_obj. We'll let the ruby-side code the chance to handle events.
// Another option would be to register this callback as needed.
lv_obj_set_event_cb(obj, mrb_mruby_lvgui_module_LVGL_class_LVTabview_event_handler);

return self;
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVTabview_class_LVTabpage_initialize(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVTabview::LVTabpage#initialize()
 */
LV_LOG_INFO("[mruby] #initialize (no-op for LVTabpage)");
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVTabview_clean(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVTabview#clean()
 */
lv_tabview_clean(((lv_obj_t*)DATA_PTR(self)));
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVTabview_set_tab_act(mrb_state * mrb, mrb_value self) {
mrb_int arg1 = 0;
mrb_int arg2 = 0;
/*
 * Class method LVGL::LVTabview#set_tab_act(arg1, arg2)
 */
mrb_get_args(
  mrb,
  "ii",
  &arg1, &arg2
);

lv_tabview_set_tab_act(((lv_obj_t*)DATA_PTR(self)), arg1, arg2);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVTabview_set_sliding(mrb_state * mrb, mrb_value self) {
mrb_bool arg1 = false;
/*
 * Class method LVGL::LVTabview#set_sliding(arg1)
 */
mrb_get_args(
  mrb,
  "b",
  &arg1
);

lv_tabview_set_sliding(((lv_obj_t*)DATA_PTR(self)), arg1);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVTabview_set_anim_time(mrb_state * mrb, mrb_value self) {
mrb_int arg1 = 0;
/*
 * Class method LVGL::LVTabview#set_anim_time(arg1)
 */
mrb_get_args(
  mrb,
  "i",
  &arg1
);

lv_tabview_set_anim_time(((lv_obj_t*)DATA_PTR(self)), arg1);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVTabview_set_btns_pos(mrb_state * mrb, mrb_value self) {
mrb_int arg1 = 0;
/*
 * Class method LVGL::LVTabview#set_btns_pos(arg1)
 */
mrb_get_args(
  mrb,
  "i",
  &arg1
);

lv_tabview_set_btns_pos(((lv_obj_t*)DATA_PTR(self)), arg1);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVTabview_set_btns_hidden(mrb_state * mrb, mrb_value self) {
mrb_bool arg1 = false;
/*
 * Class method LVGL::LVTabview#set_btns_hidden(arg1)
 */
mrb_get_args(
  mrb,
  "b",
  &arg1
);

lv_tabview_set_btns_hidden(((lv_obj_t*)DATA_PTR(self)), arg1);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVTabview_get_tab_act(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVTabview#get_tab_act()
 */
const mrb_int return_value = lv_tabview_get_tab_act(((lv_obj_t*)DATA_PTR(self)));
return mrb_fixnum_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVTabview_get_tab_count(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVTabview#get_tab_count()
 */
const mrb_int return_value = lv_tabview_get_tab_count(((lv_obj_t*)DATA_PTR(self)));
return mrb_fixnum_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVTabview_get_sliding(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVTabview#get_sliding()
 */
const mrb_bool return_value = lv_tabview_get_sliding(((lv_obj_t*)DATA_PTR(self)));
return mrb_bool_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVTabview_get_anim_time(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVTabview#get_anim_time()
 */
const mrb_int return_value = lv_tabview_get_anim_time(((lv_obj_t*)DATA_PTR(self)));
return mrb_fixnum_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVTabview_get_btns_pos(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVTabview#get_btns_pos()
 */
const mrb_int return_value = lv_tabview_get_btns_pos(((lv_obj_t*)DATA_PTR(self)));
return mrb_fixnum_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVTabview_get_btns_hidden(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVTabview#get_btns_hidden()
 */
const mrb_bool return_value = lv_tabview_get_btns_hidden(((lv_obj_t*)DATA_PTR(self)));
return mrb_bool_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVTabview_add_tab(mrb_state * mrb, mrb_value self) {
char * name = "";
/*
 * Class method LVGL::LVTabview#add_tab(name)
 */
mrb_get_args(
  mrb,
  "z",
  &name
);

lv_obj_t * unboxed_self = ((lv_obj_t*)DATA_PTR(self));
lv_obj_t * obj = lv_tabview_add_tab(unboxed_self, name);

if (!obj) {
  mrb_raise(mrb, E_RUNTIME_ERROR, "Could not create LVTabview");
}

mrb_value instance = mrb_class_new_instance(mrb, 0, 0, (mrb_class_get_under(mrb, (mrb_class_get_under(mrb, (mrb_module_get_under(mrb, (mrb->object_class), "LVGL")), "LVTabview")), "LVTabpage")));
// This handles some of the functions LvObjectType#initialize does.
// Forces the garbage collector to keep a reference.
// (TODO: unregister on delete, when delete is handled)
// Not registering, some objects leaves sight of mruby, but are
// still well alive inside the LVGL objects.
mrb_gc_register(mrb, instance);

// Associate the lv_obj to the mruby instance
mrb_data_init(instance, obj, &mrb_lv_obj_t_type);

mrb_lv_userdata * data = malloc(sizeof(mrb_lv_userdata));
data->mrb = mrb;
data->value = instance;

// Associate the mruby instance to the lv_obj
lv_obj_set_user_data(obj, (void *)(data));

// Associate the event handler to literally all mruby-instanciated
// lv_obj. We'll let the ruby-side code the chance to handle events.
// Another option would be to register this callback as needed.
lv_obj_set_event_cb(obj, mrb_mruby_lvgui_module_LVGL_class_LVTabview_event_handler);

return instance;
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVTabview_get_style(mrb_state * mrb, mrb_value self) {
mrb_int type = 0;
/*
 * Class method LVGL::LVTabview#get_style(type)
 */
mrb_get_args(
  mrb,
  "i",
  &type
);

lv_style_t* style = lv_tabview_get_style(((lv_obj_t*)DATA_PTR(self)), type);
return (mrb_mruby_lvgui_module_LVGL_class_LVStyle_box_style(mrb, style));
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVTabview_set_style(mrb_state * mrb, mrb_value self) {
mrb_int type = 0;
mrb_value style = (mrb_nil_value());
/*
 * Class method LVGL::LVTabview#set_style(type, style)
 */
mrb_get_args(
  mrb,
  "io",
  &type, &style
);

lv_style_t * unboxed_style = ((lv_style_t*)DATA_PTR(style));
lv_tabview_set_style(((lv_obj_t*)DATA_PTR(self)), type, unboxed_style);
}
static void mrb_mruby_lvgui_module_LVGL_class_LVButton_event_handler(lv_obj_t * obj, lv_event_t event) {
mrb_lv_userdata * data = (mrb_lv_userdata *)(lv_obj_get_user_data(obj));
mrb_value m_event = mrb_fixnum_value(event);
mrb_value proc = mrb_iv_get(data->mrb, (data->value), mrb_intern_cstr(data->mrb, "@event_handler_proc"));
if (!mrb_nil_p(proc)) {
  mrb_funcall(data->mrb, proc, "call", 1, m_event);
}
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVButton_event_handler__equals(mrb_state * mrb, mrb_value self) {
mrb_value value = (mrb_nil_value());
/*
 * Class method LVGL::LVButton#event_handler__equals(value)
 */
mrb_get_args(
  mrb,
  "o",
  &value
);

mrb_iv_set(mrb, self, mrb_intern_cstr(mrb, "@event_handler_proc"), value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVButton_initialize(mrb_state * mrb, mrb_value self) {
mrb_value parent = (mrb_nil_value());
/*
 * Class method LVGL::LVButton#initialize(parent)
 */
mrb_get_args(
  mrb,
  "|o",
  &parent
);

// Forces the garbage collector to keep a reference.
// (TODO: unregister on delete, when delete is handled)
// Not registering, some objects leaves sight of mruby, but are
// still well alive inside the LVGL objects.
mrb_gc_register(mrb, self);
lv_obj_t * obj;

if (mrb_nil_p(parent)) {
  LV_LOG_INFO("[mruby] Creating LVButton as screen. (Switching lv_disp_load_scr!)");
  obj = lv_btn_create(NULL, NULL);
  // FIXME: Bad assumption here...
  lv_disp_load_scr(obj);
}
else {
  LV_LOG_INFO("[mruby] Creating LVButton as child.");
  obj = lv_btn_create(((lv_obj_t*)DATA_PTR(parent)), NULL);
}

// Associate the lv_obj to the mruby instance
mrb_data_init(self, obj, &mrb_lv_obj_t_type);

mrb_lv_userdata * data = malloc(sizeof(mrb_lv_userdata));
data->mrb = mrb;
data->value = self;

// Associate the mruby instance to the lv_obj
lv_obj_set_user_data(obj, (void *)(data));

// Associate the event handler to literally all mruby-instanciated
// lv_obj. We'll let the ruby-side code the chance to handle events.
// Another option would be to register this callback as needed.
lv_obj_set_event_cb(obj, mrb_mruby_lvgui_module_LVGL_class_LVButton_event_handler);

return self;
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVButton_set_toggle(mrb_state * mrb, mrb_value self) {
mrb_bool arg1 = false;
/*
 * Class method LVGL::LVButton#set_toggle(arg1)
 */
mrb_get_args(
  mrb,
  "b",
  &arg1
);

lv_btn_set_toggle(((lv_obj_t*)DATA_PTR(self)), arg1);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVButton_set_state(mrb_state * mrb, mrb_value self) {
mrb_int arg1 = 0;
/*
 * Class method LVGL::LVButton#set_state(arg1)
 */
mrb_get_args(
  mrb,
  "i",
  &arg1
);

lv_btn_set_state(((lv_obj_t*)DATA_PTR(self)), arg1);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVButton_toggle(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVButton#toggle()
 */
lv_btn_toggle(((lv_obj_t*)DATA_PTR(self)));
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVButton_set_layout(mrb_state * mrb, mrb_value self) {
mrb_int arg1 = 0;
/*
 * Class method LVGL::LVButton#set_layout(arg1)
 */
mrb_get_args(
  mrb,
  "i",
  &arg1
);

lv_btn_set_layout(((lv_obj_t*)DATA_PTR(self)), arg1);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVButton_set_fit4(mrb_state * mrb, mrb_value self) {
mrb_int arg1 = 0;
mrb_int arg2 = 0;
mrb_int arg3 = 0;
mrb_int arg4 = 0;
/*
 * Class method LVGL::LVButton#set_fit4(arg1, arg2, arg3, arg4)
 */
mrb_get_args(
  mrb,
  "iiii",
  &arg1, &arg2, &arg3, &arg4
);

lv_btn_set_fit4(((lv_obj_t*)DATA_PTR(self)), arg1, arg2, arg3, arg4);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVButton_set_fit2(mrb_state * mrb, mrb_value self) {
mrb_int arg1 = 0;
mrb_int arg2 = 0;
/*
 * Class method LVGL::LVButton#set_fit2(arg1, arg2)
 */
mrb_get_args(
  mrb,
  "ii",
  &arg1, &arg2
);

lv_btn_set_fit2(((lv_obj_t*)DATA_PTR(self)), arg1, arg2);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVButton_set_fit(mrb_state * mrb, mrb_value self) {
mrb_int arg1 = 0;
/*
 * Class method LVGL::LVButton#set_fit(arg1)
 */
mrb_get_args(
  mrb,
  "i",
  &arg1
);

lv_btn_set_fit(((lv_obj_t*)DATA_PTR(self)), arg1);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVButton_set_ink_in_time(mrb_state * mrb, mrb_value self) {
mrb_int arg1 = 0;
/*
 * Class method LVGL::LVButton#set_ink_in_time(arg1)
 */
mrb_get_args(
  mrb,
  "i",
  &arg1
);

lv_btn_set_ink_in_time(((lv_obj_t*)DATA_PTR(self)), arg1);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVButton_set_ink_wait_time(mrb_state * mrb, mrb_value self) {
mrb_int arg1 = 0;
/*
 * Class method LVGL::LVButton#set_ink_wait_time(arg1)
 */
mrb_get_args(
  mrb,
  "i",
  &arg1
);

lv_btn_set_ink_wait_time(((lv_obj_t*)DATA_PTR(self)), arg1);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVButton_set_ink_out_time(mrb_state * mrb, mrb_value self) {
mrb_int arg1 = 0;
/*
 * Class method LVGL::LVButton#set_ink_out_time(arg1)
 */
mrb_get_args(
  mrb,
  "i",
  &arg1
);

lv_btn_set_ink_out_time(((lv_obj_t*)DATA_PTR(self)), arg1);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVButton_get_state(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVButton#get_state()
 */
const mrb_int return_value = lv_btn_get_state(((lv_obj_t*)DATA_PTR(self)));
return mrb_fixnum_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVButton_get_toggle(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVButton#get_toggle()
 */
const mrb_bool return_value = lv_btn_get_toggle(((lv_obj_t*)DATA_PTR(self)));
return mrb_bool_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVButton_get_layout(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVButton#get_layout()
 */
const mrb_int return_value = lv_btn_get_layout(((lv_obj_t*)DATA_PTR(self)));
return mrb_fixnum_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVButton_get_fit_left(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVButton#get_fit_left()
 */
const mrb_int return_value = lv_btn_get_fit_left(((lv_obj_t*)DATA_PTR(self)));
return mrb_fixnum_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVButton_get_fit_right(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVButton#get_fit_right()
 */
const mrb_int return_value = lv_btn_get_fit_right(((lv_obj_t*)DATA_PTR(self)));
return mrb_fixnum_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVButton_get_fit_top(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVButton#get_fit_top()
 */
const mrb_int return_value = lv_btn_get_fit_top(((lv_obj_t*)DATA_PTR(self)));
return mrb_fixnum_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVButton_get_fit_bottom(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVButton#get_fit_bottom()
 */
const mrb_int return_value = lv_btn_get_fit_bottom(((lv_obj_t*)DATA_PTR(self)));
return mrb_fixnum_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVButton_get_ink_in_time(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVButton#get_ink_in_time()
 */
const mrb_int return_value = lv_btn_get_ink_in_time(((lv_obj_t*)DATA_PTR(self)));
return mrb_fixnum_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVButton_get_ink_wait_time(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVButton#get_ink_wait_time()
 */
const mrb_int return_value = lv_btn_get_ink_wait_time(((lv_obj_t*)DATA_PTR(self)));
return mrb_fixnum_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVButton_get_ink_out_time(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVButton#get_ink_out_time()
 */
const mrb_int return_value = lv_btn_get_ink_out_time(((lv_obj_t*)DATA_PTR(self)));
return mrb_fixnum_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVButton_get_style(mrb_state * mrb, mrb_value self) {
mrb_int type = 0;
/*
 * Class method LVGL::LVButton#get_style(type)
 */
mrb_get_args(
  mrb,
  "i",
  &type
);

lv_style_t* style = lv_btn_get_style(((lv_obj_t*)DATA_PTR(self)), type);
return (mrb_mruby_lvgui_module_LVGL_class_LVStyle_box_style(mrb, style));
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVButton_set_style(mrb_state * mrb, mrb_value self) {
mrb_int type = 0;
mrb_value style = (mrb_nil_value());
/*
 * Class method LVGL::LVButton#set_style(type, style)
 */
mrb_get_args(
  mrb,
  "io",
  &type, &style
);

lv_style_t * unboxed_style = ((lv_style_t*)DATA_PTR(style));
lv_btn_set_style(((lv_obj_t*)DATA_PTR(self)), type, unboxed_style);
}
static void mrb_mruby_lvgui_module_LVGL_class_LVLabel_event_handler(lv_obj_t * obj, lv_event_t event) {
mrb_lv_userdata * data = (mrb_lv_userdata *)(lv_obj_get_user_data(obj));
mrb_value m_event = mrb_fixnum_value(event);
mrb_value proc = mrb_iv_get(data->mrb, (data->value), mrb_intern_cstr(data->mrb, "@event_handler_proc"));
if (!mrb_nil_p(proc)) {
  mrb_funcall(data->mrb, proc, "call", 1, m_event);
}
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVLabel_event_handler__equals(mrb_state * mrb, mrb_value self) {
mrb_value value = (mrb_nil_value());
/*
 * Class method LVGL::LVLabel#event_handler__equals(value)
 */
mrb_get_args(
  mrb,
  "o",
  &value
);

mrb_iv_set(mrb, self, mrb_intern_cstr(mrb, "@event_handler_proc"), value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVLabel_initialize(mrb_state * mrb, mrb_value self) {
mrb_value parent = (mrb_nil_value());
/*
 * Class method LVGL::LVLabel#initialize(parent)
 */
mrb_get_args(
  mrb,
  "|o",
  &parent
);

// Forces the garbage collector to keep a reference.
// (TODO: unregister on delete, when delete is handled)
// Not registering, some objects leaves sight of mruby, but are
// still well alive inside the LVGL objects.
mrb_gc_register(mrb, self);
lv_obj_t * obj;

if (mrb_nil_p(parent)) {
  LV_LOG_INFO("[mruby] Creating LVLabel as screen. (Switching lv_disp_load_scr!)");
  obj = lv_label_create(NULL, NULL);
  // FIXME: Bad assumption here...
  lv_disp_load_scr(obj);
}
else {
  LV_LOG_INFO("[mruby] Creating LVLabel as child.");
  obj = lv_label_create(((lv_obj_t*)DATA_PTR(parent)), NULL);
}

// Associate the lv_obj to the mruby instance
mrb_data_init(self, obj, &mrb_lv_obj_t_type);

mrb_lv_userdata * data = malloc(sizeof(mrb_lv_userdata));
data->mrb = mrb;
data->value = self;

// Associate the mruby instance to the lv_obj
lv_obj_set_user_data(obj, (void *)(data));

// Associate the event handler to literally all mruby-instanciated
// lv_obj. We'll let the ruby-side code the chance to handle events.
// Another option would be to register this callback as needed.
lv_obj_set_event_cb(obj, mrb_mruby_lvgui_module_LVGL_class_LVLabel_event_handler);

return self;
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVLabel_set_text(mrb_state * mrb, mrb_value self) {
char * arg1 = "";
/*
 * Class method LVGL::LVLabel#set_text(arg1)
 */
mrb_get_args(
  mrb,
  "z",
  &arg1
);

lv_label_set_text(((lv_obj_t*)DATA_PTR(self)), arg1);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVLabel_set_array_text(mrb_state * mrb, mrb_value self) {
char * arg1 = "";
mrb_int arg2 = 0;
/*
 * Class method LVGL::LVLabel#set_array_text(arg1, arg2)
 */
mrb_get_args(
  mrb,
  "zi",
  &arg1, &arg2
);

lv_label_set_array_text(((lv_obj_t*)DATA_PTR(self)), arg1, arg2);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVLabel_set_long_mode(mrb_state * mrb, mrb_value self) {
mrb_int arg1 = 0;
/*
 * Class method LVGL::LVLabel#set_long_mode(arg1)
 */
mrb_get_args(
  mrb,
  "i",
  &arg1
);

lv_label_set_long_mode(((lv_obj_t*)DATA_PTR(self)), arg1);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVLabel_set_align(mrb_state * mrb, mrb_value self) {
mrb_int arg1 = 0;
/*
 * Class method LVGL::LVLabel#set_align(arg1)
 */
mrb_get_args(
  mrb,
  "i",
  &arg1
);

lv_label_set_align(((lv_obj_t*)DATA_PTR(self)), arg1);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVLabel_set_recolor(mrb_state * mrb, mrb_value self) {
mrb_bool arg1 = false;
/*
 * Class method LVGL::LVLabel#set_recolor(arg1)
 */
mrb_get_args(
  mrb,
  "b",
  &arg1
);

lv_label_set_recolor(((lv_obj_t*)DATA_PTR(self)), arg1);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVLabel_set_body_draw(mrb_state * mrb, mrb_value self) {
mrb_bool arg1 = false;
/*
 * Class method LVGL::LVLabel#set_body_draw(arg1)
 */
mrb_get_args(
  mrb,
  "b",
  &arg1
);

lv_label_set_body_draw(((lv_obj_t*)DATA_PTR(self)), arg1);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVLabel_set_anim_speed(mrb_state * mrb, mrb_value self) {
mrb_int arg1 = 0;
/*
 * Class method LVGL::LVLabel#set_anim_speed(arg1)
 */
mrb_get_args(
  mrb,
  "i",
  &arg1
);

lv_label_set_anim_speed(((lv_obj_t*)DATA_PTR(self)), arg1);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVLabel_set_text_sel_start(mrb_state * mrb, mrb_value self) {
mrb_int arg1 = 0;
/*
 * Class method LVGL::LVLabel#set_text_sel_start(arg1)
 */
mrb_get_args(
  mrb,
  "i",
  &arg1
);

lv_label_set_text_sel_start(((lv_obj_t*)DATA_PTR(self)), arg1);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVLabel_set_text_sel_end(mrb_state * mrb, mrb_value self) {
mrb_int arg1 = 0;
/*
 * Class method LVGL::LVLabel#set_text_sel_end(arg1)
 */
mrb_get_args(
  mrb,
  "i",
  &arg1
);

lv_label_set_text_sel_end(((lv_obj_t*)DATA_PTR(self)), arg1);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVLabel_get_text(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVLabel#get_text()
 */
const char * return_value = lv_label_get_text(((lv_obj_t*)DATA_PTR(self)));
return return_value ? mrb_str_new_cstr(mrb, return_value) : mrb_nil_value();
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVLabel_get_long_mode(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVLabel#get_long_mode()
 */
const mrb_int return_value = lv_label_get_long_mode(((lv_obj_t*)DATA_PTR(self)));
return mrb_fixnum_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVLabel_get_align(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVLabel#get_align()
 */
const mrb_int return_value = lv_label_get_align(((lv_obj_t*)DATA_PTR(self)));
return mrb_fixnum_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVLabel_get_recolor(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVLabel#get_recolor()
 */
const mrb_bool return_value = lv_label_get_recolor(((lv_obj_t*)DATA_PTR(self)));
return mrb_bool_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVLabel_get_body_draw(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVLabel#get_body_draw()
 */
const mrb_bool return_value = lv_label_get_body_draw(((lv_obj_t*)DATA_PTR(self)));
return mrb_bool_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVLabel_get_anim_speed(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVLabel#get_anim_speed()
 */
const mrb_int return_value = lv_label_get_anim_speed(((lv_obj_t*)DATA_PTR(self)));
return mrb_fixnum_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVLabel_get_text_sel_start(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVLabel#get_text_sel_start()
 */
const mrb_int return_value = lv_label_get_text_sel_start(((lv_obj_t*)DATA_PTR(self)));
return mrb_fixnum_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVLabel_get_text_sel_end(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVLabel#get_text_sel_end()
 */
const mrb_int return_value = lv_label_get_text_sel_end(((lv_obj_t*)DATA_PTR(self)));
return mrb_fixnum_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVLabel_ins_text(mrb_state * mrb, mrb_value self) {
mrb_int arg1 = 0;
char * arg2 = "";
/*
 * Class method LVGL::LVLabel#ins_text(arg1, arg2)
 */
mrb_get_args(
  mrb,
  "iz",
  &arg1, &arg2
);

lv_label_ins_text(((lv_obj_t*)DATA_PTR(self)), arg1, arg2);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVLabel_cut_text(mrb_state * mrb, mrb_value self) {
mrb_int arg1 = 0;
mrb_int arg2 = 0;
/*
 * Class method LVGL::LVLabel#cut_text(arg1, arg2)
 */
mrb_get_args(
  mrb,
  "ii",
  &arg1, &arg2
);

lv_label_cut_text(((lv_obj_t*)DATA_PTR(self)), arg1, arg2);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVLabel_get_style(mrb_state * mrb, mrb_value self) {
mrb_int type = 0;
/*
 * Class method LVGL::LVLabel#get_style(type)
 */
mrb_get_args(
  mrb,
  "i",
  &type
);

lv_style_t* style = lv_label_get_style(((lv_obj_t*)DATA_PTR(self)), type);
return (mrb_mruby_lvgui_module_LVGL_class_LVStyle_box_style(mrb, style));
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVLabel_set_style(mrb_state * mrb, mrb_value self) {
mrb_int type = 0;
mrb_value style = (mrb_nil_value());
/*
 * Class method LVGL::LVLabel#set_style(type, style)
 */
mrb_get_args(
  mrb,
  "io",
  &type, &style
);

lv_style_t * unboxed_style = ((lv_style_t*)DATA_PTR(style));
lv_label_set_style(((lv_obj_t*)DATA_PTR(self)), type, unboxed_style);
}
static void mrb_mruby_lvgui_module_LVGL_class_LVImage_event_handler(lv_obj_t * obj, lv_event_t event) {
mrb_lv_userdata * data = (mrb_lv_userdata *)(lv_obj_get_user_data(obj));
mrb_value m_event = mrb_fixnum_value(event);
mrb_value proc = mrb_iv_get(data->mrb, (data->value), mrb_intern_cstr(data->mrb, "@event_handler_proc"));
if (!mrb_nil_p(proc)) {
  mrb_funcall(data->mrb, proc, "call", 1, m_event);
}
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVImage_event_handler__equals(mrb_state * mrb, mrb_value self) {
mrb_value value = (mrb_nil_value());
/*
 * Class method LVGL::LVImage#event_handler__equals(value)
 */
mrb_get_args(
  mrb,
  "o",
  &value
);

mrb_iv_set(mrb, self, mrb_intern_cstr(mrb, "@event_handler_proc"), value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVImage_initialize(mrb_state * mrb, mrb_value self) {
mrb_value parent = (mrb_nil_value());
/*
 * Class method LVGL::LVImage#initialize(parent)
 */
mrb_get_args(
  mrb,
  "|o",
  &parent
);

// Forces the garbage collector to keep a reference.
// (TODO: unregister on delete, when delete is handled)
// Not registering, some objects leaves sight of mruby, but are
// still well alive inside the LVGL objects.
mrb_gc_register(mrb, self);
lv_obj_t * obj;

if (mrb_nil_p(parent)) {
  LV_LOG_INFO("[mruby] Creating LVImage as screen. (Switching lv_disp_load_scr!)");
  obj = lv_img_create(NULL, NULL);
  // FIXME: Bad assumption here...
  lv_disp_load_scr(obj);
}
else {
  LV_LOG_INFO("[mruby] Creating LVImage as child.");
  obj = lv_img_create(((lv_obj_t*)DATA_PTR(parent)), NULL);
}

// Associate the lv_obj to the mruby instance
mrb_data_init(self, obj, &mrb_lv_obj_t_type);

mrb_lv_userdata * data = malloc(sizeof(mrb_lv_userdata));
data->mrb = mrb;
data->value = self;

// Associate the mruby instance to the lv_obj
lv_obj_set_user_data(obj, (void *)(data));

// Associate the event handler to literally all mruby-instanciated
// lv_obj. We'll let the ruby-side code the chance to handle events.
// Another option would be to register this callback as needed.
lv_obj_set_event_cb(obj, mrb_mruby_lvgui_module_LVGL_class_LVImage_event_handler);

return self;
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVImage_set_src(mrb_state * mrb, mrb_value self) {
char * arg1 = "";
/*
 * Class method LVGL::LVImage#set_src(arg1)
 */
mrb_get_args(
  mrb,
  "z",
  &arg1
);

lv_img_set_src(((lv_obj_t*)DATA_PTR(self)), arg1);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVImage_set_auto_size(mrb_state * mrb, mrb_value self) {
mrb_bool arg1 = false;
/*
 * Class method LVGL::LVImage#set_auto_size(arg1)
 */
mrb_get_args(
  mrb,
  "b",
  &arg1
);

lv_img_set_auto_size(((lv_obj_t*)DATA_PTR(self)), arg1);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVImage_set_offset_x(mrb_state * mrb, mrb_value self) {
mrb_int arg1 = 0;
/*
 * Class method LVGL::LVImage#set_offset_x(arg1)
 */
mrb_get_args(
  mrb,
  "i",
  &arg1
);

lv_img_set_offset_x(((lv_obj_t*)DATA_PTR(self)), arg1);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVImage_set_offset_y(mrb_state * mrb, mrb_value self) {
mrb_int arg1 = 0;
/*
 * Class method LVGL::LVImage#set_offset_y(arg1)
 */
mrb_get_args(
  mrb,
  "i",
  &arg1
);

lv_img_set_offset_y(((lv_obj_t*)DATA_PTR(self)), arg1);
return (mrb_nil_value());
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVImage_get_src(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVImage#get_src()
 */
const char * return_value = lv_img_get_src(((lv_obj_t*)DATA_PTR(self)));
return return_value ? mrb_str_new_cstr(mrb, return_value) : mrb_nil_value();
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVImage_get_file_name(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVImage#get_file_name()
 */
const char * return_value = lv_img_get_file_name(((lv_obj_t*)DATA_PTR(self)));
return return_value ? mrb_str_new_cstr(mrb, return_value) : mrb_nil_value();
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVImage_get_auto_size(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVImage#get_auto_size()
 */
const mrb_bool return_value = lv_img_get_auto_size(((lv_obj_t*)DATA_PTR(self)));
return mrb_bool_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVImage_get_offset_x(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVImage#get_offset_x()
 */
const mrb_int return_value = lv_img_get_offset_x(((lv_obj_t*)DATA_PTR(self)));
return mrb_fixnum_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVImage_get_offset_y(mrb_state * mrb, mrb_value self) {
/*
 * Class method LVGL::LVImage#get_offset_y()
 */
const mrb_int return_value = lv_img_get_offset_y(((lv_obj_t*)DATA_PTR(self)));
return mrb_fixnum_value(return_value);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVImage_get_style(mrb_state * mrb, mrb_value self) {
mrb_int type = 0;
/*
 * Class method LVGL::LVImage#get_style(type)
 */
mrb_get_args(
  mrb,
  "i",
  &type
);

lv_style_t* style = lv_img_get_style(((lv_obj_t*)DATA_PTR(self)), type);
return (mrb_mruby_lvgui_module_LVGL_class_LVStyle_box_style(mrb, style));
}
static mrb_value mrb_mruby_lvgui_module_LVGL_class_LVImage_set_style(mrb_state * mrb, mrb_value self) {
mrb_int type = 0;
mrb_value style = (mrb_nil_value());
/*
 * Class method LVGL::LVImage#set_style(type, style)
 */
mrb_get_args(
  mrb,
  "io",
  &type, &style
);

lv_style_t * unboxed_style = ((lv_style_t*)DATA_PTR(style));
lv_img_set_style(((lv_obj_t*)DATA_PTR(self)), type, unboxed_style);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_module_LVNanoSVG_resize_next_width(mrb_state * mrb, mrb_value self) {
mrb_int width = 0;
/*
 * Class method LVGL::LVNanoSVG#resize_next_width(width)
 */
mrb_get_args(
  mrb,
  "i",
  &width
);

lv_nanosvg_resize_next_width(width);
}
static mrb_value mrb_mruby_lvgui_module_LVGL_module_LVNanoSVG_resize_next_height(mrb_state * mrb, mrb_value self) {
mrb_int height = 0;
/*
 * Class method LVGL::LVNanoSVG#resize_next_height(height)
 */
mrb_get_args(
  mrb,
  "i",
  &height
);

lv_nanosvg_resize_next_height(height);
}
void mrb_mruby_lvgui_gem_init(mrb_state * mrb) {
/*
 * Registering module: LVGL
 */
struct RClass *module_LVGL = mrb_define_module_under(
	mrb,
	(mrb->object_class),
	"LVGL"
);

/*
 * Registering module: STR_SYMBOL
 */
struct RClass *module_STR_SYMBOL = mrb_define_module_under(
	mrb,
	(mrb_module_get_under(mrb, (mrb->object_class), "LVGL")),
	"STR_SYMBOL"
);

/*
 * Registering module: FONT_SUBPX
 */
struct RClass *module_FONT_SUBPX = mrb_define_module_under(
	mrb,
	(mrb_module_get_under(mrb, (mrb->object_class), "LVGL")),
	"FONT_SUBPX"
);

/*
 * Registering module: OPA
 */
struct RClass *module_OPA = mrb_define_module_under(
	mrb,
	(mrb_module_get_under(mrb, (mrb->object_class), "LVGL")),
	"OPA"
);

/*
 * Registering module: ANIM
 */
struct RClass *module_ANIM = mrb_define_module_under(
	mrb,
	(mrb_module_get_under(mrb, (mrb->object_class), "LVGL")),
	"ANIM"
);

/*
 * Registering module: BORDER
 */
struct RClass *module_BORDER = mrb_define_module_under(
	mrb,
	(mrb_module_get_under(mrb, (mrb->object_class), "LVGL")),
	"BORDER"
);

/*
 * Registering module: SHADOW
 */
struct RClass *module_SHADOW = mrb_define_module_under(
	mrb,
	(mrb_module_get_under(mrb, (mrb->object_class), "LVGL")),
	"SHADOW"
);

/*
 * Registering module: RES
 */
struct RClass *module_RES = mrb_define_module_under(
	mrb,
	(mrb_module_get_under(mrb, (mrb->object_class), "LVGL")),
	"RES"
);

/*
 * Registering module: TASK_PRIO
 */
struct RClass *module_TASK_PRIO = mrb_define_module_under(
	mrb,
	(mrb_module_get_under(mrb, (mrb->object_class), "LVGL")),
	"TASK_PRIO"
);

/*
 * Registering module: INDEV_TYPE
 */
struct RClass *module_INDEV_TYPE = mrb_define_module_under(
	mrb,
	(mrb_module_get_under(mrb, (mrb->object_class), "LVGL")),
	"INDEV_TYPE"
);

/*
 * Registering module: INDEV_STATE
 */
struct RClass *module_INDEV_STATE = mrb_define_module_under(
	mrb,
	(mrb_module_get_under(mrb, (mrb->object_class), "LVGL")),
	"INDEV_STATE"
);

/*
 * Registering module: DESIGN
 */
struct RClass *module_DESIGN = mrb_define_module_under(
	mrb,
	(mrb_module_get_under(mrb, (mrb->object_class), "LVGL")),
	"DESIGN"
);

/*
 * Registering module: EVENT
 */
struct RClass *module_EVENT = mrb_define_module_under(
	mrb,
	(mrb_module_get_under(mrb, (mrb->object_class), "LVGL")),
	"EVENT"
);

/*
 * Registering module: SIGNAL
 */
struct RClass *module_SIGNAL = mrb_define_module_under(
	mrb,
	(mrb_module_get_under(mrb, (mrb->object_class), "LVGL")),
	"SIGNAL"
);

/*
 * Registering module: ALIGN
 */
struct RClass *module_ALIGN = mrb_define_module_under(
	mrb,
	(mrb_module_get_under(mrb, (mrb->object_class), "LVGL")),
	"ALIGN"
);

/*
 * Registering module: DRAG_DIR
 */
struct RClass *module_DRAG_DIR = mrb_define_module_under(
	mrb,
	(mrb_module_get_under(mrb, (mrb->object_class), "LVGL")),
	"DRAG_DIR"
);

/*
 * Registering module: PROTECT
 */
struct RClass *module_PROTECT = mrb_define_module_under(
	mrb,
	(mrb_module_get_under(mrb, (mrb->object_class), "LVGL")),
	"PROTECT"
);

/*
 * Registering module: LAYOUT
 */
struct RClass *module_LAYOUT = mrb_define_module_under(
	mrb,
	(mrb_module_get_under(mrb, (mrb->object_class), "LVGL")),
	"LAYOUT"
);

/*
 * Registering module: FIT
 */
struct RClass *module_FIT = mrb_define_module_under(
	mrb,
	(mrb_module_get_under(mrb, (mrb->object_class), "LVGL")),
	"FIT"
);

/*
 * Registering module: CONT_STYLE
 */
struct RClass *module_CONT_STYLE = mrb_define_module_under(
	mrb,
	(mrb_module_get_under(mrb, (mrb->object_class), "LVGL")),
	"CONT_STYLE"
);

/*
 * Registering module: KEY
 */
struct RClass *module_KEY = mrb_define_module_under(
	mrb,
	(mrb_module_get_under(mrb, (mrb->object_class), "LVGL")),
	"KEY"
);

/*
 * Registering module: GROUP_REFOCUS_POLICY
 */
struct RClass *module_GROUP_REFOCUS_POLICY = mrb_define_module_under(
	mrb,
	(mrb_module_get_under(mrb, (mrb->object_class), "LVGL")),
	"GROUP_REFOCUS_POLICY"
);

/*
 * Registering module: BTN_STATE
 */
struct RClass *module_BTN_STATE = mrb_define_module_under(
	mrb,
	(mrb_module_get_under(mrb, (mrb->object_class), "LVGL")),
	"BTN_STATE"
);

/*
 * Registering module: BTN_STYLE
 */
struct RClass *module_BTN_STYLE = mrb_define_module_under(
	mrb,
	(mrb_module_get_under(mrb, (mrb->object_class), "LVGL")),
	"BTN_STYLE"
);

/*
 * Registering module: TXT_FLAG
 */
struct RClass *module_TXT_FLAG = mrb_define_module_under(
	mrb,
	(mrb_module_get_under(mrb, (mrb->object_class), "LVGL")),
	"TXT_FLAG"
);

/*
 * Registering module: TXT_CMD_STATE
 */
struct RClass *module_TXT_CMD_STATE = mrb_define_module_under(
	mrb,
	(mrb_module_get_under(mrb, (mrb->object_class), "LVGL")),
	"TXT_CMD_STATE"
);

/*
 * Registering module: FS_RES
 */
struct RClass *module_FS_RES = mrb_define_module_under(
	mrb,
	(mrb_module_get_under(mrb, (mrb->object_class), "LVGL")),
	"FS_RES"
);

/*
 * Registering module: FS_MODE
 */
struct RClass *module_FS_MODE = mrb_define_module_under(
	mrb,
	(mrb_module_get_under(mrb, (mrb->object_class), "LVGL")),
	"FS_MODE"
);

/*
 * Registering module: IMG_SRC
 */
struct RClass *module_IMG_SRC = mrb_define_module_under(
	mrb,
	(mrb_module_get_under(mrb, (mrb->object_class), "LVGL")),
	"IMG_SRC"
);

/*
 * Registering module: IMG_CF
 */
struct RClass *module_IMG_CF = mrb_define_module_under(
	mrb,
	(mrb_module_get_under(mrb, (mrb->object_class), "LVGL")),
	"IMG_CF"
);

/*
 * Registering module: LABEL_LONG
 */
struct RClass *module_LABEL_LONG = mrb_define_module_under(
	mrb,
	(mrb_module_get_under(mrb, (mrb->object_class), "LVGL")),
	"LABEL_LONG"
);

/*
 * Registering module: LABEL_ALIGN
 */
struct RClass *module_LABEL_ALIGN = mrb_define_module_under(
	mrb,
	(mrb_module_get_under(mrb, (mrb->object_class), "LVGL")),
	"LABEL_ALIGN"
);

/*
 * Registering module: LABEL_STYLE
 */
struct RClass *module_LABEL_STYLE = mrb_define_module_under(
	mrb,
	(mrb_module_get_under(mrb, (mrb->object_class), "LVGL")),
	"LABEL_STYLE"
);

/*
 * Registering module: SB_MODE
 */
struct RClass *module_SB_MODE = mrb_define_module_under(
	mrb,
	(mrb_module_get_under(mrb, (mrb->object_class), "LVGL")),
	"SB_MODE"
);

/*
 * Registering module: PAGE_EDGE
 */
struct RClass *module_PAGE_EDGE = mrb_define_module_under(
	mrb,
	(mrb_module_get_under(mrb, (mrb->object_class), "LVGL")),
	"PAGE_EDGE"
);

/*
 * Registering module: PAGE_STYLE
 */
struct RClass *module_PAGE_STYLE = mrb_define_module_under(
	mrb,
	(mrb_module_get_under(mrb, (mrb->object_class), "LVGL")),
	"PAGE_STYLE"
);

/*
 * Registering module: IMG_STYLE
 */
struct RClass *module_IMG_STYLE = mrb_define_module_under(
	mrb,
	(mrb_module_get_under(mrb, (mrb->object_class), "LVGL")),
	"IMG_STYLE"
);

/*
 * Registering module: WIN_STYLE
 */
struct RClass *module_WIN_STYLE = mrb_define_module_under(
	mrb,
	(mrb_module_get_under(mrb, (mrb->object_class), "LVGL")),
	"WIN_STYLE"
);

/*
 * Registering module: TABVIEW_BTNS_POS
 */
struct RClass *module_TABVIEW_BTNS_POS = mrb_define_module_under(
	mrb,
	(mrb_module_get_under(mrb, (mrb->object_class), "LVGL")),
	"TABVIEW_BTNS_POS"
);

/*
 * Registering module: TABVIEW_STYLE
 */
struct RClass *module_TABVIEW_STYLE = mrb_define_module_under(
	mrb,
	(mrb_module_get_under(mrb, (mrb->object_class), "LVGL")),
	"TABVIEW_STYLE"
);

/*
 * LVStyle registry
 */
/*
 * Registering class: LVStyle
 */
struct RClass *class_LVStyle = mrb_define_class_under(
	mrb,
	(mrb_module_get_under(mrb, (mrb->object_class), "LVGL")),
	"LVStyle",
	(mrb->object_class)
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"dup",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_dup,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"glass",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_glass,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"glass=",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_glass__equals,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"body_border_color",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_border_color,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"body_border_color=",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_border_color__equals,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"body_border_opa",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_border_opa,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"body_border_opa=",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_border_opa__equals,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"body_border_part",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_border_part,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"body_border_part=",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_border_part__equals,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"body_border_width",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_border_width,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"body_border_width=",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_border_width__equals,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"body_grad_color",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_grad_color,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"body_grad_color=",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_grad_color__equals,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"body_main_color",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_main_color,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"body_main_color=",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_main_color__equals,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"body_opa",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_opa,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"body_opa=",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_opa__equals,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"body_padding_bottom",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_padding_bottom,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"body_padding_bottom=",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_padding_bottom__equals,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"body_padding_inner",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_padding_inner,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"body_padding_inner=",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_padding_inner__equals,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"body_padding_left",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_padding_left,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"body_padding_left=",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_padding_left__equals,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"body_padding_right",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_padding_right,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"body_padding_right=",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_padding_right__equals,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"body_padding_top",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_padding_top,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"body_padding_top=",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_padding_top__equals,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"body_radius",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_radius,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"body_radius=",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_radius__equals,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"body_shadow_color",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_shadow_color,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"body_shadow_color=",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_shadow_color__equals,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"body_shadow_type",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_shadow_type,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"body_shadow_type=",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_shadow_type__equals,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"body_shadow_width",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_shadow_width,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"body_shadow_width=",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_body_shadow_width__equals,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"image_color",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_image_color,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"image_color=",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_image_color__equals,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"image_intense",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_image_intense,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"image_intense=",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_image_intense__equals,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"image_opa",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_image_opa,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"image_opa=",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_image_opa__equals,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"line_color",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_line_color,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"line_color=",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_line_color__equals,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"line_opa",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_line_opa,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"line_opa=",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_line_opa__equals,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"line_width",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_line_width,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"line_width=",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_line_width__equals,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"text_color",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_text_color,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"text_color=",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_text_color__equals,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"text_font",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_text_font,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"text_font=",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_text_font__equals,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"text_letter_space",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_text_letter_space,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"text_letter_space=",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_text_letter_space__equals,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"text_line_space",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_text_line_space,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"text_line_space=",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_text_line_space__equals,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"text_opa",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_text_opa,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"text_opa=",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_text_opa__equals,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"text_sel_color",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_text_sel_color,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVStyle,
	"text_sel_color=",
	mrb_mruby_lvgui_module_LVGL_class_LVStyle_text_sel_color__equals,
	MRB_ARGS_REQ(1)
);

// ~~  known_lv_styles = Hash.new()
known_lv_styles = mrb_hash_new(mrb);
mrb_gc_register(mrb, known_lv_styles);

/*
 * Built-in styles
 */
mrb_define_const(
  mrb,
  (mrb_class_get_under(mrb, (mrb_module_get_under(mrb, (mrb->object_class), "LVGL")), "LVStyle")),
  "STYLE_SCR",
  (mrb_mruby_lvgui_module_LVGL_class_LVStyle_box_style(mrb, &lv_style_scr))
);

mrb_define_const(
  mrb,
  (mrb_class_get_under(mrb, (mrb_module_get_under(mrb, (mrb->object_class), "LVGL")), "LVStyle")),
  "STYLE_TRANSP",
  (mrb_mruby_lvgui_module_LVGL_class_LVStyle_box_style(mrb, &lv_style_transp))
);

mrb_define_const(
  mrb,
  (mrb_class_get_under(mrb, (mrb_module_get_under(mrb, (mrb->object_class), "LVGL")), "LVStyle")),
  "STYLE_TRANSP_TIGHT",
  (mrb_mruby_lvgui_module_LVGL_class_LVStyle_box_style(mrb, &lv_style_transp_tight))
);

mrb_define_const(
  mrb,
  (mrb_class_get_under(mrb, (mrb_module_get_under(mrb, (mrb->object_class), "LVGL")), "LVStyle")),
  "STYLE_TRANSP_FIT",
  (mrb_mruby_lvgui_module_LVGL_class_LVStyle_box_style(mrb, &lv_style_transp_fit))
);

mrb_define_const(
  mrb,
  (mrb_class_get_under(mrb, (mrb_module_get_under(mrb, (mrb->object_class), "LVGL")), "LVStyle")),
  "STYLE_PLAIN",
  (mrb_mruby_lvgui_module_LVGL_class_LVStyle_box_style(mrb, &lv_style_plain))
);

mrb_define_const(
  mrb,
  (mrb_class_get_under(mrb, (mrb_module_get_under(mrb, (mrb->object_class), "LVGL")), "LVStyle")),
  "STYLE_PLAIN_COLOR",
  (mrb_mruby_lvgui_module_LVGL_class_LVStyle_box_style(mrb, &lv_style_plain_color))
);

mrb_define_const(
  mrb,
  (mrb_class_get_under(mrb, (mrb_module_get_under(mrb, (mrb->object_class), "LVGL")), "LVStyle")),
  "STYLE_PRETTY",
  (mrb_mruby_lvgui_module_LVGL_class_LVStyle_box_style(mrb, &lv_style_pretty))
);

mrb_define_const(
  mrb,
  (mrb_class_get_under(mrb, (mrb_module_get_under(mrb, (mrb->object_class), "LVGL")), "LVStyle")),
  "STYLE_PRETTY_COLOR",
  (mrb_mruby_lvgui_module_LVGL_class_LVStyle_box_style(mrb, &lv_style_pretty_color))
);

mrb_define_const(
  mrb,
  (mrb_class_get_under(mrb, (mrb_module_get_under(mrb, (mrb->object_class), "LVGL")), "LVStyle")),
  "STYLE_BTN_REL",
  (mrb_mruby_lvgui_module_LVGL_class_LVStyle_box_style(mrb, &lv_style_btn_rel))
);

mrb_define_const(
  mrb,
  (mrb_class_get_under(mrb, (mrb_module_get_under(mrb, (mrb->object_class), "LVGL")), "LVStyle")),
  "STYLE_BTN_PR",
  (mrb_mruby_lvgui_module_LVGL_class_LVStyle_box_style(mrb, &lv_style_btn_pr))
);

mrb_define_const(
  mrb,
  (mrb_class_get_under(mrb, (mrb_module_get_under(mrb, (mrb->object_class), "LVGL")), "LVStyle")),
  "STYLE_BTN_TGL_REL",
  (mrb_mruby_lvgui_module_LVGL_class_LVStyle_box_style(mrb, &lv_style_btn_tgl_rel))
);

mrb_define_const(
  mrb,
  (mrb_class_get_under(mrb, (mrb_module_get_under(mrb, (mrb->object_class), "LVGL")), "LVStyle")),
  "STYLE_BTN_TGL_PR",
  (mrb_mruby_lvgui_module_LVGL_class_LVStyle_box_style(mrb, &lv_style_btn_tgl_pr))
);

mrb_define_const(
  mrb,
  (mrb_class_get_under(mrb, (mrb_module_get_under(mrb, (mrb->object_class), "LVGL")), "LVStyle")),
  "STYLE_BTN_INA",
  (mrb_mruby_lvgui_module_LVGL_class_LVStyle_box_style(mrb, &lv_style_btn_ina))
);

/*
 * Registering module: Hacks
 */
struct RClass *module_Hacks = mrb_define_module_under(
	mrb,
	(mrb_module_get_under(mrb, (mrb->object_class), "LVGL")),
	"Hacks"
);

mrb_define_class_method(
	mrb,
	module_Hacks,
	"monitor_width=",
	mrb_mruby_lvgui_module_LVGL_module_Hacks_monitor_width__equals,
	MRB_ARGS_REQ(1)
);

mrb_define_class_method(
	mrb,
	module_Hacks,
	"monitor_height=",
	mrb_mruby_lvgui_module_LVGL_module_Hacks_monitor_height__equals,
	MRB_ARGS_REQ(1)
);

mrb_define_class_method(
	mrb,
	module_Hacks,
	"simulator?",
	mrb_mruby_lvgui_module_LVGL_module_Hacks_simulator__question_mark,
	MRB_ARGS_NONE()
);

mrb_define_class_method(
	mrb,
	module_Hacks,
	"init",
	mrb_mruby_lvgui_module_LVGL_module_Hacks_init,
	MRB_ARGS_NONE()
);

mrb_define_class_method(
	mrb,
	module_Hacks,
	"theme_night",
	mrb_mruby_lvgui_module_LVGL_module_Hacks_theme_night,
	MRB_ARGS_REQ(1)
);

/*
 * Registering class: LVObject
 */
struct RClass *class_LVObject = mrb_define_class_under(
	mrb,
	(mrb_module_get_under(mrb, (mrb->object_class), "LVGL")),
	"LVObject",
	(mrb->object_class)
);

mrb_define_method(
	mrb,
	class_LVObject,
	"event_handler=",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_event_handler__equals,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVObject,
	"initialize",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_initialize,
	MRB_ARGS_OPT(1)
);

mrb_define_method(
	mrb,
	class_LVObject,
	"invalidate",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_invalidate,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVObject,
	"move_foreground",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_move_foreground,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVObject,
	"move_background",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_move_background,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVObject,
	"set_pos",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_set_pos,
	MRB_ARGS_REQ(2)
);

mrb_define_method(
	mrb,
	class_LVObject,
	"set_x",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_set_x,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVObject,
	"set_y",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_set_y,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVObject,
	"set_size",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_set_size,
	MRB_ARGS_REQ(2)
);

mrb_define_method(
	mrb,
	class_LVObject,
	"set_width",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_set_width,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVObject,
	"set_height",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_set_height,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVObject,
	"realign",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_realign,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVObject,
	"set_auto_realign",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_set_auto_realign,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVObject,
	"set_ext_click_area",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_set_ext_click_area,
	MRB_ARGS_REQ(4)
);

mrb_define_method(
	mrb,
	class_LVObject,
	"refresh_style",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_refresh_style,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVObject,
	"set_hidden",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_set_hidden,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVObject,
	"set_click",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_set_click,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVObject,
	"set_top",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_set_top,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVObject,
	"set_drag",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_set_drag,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVObject,
	"set_drag_dir",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_set_drag_dir,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVObject,
	"set_drag_throw",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_set_drag_throw,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVObject,
	"set_drag_parent",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_set_drag_parent,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVObject,
	"set_parent_event",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_set_parent_event,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVObject,
	"set_base_dir",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_set_base_dir,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVObject,
	"set_opa_scale_enable",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_set_opa_scale_enable,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVObject,
	"set_opa_scale",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_set_opa_scale,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVObject,
	"set_protect",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_set_protect,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVObject,
	"clear_protect",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_clear_protect,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVObject,
	"refresh_ext_draw_pad",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_refresh_ext_draw_pad,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVObject,
	"count_children",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_count_children,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVObject,
	"count_children_recursive",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_count_children_recursive,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVObject,
	"get_x",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_get_x,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVObject,
	"get_y",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_get_y,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVObject,
	"get_width",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_get_width,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVObject,
	"get_height",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_get_height,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVObject,
	"get_width_fit",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_get_width_fit,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVObject,
	"get_height_fit",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_get_height_fit,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVObject,
	"get_auto_realign",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_get_auto_realign,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVObject,
	"get_ext_click_pad_left",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_get_ext_click_pad_left,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVObject,
	"get_ext_click_pad_right",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_get_ext_click_pad_right,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVObject,
	"get_ext_click_pad_top",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_get_ext_click_pad_top,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVObject,
	"get_ext_click_pad_bottom",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_get_ext_click_pad_bottom,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVObject,
	"get_ext_draw_pad",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_get_ext_draw_pad,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVObject,
	"get_hidden",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_get_hidden,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVObject,
	"get_click",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_get_click,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVObject,
	"get_top",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_get_top,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVObject,
	"get_drag",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_get_drag,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVObject,
	"get_drag_dir",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_get_drag_dir,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVObject,
	"get_drag_throw",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_get_drag_throw,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVObject,
	"get_drag_parent",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_get_drag_parent,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVObject,
	"get_parent_event",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_get_parent_event,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVObject,
	"get_base_dir",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_get_base_dir,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVObject,
	"get_opa_scale_enable",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_get_opa_scale_enable,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVObject,
	"get_opa_scale",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_get_opa_scale,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVObject,
	"get_protect",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_get_protect,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVObject,
	"is_protected",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_is_protected,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVObject,
	"is_focused",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_is_focused,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVObject,
	"glue_obj",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_glue_obj,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVObject,
	"get_style",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_get_style,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVObject,
	"set_style",
	mrb_mruby_lvgui_module_LVGL_class_LVObject_set_style,
	MRB_ARGS_REQ(1)
);

/*
 * Registering class: LVContainer
 */
struct RClass *class_LVContainer = mrb_define_class_under(
	mrb,
	(mrb_module_get_under(mrb, (mrb->object_class), "LVGL")),
	"LVContainer",
	(mrb_class_get_under(mrb, (mrb_module_get_under(mrb, (mrb->object_class), "LVGL")), "LVObject"))
);

mrb_define_method(
	mrb,
	class_LVContainer,
	"event_handler=",
	mrb_mruby_lvgui_module_LVGL_class_LVContainer_event_handler__equals,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVContainer,
	"initialize",
	mrb_mruby_lvgui_module_LVGL_class_LVContainer_initialize,
	MRB_ARGS_OPT(1)
);

mrb_define_method(
	mrb,
	class_LVContainer,
	"set_layout",
	mrb_mruby_lvgui_module_LVGL_class_LVContainer_set_layout,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVContainer,
	"set_fit4",
	mrb_mruby_lvgui_module_LVGL_class_LVContainer_set_fit4,
	MRB_ARGS_REQ(4)
);

mrb_define_method(
	mrb,
	class_LVContainer,
	"set_fit2",
	mrb_mruby_lvgui_module_LVGL_class_LVContainer_set_fit2,
	MRB_ARGS_REQ(2)
);

mrb_define_method(
	mrb,
	class_LVContainer,
	"set_fit",
	mrb_mruby_lvgui_module_LVGL_class_LVContainer_set_fit,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVContainer,
	"get_layout",
	mrb_mruby_lvgui_module_LVGL_class_LVContainer_get_layout,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVContainer,
	"get_fit_left",
	mrb_mruby_lvgui_module_LVGL_class_LVContainer_get_fit_left,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVContainer,
	"get_fit_right",
	mrb_mruby_lvgui_module_LVGL_class_LVContainer_get_fit_right,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVContainer,
	"get_fit_top",
	mrb_mruby_lvgui_module_LVGL_class_LVContainer_get_fit_top,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVContainer,
	"get_fit_bottom",
	mrb_mruby_lvgui_module_LVGL_class_LVContainer_get_fit_bottom,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVContainer,
	"get_style",
	mrb_mruby_lvgui_module_LVGL_class_LVContainer_get_style,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVContainer,
	"set_style",
	mrb_mruby_lvgui_module_LVGL_class_LVContainer_set_style,
	MRB_ARGS_REQ(2)
);

/*
 * Registering class: LVPage
 */
struct RClass *class_LVPage = mrb_define_class_under(
	mrb,
	(mrb_module_get_under(mrb, (mrb->object_class), "LVGL")),
	"LVPage",
	(mrb_class_get_under(mrb, (mrb_module_get_under(mrb, (mrb->object_class), "LVGL")), "LVContainer"))
);

mrb_define_method(
	mrb,
	class_LVPage,
	"event_handler=",
	mrb_mruby_lvgui_module_LVGL_class_LVPage_event_handler__equals,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVPage,
	"initialize",
	mrb_mruby_lvgui_module_LVGL_class_LVPage_initialize,
	MRB_ARGS_OPT(1)
);

mrb_define_method(
	mrb,
	class_LVPage,
	"get_scrl_height",
	mrb_mruby_lvgui_module_LVGL_class_LVPage_get_scrl_height,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVPage,
	"get_scrl_layout",
	mrb_mruby_lvgui_module_LVGL_class_LVPage_get_scrl_layout,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVPage,
	"get_scrl_width",
	mrb_mruby_lvgui_module_LVGL_class_LVPage_get_scrl_width,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVPage,
	"set_scrl_fit",
	mrb_mruby_lvgui_module_LVGL_class_LVPage_set_scrl_fit,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVPage,
	"set_scrl_fit2",
	mrb_mruby_lvgui_module_LVGL_class_LVPage_set_scrl_fit2,
	MRB_ARGS_REQ(2)
);

mrb_define_method(
	mrb,
	class_LVPage,
	"set_scrl_fit4",
	mrb_mruby_lvgui_module_LVGL_class_LVPage_set_scrl_fit4,
	MRB_ARGS_REQ(4)
);

mrb_define_method(
	mrb,
	class_LVPage,
	"set_scrl_height",
	mrb_mruby_lvgui_module_LVGL_class_LVPage_set_scrl_height,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVPage,
	"set_scrl_layout",
	mrb_mruby_lvgui_module_LVGL_class_LVPage_set_scrl_layout,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVPage,
	"set_scrl_width",
	mrb_mruby_lvgui_module_LVGL_class_LVPage_set_scrl_width,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVPage,
	"get_style",
	mrb_mruby_lvgui_module_LVGL_class_LVPage_get_style,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVPage,
	"set_style",
	mrb_mruby_lvgui_module_LVGL_class_LVPage_set_style,
	MRB_ARGS_REQ(2)
);

/*
 * Registering class: LVTabview
 */
struct RClass *class_LVTabview = mrb_define_class_under(
	mrb,
	(mrb_module_get_under(mrb, (mrb->object_class), "LVGL")),
	"LVTabview",
	(mrb_class_get_under(mrb, (mrb_module_get_under(mrb, (mrb->object_class), "LVGL")), "LVObject"))
);

mrb_define_method(
	mrb,
	class_LVTabview,
	"event_handler=",
	mrb_mruby_lvgui_module_LVGL_class_LVTabview_event_handler__equals,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVTabview,
	"initialize",
	mrb_mruby_lvgui_module_LVGL_class_LVTabview_initialize,
	MRB_ARGS_OPT(1)
);

mrb_define_method(
	mrb,
	class_LVTabview,
	"clean",
	mrb_mruby_lvgui_module_LVGL_class_LVTabview_clean,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVTabview,
	"set_tab_act",
	mrb_mruby_lvgui_module_LVGL_class_LVTabview_set_tab_act,
	MRB_ARGS_REQ(2)
);

mrb_define_method(
	mrb,
	class_LVTabview,
	"set_sliding",
	mrb_mruby_lvgui_module_LVGL_class_LVTabview_set_sliding,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVTabview,
	"set_anim_time",
	mrb_mruby_lvgui_module_LVGL_class_LVTabview_set_anim_time,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVTabview,
	"set_btns_pos",
	mrb_mruby_lvgui_module_LVGL_class_LVTabview_set_btns_pos,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVTabview,
	"set_btns_hidden",
	mrb_mruby_lvgui_module_LVGL_class_LVTabview_set_btns_hidden,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVTabview,
	"get_tab_act",
	mrb_mruby_lvgui_module_LVGL_class_LVTabview_get_tab_act,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVTabview,
	"get_tab_count",
	mrb_mruby_lvgui_module_LVGL_class_LVTabview_get_tab_count,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVTabview,
	"get_sliding",
	mrb_mruby_lvgui_module_LVGL_class_LVTabview_get_sliding,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVTabview,
	"get_anim_time",
	mrb_mruby_lvgui_module_LVGL_class_LVTabview_get_anim_time,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVTabview,
	"get_btns_pos",
	mrb_mruby_lvgui_module_LVGL_class_LVTabview_get_btns_pos,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVTabview,
	"get_btns_hidden",
	mrb_mruby_lvgui_module_LVGL_class_LVTabview_get_btns_hidden,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVTabview,
	"add_tab",
	mrb_mruby_lvgui_module_LVGL_class_LVTabview_add_tab,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVTabview,
	"get_style",
	mrb_mruby_lvgui_module_LVGL_class_LVTabview_get_style,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVTabview,
	"set_style",
	mrb_mruby_lvgui_module_LVGL_class_LVTabview_set_style,
	MRB_ARGS_REQ(2)
);

/*
 * Registering class: LVButton
 */
struct RClass *class_LVButton = mrb_define_class_under(
	mrb,
	(mrb_module_get_under(mrb, (mrb->object_class), "LVGL")),
	"LVButton",
	(mrb_class_get_under(mrb, (mrb_module_get_under(mrb, (mrb->object_class), "LVGL")), "LVContainer"))
);

mrb_define_method(
	mrb,
	class_LVButton,
	"event_handler=",
	mrb_mruby_lvgui_module_LVGL_class_LVButton_event_handler__equals,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVButton,
	"initialize",
	mrb_mruby_lvgui_module_LVGL_class_LVButton_initialize,
	MRB_ARGS_OPT(1)
);

mrb_define_method(
	mrb,
	class_LVButton,
	"set_toggle",
	mrb_mruby_lvgui_module_LVGL_class_LVButton_set_toggle,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVButton,
	"set_state",
	mrb_mruby_lvgui_module_LVGL_class_LVButton_set_state,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVButton,
	"toggle",
	mrb_mruby_lvgui_module_LVGL_class_LVButton_toggle,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVButton,
	"set_layout",
	mrb_mruby_lvgui_module_LVGL_class_LVButton_set_layout,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVButton,
	"set_fit4",
	mrb_mruby_lvgui_module_LVGL_class_LVButton_set_fit4,
	MRB_ARGS_REQ(4)
);

mrb_define_method(
	mrb,
	class_LVButton,
	"set_fit2",
	mrb_mruby_lvgui_module_LVGL_class_LVButton_set_fit2,
	MRB_ARGS_REQ(2)
);

mrb_define_method(
	mrb,
	class_LVButton,
	"set_fit",
	mrb_mruby_lvgui_module_LVGL_class_LVButton_set_fit,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVButton,
	"set_ink_in_time",
	mrb_mruby_lvgui_module_LVGL_class_LVButton_set_ink_in_time,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVButton,
	"set_ink_wait_time",
	mrb_mruby_lvgui_module_LVGL_class_LVButton_set_ink_wait_time,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVButton,
	"set_ink_out_time",
	mrb_mruby_lvgui_module_LVGL_class_LVButton_set_ink_out_time,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVButton,
	"get_state",
	mrb_mruby_lvgui_module_LVGL_class_LVButton_get_state,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVButton,
	"get_toggle",
	mrb_mruby_lvgui_module_LVGL_class_LVButton_get_toggle,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVButton,
	"get_layout",
	mrb_mruby_lvgui_module_LVGL_class_LVButton_get_layout,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVButton,
	"get_fit_left",
	mrb_mruby_lvgui_module_LVGL_class_LVButton_get_fit_left,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVButton,
	"get_fit_right",
	mrb_mruby_lvgui_module_LVGL_class_LVButton_get_fit_right,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVButton,
	"get_fit_top",
	mrb_mruby_lvgui_module_LVGL_class_LVButton_get_fit_top,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVButton,
	"get_fit_bottom",
	mrb_mruby_lvgui_module_LVGL_class_LVButton_get_fit_bottom,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVButton,
	"get_ink_in_time",
	mrb_mruby_lvgui_module_LVGL_class_LVButton_get_ink_in_time,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVButton,
	"get_ink_wait_time",
	mrb_mruby_lvgui_module_LVGL_class_LVButton_get_ink_wait_time,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVButton,
	"get_ink_out_time",
	mrb_mruby_lvgui_module_LVGL_class_LVButton_get_ink_out_time,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVButton,
	"get_style",
	mrb_mruby_lvgui_module_LVGL_class_LVButton_get_style,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVButton,
	"set_style",
	mrb_mruby_lvgui_module_LVGL_class_LVButton_set_style,
	MRB_ARGS_REQ(2)
);

/*
 * Registering class: LVLabel
 */
struct RClass *class_LVLabel = mrb_define_class_under(
	mrb,
	(mrb_module_get_under(mrb, (mrb->object_class), "LVGL")),
	"LVLabel",
	(mrb_class_get_under(mrb, (mrb_module_get_under(mrb, (mrb->object_class), "LVGL")), "LVObject"))
);

mrb_define_method(
	mrb,
	class_LVLabel,
	"event_handler=",
	mrb_mruby_lvgui_module_LVGL_class_LVLabel_event_handler__equals,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVLabel,
	"initialize",
	mrb_mruby_lvgui_module_LVGL_class_LVLabel_initialize,
	MRB_ARGS_OPT(1)
);

mrb_define_method(
	mrb,
	class_LVLabel,
	"set_text",
	mrb_mruby_lvgui_module_LVGL_class_LVLabel_set_text,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVLabel,
	"set_array_text",
	mrb_mruby_lvgui_module_LVGL_class_LVLabel_set_array_text,
	MRB_ARGS_REQ(2)
);

mrb_define_method(
	mrb,
	class_LVLabel,
	"set_long_mode",
	mrb_mruby_lvgui_module_LVGL_class_LVLabel_set_long_mode,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVLabel,
	"set_align",
	mrb_mruby_lvgui_module_LVGL_class_LVLabel_set_align,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVLabel,
	"set_recolor",
	mrb_mruby_lvgui_module_LVGL_class_LVLabel_set_recolor,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVLabel,
	"set_body_draw",
	mrb_mruby_lvgui_module_LVGL_class_LVLabel_set_body_draw,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVLabel,
	"set_anim_speed",
	mrb_mruby_lvgui_module_LVGL_class_LVLabel_set_anim_speed,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVLabel,
	"set_text_sel_start",
	mrb_mruby_lvgui_module_LVGL_class_LVLabel_set_text_sel_start,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVLabel,
	"set_text_sel_end",
	mrb_mruby_lvgui_module_LVGL_class_LVLabel_set_text_sel_end,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVLabel,
	"get_text",
	mrb_mruby_lvgui_module_LVGL_class_LVLabel_get_text,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVLabel,
	"get_long_mode",
	mrb_mruby_lvgui_module_LVGL_class_LVLabel_get_long_mode,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVLabel,
	"get_align",
	mrb_mruby_lvgui_module_LVGL_class_LVLabel_get_align,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVLabel,
	"get_recolor",
	mrb_mruby_lvgui_module_LVGL_class_LVLabel_get_recolor,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVLabel,
	"get_body_draw",
	mrb_mruby_lvgui_module_LVGL_class_LVLabel_get_body_draw,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVLabel,
	"get_anim_speed",
	mrb_mruby_lvgui_module_LVGL_class_LVLabel_get_anim_speed,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVLabel,
	"get_text_sel_start",
	mrb_mruby_lvgui_module_LVGL_class_LVLabel_get_text_sel_start,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVLabel,
	"get_text_sel_end",
	mrb_mruby_lvgui_module_LVGL_class_LVLabel_get_text_sel_end,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVLabel,
	"ins_text",
	mrb_mruby_lvgui_module_LVGL_class_LVLabel_ins_text,
	MRB_ARGS_REQ(2)
);

mrb_define_method(
	mrb,
	class_LVLabel,
	"cut_text",
	mrb_mruby_lvgui_module_LVGL_class_LVLabel_cut_text,
	MRB_ARGS_REQ(2)
);

mrb_define_method(
	mrb,
	class_LVLabel,
	"get_style",
	mrb_mruby_lvgui_module_LVGL_class_LVLabel_get_style,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVLabel,
	"set_style",
	mrb_mruby_lvgui_module_LVGL_class_LVLabel_set_style,
	MRB_ARGS_REQ(2)
);

/*
 * Registering class: LVImage
 */
struct RClass *class_LVImage = mrb_define_class_under(
	mrb,
	(mrb_module_get_under(mrb, (mrb->object_class), "LVGL")),
	"LVImage",
	(mrb_class_get_under(mrb, (mrb_module_get_under(mrb, (mrb->object_class), "LVGL")), "LVObject"))
);

mrb_define_method(
	mrb,
	class_LVImage,
	"event_handler=",
	mrb_mruby_lvgui_module_LVGL_class_LVImage_event_handler__equals,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVImage,
	"initialize",
	mrb_mruby_lvgui_module_LVGL_class_LVImage_initialize,
	MRB_ARGS_OPT(1)
);

mrb_define_method(
	mrb,
	class_LVImage,
	"set_src",
	mrb_mruby_lvgui_module_LVGL_class_LVImage_set_src,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVImage,
	"set_auto_size",
	mrb_mruby_lvgui_module_LVGL_class_LVImage_set_auto_size,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVImage,
	"set_offset_x",
	mrb_mruby_lvgui_module_LVGL_class_LVImage_set_offset_x,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVImage,
	"set_offset_y",
	mrb_mruby_lvgui_module_LVGL_class_LVImage_set_offset_y,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVImage,
	"get_src",
	mrb_mruby_lvgui_module_LVGL_class_LVImage_get_src,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVImage,
	"get_file_name",
	mrb_mruby_lvgui_module_LVGL_class_LVImage_get_file_name,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVImage,
	"get_auto_size",
	mrb_mruby_lvgui_module_LVGL_class_LVImage_get_auto_size,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVImage,
	"get_offset_x",
	mrb_mruby_lvgui_module_LVGL_class_LVImage_get_offset_x,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVImage,
	"get_offset_y",
	mrb_mruby_lvgui_module_LVGL_class_LVImage_get_offset_y,
	MRB_ARGS_NONE()
);

mrb_define_method(
	mrb,
	class_LVImage,
	"get_style",
	mrb_mruby_lvgui_module_LVGL_class_LVImage_get_style,
	MRB_ARGS_REQ(1)
);

mrb_define_method(
	mrb,
	class_LVImage,
	"set_style",
	mrb_mruby_lvgui_module_LVGL_class_LVImage_set_style,
	MRB_ARGS_REQ(2)
);

/*
 * Registering module: LVNanoSVG
 */
struct RClass *module_LVNanoSVG = mrb_define_module_under(
	mrb,
	(mrb_module_get_under(mrb, (mrb->object_class), "LVGL")),
	"LVNanoSVG"
);

mrb_define_class_method(
	mrb,
	module_LVNanoSVG,
	"resize_next_width",
	mrb_mruby_lvgui_module_LVGL_module_LVNanoSVG_resize_next_width,
	MRB_ARGS_REQ(1)
);

mrb_define_class_method(
	mrb,
	module_LVNanoSVG,
	"resize_next_height",
	mrb_mruby_lvgui_module_LVGL_module_LVNanoSVG_resize_next_height,
	MRB_ARGS_REQ(1)
);

mrb_define_const(mrb, module_STR_SYMBOL, "AUDIO", mrb_fixnum_value(0));

mrb_define_const(mrb, module_STR_SYMBOL, "VIDEO", mrb_fixnum_value(1));

mrb_define_const(mrb, module_STR_SYMBOL, "LIST", mrb_fixnum_value(2));

mrb_define_const(mrb, module_STR_SYMBOL, "OK", mrb_fixnum_value(3));

mrb_define_const(mrb, module_STR_SYMBOL, "CLOSE", mrb_fixnum_value(4));

mrb_define_const(mrb, module_STR_SYMBOL, "POWER", mrb_fixnum_value(5));

mrb_define_const(mrb, module_STR_SYMBOL, "SETTINGS", mrb_fixnum_value(6));

mrb_define_const(mrb, module_STR_SYMBOL, "HOME", mrb_fixnum_value(7));

mrb_define_const(mrb, module_STR_SYMBOL, "DOWNLOAD", mrb_fixnum_value(8));

mrb_define_const(mrb, module_STR_SYMBOL, "DRIVE", mrb_fixnum_value(9));

mrb_define_const(mrb, module_STR_SYMBOL, "REFRESH", mrb_fixnum_value(10));

mrb_define_const(mrb, module_STR_SYMBOL, "MUTE", mrb_fixnum_value(11));

mrb_define_const(mrb, module_STR_SYMBOL, "VOLUME_MID", mrb_fixnum_value(12));

mrb_define_const(mrb, module_STR_SYMBOL, "VOLUME_MAX", mrb_fixnum_value(13));

mrb_define_const(mrb, module_STR_SYMBOL, "IMAGE", mrb_fixnum_value(14));

mrb_define_const(mrb, module_STR_SYMBOL, "EDIT", mrb_fixnum_value(15));

mrb_define_const(mrb, module_STR_SYMBOL, "PREV", mrb_fixnum_value(16));

mrb_define_const(mrb, module_STR_SYMBOL, "PLAY", mrb_fixnum_value(17));

mrb_define_const(mrb, module_STR_SYMBOL, "PAUSE", mrb_fixnum_value(18));

mrb_define_const(mrb, module_STR_SYMBOL, "STOP", mrb_fixnum_value(19));

mrb_define_const(mrb, module_STR_SYMBOL, "NEXT", mrb_fixnum_value(20));

mrb_define_const(mrb, module_STR_SYMBOL, "EJECT", mrb_fixnum_value(21));

mrb_define_const(mrb, module_STR_SYMBOL, "LEFT", mrb_fixnum_value(22));

mrb_define_const(mrb, module_STR_SYMBOL, "RIGHT", mrb_fixnum_value(23));

mrb_define_const(mrb, module_STR_SYMBOL, "PLUS", mrb_fixnum_value(24));

mrb_define_const(mrb, module_STR_SYMBOL, "MINUS", mrb_fixnum_value(25));

mrb_define_const(mrb, module_STR_SYMBOL, "EYE_OPEN", mrb_fixnum_value(26));

mrb_define_const(mrb, module_STR_SYMBOL, "EYE_CLOSE", mrb_fixnum_value(27));

mrb_define_const(mrb, module_STR_SYMBOL, "WARNING", mrb_fixnum_value(28));

mrb_define_const(mrb, module_STR_SYMBOL, "SHUFFLE", mrb_fixnum_value(29));

mrb_define_const(mrb, module_STR_SYMBOL, "UP", mrb_fixnum_value(30));

mrb_define_const(mrb, module_STR_SYMBOL, "DOWN", mrb_fixnum_value(31));

mrb_define_const(mrb, module_STR_SYMBOL, "LOOP", mrb_fixnum_value(32));

mrb_define_const(mrb, module_STR_SYMBOL, "DIRECTORY", mrb_fixnum_value(33));

mrb_define_const(mrb, module_STR_SYMBOL, "UPLOAD", mrb_fixnum_value(34));

mrb_define_const(mrb, module_STR_SYMBOL, "CALL", mrb_fixnum_value(35));

mrb_define_const(mrb, module_STR_SYMBOL, "CUT", mrb_fixnum_value(36));

mrb_define_const(mrb, module_STR_SYMBOL, "COPY", mrb_fixnum_value(37));

mrb_define_const(mrb, module_STR_SYMBOL, "SAVE", mrb_fixnum_value(38));

mrb_define_const(mrb, module_STR_SYMBOL, "CHARGE", mrb_fixnum_value(39));

mrb_define_const(mrb, module_STR_SYMBOL, "PASTE", mrb_fixnum_value(40));

mrb_define_const(mrb, module_STR_SYMBOL, "BELL", mrb_fixnum_value(41));

mrb_define_const(mrb, module_STR_SYMBOL, "KEYBOARD", mrb_fixnum_value(42));

mrb_define_const(mrb, module_STR_SYMBOL, "GPS", mrb_fixnum_value(43));

mrb_define_const(mrb, module_STR_SYMBOL, "FILE", mrb_fixnum_value(44));

mrb_define_const(mrb, module_STR_SYMBOL, "WIFI", mrb_fixnum_value(45));

mrb_define_const(mrb, module_STR_SYMBOL, "BATTERY_FULL", mrb_fixnum_value(46));

mrb_define_const(mrb, module_STR_SYMBOL, "BATTERY_3", mrb_fixnum_value(47));

mrb_define_const(mrb, module_STR_SYMBOL, "BATTERY_2", mrb_fixnum_value(48));

mrb_define_const(mrb, module_STR_SYMBOL, "BATTERY_1", mrb_fixnum_value(49));

mrb_define_const(mrb, module_STR_SYMBOL, "BATTERY_EMPTY", mrb_fixnum_value(50));

mrb_define_const(mrb, module_STR_SYMBOL, "USB", mrb_fixnum_value(51));

mrb_define_const(mrb, module_STR_SYMBOL, "BLUETOOTH", mrb_fixnum_value(52));

mrb_define_const(mrb, module_STR_SYMBOL, "TRASH", mrb_fixnum_value(53));

mrb_define_const(mrb, module_STR_SYMBOL, "BACKSPACE", mrb_fixnum_value(54));

mrb_define_const(mrb, module_STR_SYMBOL, "SD_CARD", mrb_fixnum_value(55));

mrb_define_const(mrb, module_STR_SYMBOL, "NEW_LINE", mrb_fixnum_value(56));

mrb_define_const(mrb, module_STR_SYMBOL, "DUMMY", mrb_fixnum_value(57));

mrb_define_const(mrb, module_FONT_SUBPX, "NONE", mrb_fixnum_value(0));

mrb_define_const(mrb, module_FONT_SUBPX, "HOR", mrb_fixnum_value(1));

mrb_define_const(mrb, module_FONT_SUBPX, "VER", mrb_fixnum_value(2));

mrb_define_const(mrb, module_FONT_SUBPX, "BOTH", mrb_fixnum_value(3));

mrb_define_const(mrb, module_OPA, "TRANSP", mrb_fixnum_value(0));

mrb_define_const(mrb, module_OPA, "0", mrb_fixnum_value(0));

mrb_define_const(mrb, module_OPA, "10", mrb_fixnum_value(25));

mrb_define_const(mrb, module_OPA, "20", mrb_fixnum_value(51));

mrb_define_const(mrb, module_OPA, "30", mrb_fixnum_value(76));

mrb_define_const(mrb, module_OPA, "40", mrb_fixnum_value(102));

mrb_define_const(mrb, module_OPA, "50", mrb_fixnum_value(127));

mrb_define_const(mrb, module_OPA, "60", mrb_fixnum_value(153));

mrb_define_const(mrb, module_OPA, "70", mrb_fixnum_value(178));

mrb_define_const(mrb, module_OPA, "80", mrb_fixnum_value(204));

mrb_define_const(mrb, module_OPA, "90", mrb_fixnum_value(229));

mrb_define_const(mrb, module_OPA, "100", mrb_fixnum_value(255));

mrb_define_const(mrb, module_OPA, "COVER", mrb_fixnum_value(255));

mrb_define_const(mrb, module_ANIM, "OFF", mrb_fixnum_value(0));

mrb_define_const(mrb, module_ANIM, "ON", mrb_fixnum_value(1));

mrb_define_const(mrb, module_BORDER, "NONE", mrb_fixnum_value(0));

mrb_define_const(mrb, module_BORDER, "BOTTOM", mrb_fixnum_value(1));

mrb_define_const(mrb, module_BORDER, "TOP", mrb_fixnum_value(2));

mrb_define_const(mrb, module_BORDER, "LEFT", mrb_fixnum_value(4));

mrb_define_const(mrb, module_BORDER, "RIGHT", mrb_fixnum_value(8));

mrb_define_const(mrb, module_BORDER, "FULL", mrb_fixnum_value(15));

mrb_define_const(mrb, module_BORDER, "INTERNAL", mrb_fixnum_value(16));

mrb_define_const(mrb, module_SHADOW, "BOTTOM", mrb_fixnum_value(0));

mrb_define_const(mrb, module_SHADOW, "FULL", mrb_fixnum_value(1));

mrb_define_const(mrb, module_RES, "INV", mrb_fixnum_value(0));

mrb_define_const(mrb, module_RES, "OK", mrb_fixnum_value(1));

mrb_define_const(mrb, module_TASK_PRIO, "OFF", mrb_fixnum_value(0));

mrb_define_const(mrb, module_TASK_PRIO, "LOWEST", mrb_fixnum_value(1));

mrb_define_const(mrb, module_TASK_PRIO, "LOW", mrb_fixnum_value(2));

mrb_define_const(mrb, module_TASK_PRIO, "MID", mrb_fixnum_value(3));

mrb_define_const(mrb, module_TASK_PRIO, "HIGH", mrb_fixnum_value(4));

mrb_define_const(mrb, module_TASK_PRIO, "HIGHEST", mrb_fixnum_value(5));

mrb_define_const(mrb, module_TASK_PRIO, "NUM", mrb_fixnum_value(6));

mrb_define_const(mrb, module_INDEV_TYPE, "NONE", mrb_fixnum_value(0));

mrb_define_const(mrb, module_INDEV_TYPE, "POINTER", mrb_fixnum_value(1));

mrb_define_const(mrb, module_INDEV_TYPE, "KEYPAD", mrb_fixnum_value(2));

mrb_define_const(mrb, module_INDEV_TYPE, "BUTTON", mrb_fixnum_value(3));

mrb_define_const(mrb, module_INDEV_TYPE, "ENCODER", mrb_fixnum_value(4));

mrb_define_const(mrb, module_INDEV_STATE, "REL", mrb_fixnum_value(0));

mrb_define_const(mrb, module_INDEV_STATE, "PR", mrb_fixnum_value(1));

mrb_define_const(mrb, module_DESIGN, "DRAW_MAIN", mrb_fixnum_value(0));

mrb_define_const(mrb, module_DESIGN, "DRAW_POST", mrb_fixnum_value(1));

mrb_define_const(mrb, module_DESIGN, "COVER_CHK", mrb_fixnum_value(2));

mrb_define_const(mrb, module_EVENT, "PRESSED", mrb_fixnum_value(0));

mrb_define_const(mrb, module_EVENT, "PRESSING", mrb_fixnum_value(1));

mrb_define_const(mrb, module_EVENT, "PRESS_LOST", mrb_fixnum_value(2));

mrb_define_const(mrb, module_EVENT, "SHORT_CLICKED", mrb_fixnum_value(3));

mrb_define_const(mrb, module_EVENT, "LONG_PRESSED", mrb_fixnum_value(4));

mrb_define_const(mrb, module_EVENT, "LONG_PRESSED_REPEAT", mrb_fixnum_value(5));

mrb_define_const(mrb, module_EVENT, "CLICKED", mrb_fixnum_value(6));

mrb_define_const(mrb, module_EVENT, "RELEASED", mrb_fixnum_value(7));

mrb_define_const(mrb, module_EVENT, "DRAG_BEGIN", mrb_fixnum_value(8));

mrb_define_const(mrb, module_EVENT, "DRAG_END", mrb_fixnum_value(9));

mrb_define_const(mrb, module_EVENT, "DRAG_THROW_BEGIN", mrb_fixnum_value(10));

mrb_define_const(mrb, module_EVENT, "KEY", mrb_fixnum_value(11));

mrb_define_const(mrb, module_EVENT, "FOCUSED", mrb_fixnum_value(12));

mrb_define_const(mrb, module_EVENT, "DEFOCUSED", mrb_fixnum_value(13));

mrb_define_const(mrb, module_EVENT, "VALUE_CHANGED", mrb_fixnum_value(14));

mrb_define_const(mrb, module_EVENT, "INSERT", mrb_fixnum_value(15));

mrb_define_const(mrb, module_EVENT, "REFRESH", mrb_fixnum_value(16));

mrb_define_const(mrb, module_EVENT, "APPLY", mrb_fixnum_value(17));

mrb_define_const(mrb, module_EVENT, "CANCEL", mrb_fixnum_value(18));

mrb_define_const(mrb, module_EVENT, "DELETE", mrb_fixnum_value(19));

mrb_define_const(mrb, module_SIGNAL, "CLEANUP", mrb_fixnum_value(0));

mrb_define_const(mrb, module_SIGNAL, "CHILD_CHG", mrb_fixnum_value(1));

mrb_define_const(mrb, module_SIGNAL, "CORD_CHG", mrb_fixnum_value(2));

mrb_define_const(mrb, module_SIGNAL, "PARENT_SIZE_CHG", mrb_fixnum_value(3));

mrb_define_const(mrb, module_SIGNAL, "STYLE_CHG", mrb_fixnum_value(4));

mrb_define_const(mrb, module_SIGNAL, "BASE_DIR_CHG", mrb_fixnum_value(5));

mrb_define_const(mrb, module_SIGNAL, "REFR_EXT_DRAW_PAD", mrb_fixnum_value(6));

mrb_define_const(mrb, module_SIGNAL, "GET_TYPE", mrb_fixnum_value(7));

mrb_define_const(mrb, module_SIGNAL, "PRESSED", mrb_fixnum_value(8));

mrb_define_const(mrb, module_SIGNAL, "PRESSING", mrb_fixnum_value(9));

mrb_define_const(mrb, module_SIGNAL, "PRESS_LOST", mrb_fixnum_value(10));

mrb_define_const(mrb, module_SIGNAL, "RELEASED", mrb_fixnum_value(11));

mrb_define_const(mrb, module_SIGNAL, "LONG_PRESS", mrb_fixnum_value(12));

mrb_define_const(mrb, module_SIGNAL, "LONG_PRESS_REP", mrb_fixnum_value(13));

mrb_define_const(mrb, module_SIGNAL, "DRAG_BEGIN", mrb_fixnum_value(14));

mrb_define_const(mrb, module_SIGNAL, "DRAG_END", mrb_fixnum_value(15));

mrb_define_const(mrb, module_SIGNAL, "FOCUS", mrb_fixnum_value(16));

mrb_define_const(mrb, module_SIGNAL, "DEFOCUS", mrb_fixnum_value(17));

mrb_define_const(mrb, module_SIGNAL, "CONTROL", mrb_fixnum_value(18));

mrb_define_const(mrb, module_SIGNAL, "GET_EDITABLE", mrb_fixnum_value(19));

mrb_define_const(mrb, module_ALIGN, "CENTER", mrb_fixnum_value(0));

mrb_define_const(mrb, module_ALIGN, "IN_TOP_LEFT", mrb_fixnum_value(1));

mrb_define_const(mrb, module_ALIGN, "IN_TOP_MID", mrb_fixnum_value(2));

mrb_define_const(mrb, module_ALIGN, "IN_TOP_RIGHT", mrb_fixnum_value(3));

mrb_define_const(mrb, module_ALIGN, "IN_BOTTOM_LEFT", mrb_fixnum_value(4));

mrb_define_const(mrb, module_ALIGN, "IN_BOTTOM_MID", mrb_fixnum_value(5));

mrb_define_const(mrb, module_ALIGN, "IN_BOTTOM_RIGHT", mrb_fixnum_value(6));

mrb_define_const(mrb, module_ALIGN, "IN_LEFT_MID", mrb_fixnum_value(7));

mrb_define_const(mrb, module_ALIGN, "IN_RIGHT_MID", mrb_fixnum_value(8));

mrb_define_const(mrb, module_ALIGN, "OUT_TOP_LEFT", mrb_fixnum_value(9));

mrb_define_const(mrb, module_ALIGN, "OUT_TOP_MID", mrb_fixnum_value(10));

mrb_define_const(mrb, module_ALIGN, "OUT_TOP_RIGHT", mrb_fixnum_value(11));

mrb_define_const(mrb, module_ALIGN, "OUT_BOTTOM_LEFT", mrb_fixnum_value(12));

mrb_define_const(mrb, module_ALIGN, "OUT_BOTTOM_MID", mrb_fixnum_value(13));

mrb_define_const(mrb, module_ALIGN, "OUT_BOTTOM_RIGHT", mrb_fixnum_value(14));

mrb_define_const(mrb, module_ALIGN, "OUT_LEFT_TOP", mrb_fixnum_value(15));

mrb_define_const(mrb, module_ALIGN, "OUT_LEFT_MID", mrb_fixnum_value(16));

mrb_define_const(mrb, module_ALIGN, "OUT_LEFT_BOTTOM", mrb_fixnum_value(17));

mrb_define_const(mrb, module_ALIGN, "OUT_RIGHT_TOP", mrb_fixnum_value(18));

mrb_define_const(mrb, module_ALIGN, "OUT_RIGHT_MID", mrb_fixnum_value(19));

mrb_define_const(mrb, module_ALIGN, "OUT_RIGHT_BOTTOM", mrb_fixnum_value(20));

mrb_define_const(mrb, module_DRAG_DIR, "HOR", mrb_fixnum_value(1));

mrb_define_const(mrb, module_DRAG_DIR, "VER", mrb_fixnum_value(2));

mrb_define_const(mrb, module_DRAG_DIR, "ALL", mrb_fixnum_value(3));

mrb_define_const(mrb, module_PROTECT, "NONE", mrb_fixnum_value(0));

mrb_define_const(mrb, module_PROTECT, "CHILD_CHG", mrb_fixnum_value(1));

mrb_define_const(mrb, module_PROTECT, "PARENT", mrb_fixnum_value(2));

mrb_define_const(mrb, module_PROTECT, "POS", mrb_fixnum_value(4));

mrb_define_const(mrb, module_PROTECT, "FOLLOW", mrb_fixnum_value(8));

mrb_define_const(mrb, module_PROTECT, "PRESS_LOST", mrb_fixnum_value(16));

mrb_define_const(mrb, module_PROTECT, "CLICK_FOCUS", mrb_fixnum_value(32));

mrb_define_const(mrb, module_LAYOUT, "OFF", mrb_fixnum_value(0));

mrb_define_const(mrb, module_LAYOUT, "CENTER", mrb_fixnum_value(1));

mrb_define_const(mrb, module_LAYOUT, "COL_L", mrb_fixnum_value(2));

mrb_define_const(mrb, module_LAYOUT, "COL_M", mrb_fixnum_value(3));

mrb_define_const(mrb, module_LAYOUT, "COL_R", mrb_fixnum_value(4));

mrb_define_const(mrb, module_LAYOUT, "ROW_T", mrb_fixnum_value(5));

mrb_define_const(mrb, module_LAYOUT, "ROW_M", mrb_fixnum_value(6));

mrb_define_const(mrb, module_LAYOUT, "ROW_B", mrb_fixnum_value(7));

mrb_define_const(mrb, module_LAYOUT, "PRETTY", mrb_fixnum_value(8));

mrb_define_const(mrb, module_LAYOUT, "GRID", mrb_fixnum_value(9));

mrb_define_const(mrb, module_LAYOUT, "NUM", mrb_fixnum_value(10));

mrb_define_const(mrb, module_FIT, "NONE", mrb_fixnum_value(0));

mrb_define_const(mrb, module_FIT, "TIGHT", mrb_fixnum_value(1));

mrb_define_const(mrb, module_FIT, "FLOOD", mrb_fixnum_value(2));

mrb_define_const(mrb, module_FIT, "FILL", mrb_fixnum_value(3));

mrb_define_const(mrb, module_FIT, "NUM", mrb_fixnum_value(4));

mrb_define_const(mrb, module_CONT_STYLE, "MAIN", mrb_fixnum_value(0));

mrb_define_const(mrb, module_KEY, "UP", mrb_fixnum_value(17));

mrb_define_const(mrb, module_KEY, "DOWN", mrb_fixnum_value(18));

mrb_define_const(mrb, module_KEY, "RIGHT", mrb_fixnum_value(19));

mrb_define_const(mrb, module_KEY, "LEFT", mrb_fixnum_value(20));

mrb_define_const(mrb, module_KEY, "ESC", mrb_fixnum_value(27));

mrb_define_const(mrb, module_KEY, "DEL", mrb_fixnum_value(127));

mrb_define_const(mrb, module_KEY, "BACKSPACE", mrb_fixnum_value(8));

mrb_define_const(mrb, module_KEY, "ENTER", mrb_fixnum_value(10));

mrb_define_const(mrb, module_KEY, "NEXT", mrb_fixnum_value(9));

mrb_define_const(mrb, module_KEY, "PREV", mrb_fixnum_value(11));

mrb_define_const(mrb, module_KEY, "HOME", mrb_fixnum_value(2));

mrb_define_const(mrb, module_KEY, "END", mrb_fixnum_value(3));

mrb_define_const(mrb, module_GROUP_REFOCUS_POLICY, "NEXT", mrb_fixnum_value(0));

mrb_define_const(mrb, module_GROUP_REFOCUS_POLICY, "PREV", mrb_fixnum_value(1));

mrb_define_const(mrb, module_BTN_STATE, "REL", mrb_fixnum_value(0));

mrb_define_const(mrb, module_BTN_STATE, "PR", mrb_fixnum_value(1));

mrb_define_const(mrb, module_BTN_STATE, "TGL_REL", mrb_fixnum_value(2));

mrb_define_const(mrb, module_BTN_STATE, "TGL_PR", mrb_fixnum_value(3));

mrb_define_const(mrb, module_BTN_STATE, "INA", mrb_fixnum_value(4));

mrb_define_const(mrb, module_BTN_STATE, "NUM", mrb_fixnum_value(5));

mrb_define_const(mrb, module_BTN_STYLE, "REL", mrb_fixnum_value(0));

mrb_define_const(mrb, module_BTN_STYLE, "PR", mrb_fixnum_value(1));

mrb_define_const(mrb, module_BTN_STYLE, "TGL_REL", mrb_fixnum_value(2));

mrb_define_const(mrb, module_BTN_STYLE, "TGL_PR", mrb_fixnum_value(3));

mrb_define_const(mrb, module_BTN_STYLE, "INA", mrb_fixnum_value(4));

mrb_define_const(mrb, module_TXT_FLAG, "NONE", mrb_fixnum_value(0));

mrb_define_const(mrb, module_TXT_FLAG, "RECOLOR", mrb_fixnum_value(1));

mrb_define_const(mrb, module_TXT_FLAG, "EXPAND", mrb_fixnum_value(2));

mrb_define_const(mrb, module_TXT_FLAG, "CENTER", mrb_fixnum_value(4));

mrb_define_const(mrb, module_TXT_FLAG, "RIGHT", mrb_fixnum_value(8));

mrb_define_const(mrb, module_TXT_CMD_STATE, "WAIT", mrb_fixnum_value(0));

mrb_define_const(mrb, module_TXT_CMD_STATE, "PAR", mrb_fixnum_value(1));

mrb_define_const(mrb, module_TXT_CMD_STATE, "IN", mrb_fixnum_value(2));

mrb_define_const(mrb, module_FS_RES, "OK", mrb_fixnum_value(0));

mrb_define_const(mrb, module_FS_RES, "HW_ERR", mrb_fixnum_value(1));

mrb_define_const(mrb, module_FS_RES, "FS_ERR", mrb_fixnum_value(2));

mrb_define_const(mrb, module_FS_RES, "NOT_EX", mrb_fixnum_value(3));

mrb_define_const(mrb, module_FS_RES, "FULL", mrb_fixnum_value(4));

mrb_define_const(mrb, module_FS_RES, "LOCKED", mrb_fixnum_value(5));

mrb_define_const(mrb, module_FS_RES, "DENIED", mrb_fixnum_value(6));

mrb_define_const(mrb, module_FS_RES, "BUSY", mrb_fixnum_value(7));

mrb_define_const(mrb, module_FS_RES, "TOUT", mrb_fixnum_value(8));

mrb_define_const(mrb, module_FS_RES, "NOT_IMP", mrb_fixnum_value(9));

mrb_define_const(mrb, module_FS_RES, "OUT_OF_MEM", mrb_fixnum_value(10));

mrb_define_const(mrb, module_FS_RES, "INV_PARAM", mrb_fixnum_value(11));

mrb_define_const(mrb, module_FS_RES, "UNKNOWN", mrb_fixnum_value(12));

mrb_define_const(mrb, module_FS_MODE, "WR", mrb_fixnum_value(1));

mrb_define_const(mrb, module_FS_MODE, "RD", mrb_fixnum_value(2));

mrb_define_const(mrb, module_IMG_SRC, "VARIABLE", mrb_fixnum_value(0));

mrb_define_const(mrb, module_IMG_SRC, "FILE", mrb_fixnum_value(1));

mrb_define_const(mrb, module_IMG_SRC, "SYMBOL", mrb_fixnum_value(2));

mrb_define_const(mrb, module_IMG_SRC, "UNKNOWN", mrb_fixnum_value(3));

mrb_define_const(mrb, module_IMG_CF, "UNKNOWN", mrb_fixnum_value(0));

mrb_define_const(mrb, module_IMG_CF, "RAW", mrb_fixnum_value(1));

mrb_define_const(mrb, module_IMG_CF, "RAW_ALPHA", mrb_fixnum_value(2));

mrb_define_const(mrb, module_IMG_CF, "RAW_CHROMA_KEYED", mrb_fixnum_value(3));

mrb_define_const(mrb, module_IMG_CF, "TRUE_COLOR", mrb_fixnum_value(4));

mrb_define_const(mrb, module_IMG_CF, "TRUE_COLOR_ALPHA", mrb_fixnum_value(5));

mrb_define_const(mrb, module_IMG_CF, "TRUE_COLOR_CHROMA_KEYED", mrb_fixnum_value(6));

mrb_define_const(mrb, module_IMG_CF, "INDEXED_1BIT", mrb_fixnum_value(7));

mrb_define_const(mrb, module_IMG_CF, "INDEXED_2BIT", mrb_fixnum_value(8));

mrb_define_const(mrb, module_IMG_CF, "INDEXED_4BIT", mrb_fixnum_value(9));

mrb_define_const(mrb, module_IMG_CF, "INDEXED_8BIT", mrb_fixnum_value(10));

mrb_define_const(mrb, module_IMG_CF, "ALPHA_1BIT", mrb_fixnum_value(11));

mrb_define_const(mrb, module_IMG_CF, "ALPHA_2BIT", mrb_fixnum_value(12));

mrb_define_const(mrb, module_IMG_CF, "ALPHA_4BIT", mrb_fixnum_value(13));

mrb_define_const(mrb, module_IMG_CF, "ALPHA_8BIT", mrb_fixnum_value(14));

mrb_define_const(mrb, module_IMG_CF, "RESERVED_15", mrb_fixnum_value(15));

mrb_define_const(mrb, module_IMG_CF, "RESERVED_16", mrb_fixnum_value(16));

mrb_define_const(mrb, module_IMG_CF, "RESERVED_17", mrb_fixnum_value(17));

mrb_define_const(mrb, module_IMG_CF, "RESERVED_18", mrb_fixnum_value(18));

mrb_define_const(mrb, module_IMG_CF, "RESERVED_19", mrb_fixnum_value(19));

mrb_define_const(mrb, module_IMG_CF, "RESERVED_20", mrb_fixnum_value(20));

mrb_define_const(mrb, module_IMG_CF, "RESERVED_21", mrb_fixnum_value(21));

mrb_define_const(mrb, module_IMG_CF, "RESERVED_22", mrb_fixnum_value(22));

mrb_define_const(mrb, module_IMG_CF, "RESERVED_23", mrb_fixnum_value(23));

mrb_define_const(mrb, module_IMG_CF, "USER_ENCODED_0", mrb_fixnum_value(24));

mrb_define_const(mrb, module_IMG_CF, "USER_ENCODED_1", mrb_fixnum_value(25));

mrb_define_const(mrb, module_IMG_CF, "USER_ENCODED_2", mrb_fixnum_value(26));

mrb_define_const(mrb, module_IMG_CF, "USER_ENCODED_3", mrb_fixnum_value(27));

mrb_define_const(mrb, module_IMG_CF, "USER_ENCODED_4", mrb_fixnum_value(28));

mrb_define_const(mrb, module_IMG_CF, "USER_ENCODED_5", mrb_fixnum_value(29));

mrb_define_const(mrb, module_IMG_CF, "USER_ENCODED_6", mrb_fixnum_value(30));

mrb_define_const(mrb, module_IMG_CF, "USER_ENCODED_7", mrb_fixnum_value(31));

mrb_define_const(mrb, module_LABEL_LONG, "EXPAND", mrb_fixnum_value(0));

mrb_define_const(mrb, module_LABEL_LONG, "BREAK", mrb_fixnum_value(1));

mrb_define_const(mrb, module_LABEL_LONG, "DOT", mrb_fixnum_value(2));

mrb_define_const(mrb, module_LABEL_LONG, "SROLL", mrb_fixnum_value(3));

mrb_define_const(mrb, module_LABEL_LONG, "SROLL_CIRC", mrb_fixnum_value(4));

mrb_define_const(mrb, module_LABEL_LONG, "CROP", mrb_fixnum_value(5));

mrb_define_const(mrb, module_LABEL_ALIGN, "LEFT", mrb_fixnum_value(0));

mrb_define_const(mrb, module_LABEL_ALIGN, "CENTER", mrb_fixnum_value(1));

mrb_define_const(mrb, module_LABEL_ALIGN, "RIGHT", mrb_fixnum_value(2));

mrb_define_const(mrb, module_LABEL_ALIGN, "AUTO", mrb_fixnum_value(3));

mrb_define_const(mrb, module_LABEL_STYLE, "MAIN", mrb_fixnum_value(0));

mrb_define_const(mrb, module_SB_MODE, "OFF", mrb_fixnum_value(0));

mrb_define_const(mrb, module_SB_MODE, "ON", mrb_fixnum_value(1));

mrb_define_const(mrb, module_SB_MODE, "DRAG", mrb_fixnum_value(2));

mrb_define_const(mrb, module_SB_MODE, "AUTO", mrb_fixnum_value(3));

mrb_define_const(mrb, module_SB_MODE, "HIDE", mrb_fixnum_value(4));

mrb_define_const(mrb, module_SB_MODE, "UNHIDE", mrb_fixnum_value(5));

mrb_define_const(mrb, module_PAGE_EDGE, "LEFT", mrb_fixnum_value(1));

mrb_define_const(mrb, module_PAGE_EDGE, "TOP", mrb_fixnum_value(2));

mrb_define_const(mrb, module_PAGE_EDGE, "RIGHT", mrb_fixnum_value(4));

mrb_define_const(mrb, module_PAGE_EDGE, "BOTTOM", mrb_fixnum_value(8));

mrb_define_const(mrb, module_PAGE_STYLE, "BG", mrb_fixnum_value(0));

mrb_define_const(mrb, module_PAGE_STYLE, "SCRL", mrb_fixnum_value(1));

mrb_define_const(mrb, module_PAGE_STYLE, "SB", mrb_fixnum_value(2));

mrb_define_const(mrb, module_PAGE_STYLE, "EDGE_FLASH", mrb_fixnum_value(3));

mrb_define_const(mrb, module_IMG_STYLE, "MAIN", mrb_fixnum_value(0));

mrb_define_const(mrb, module_WIN_STYLE, "BG", mrb_fixnum_value(0));

mrb_define_const(mrb, module_WIN_STYLE, "CONTENT", mrb_fixnum_value(1));

mrb_define_const(mrb, module_WIN_STYLE, "SB", mrb_fixnum_value(2));

mrb_define_const(mrb, module_WIN_STYLE, "HEADER", mrb_fixnum_value(3));

mrb_define_const(mrb, module_WIN_STYLE, "BTN_REL", mrb_fixnum_value(4));

mrb_define_const(mrb, module_WIN_STYLE, "BTN_PR", mrb_fixnum_value(5));

mrb_define_const(mrb, module_TABVIEW_BTNS_POS, "TOP", mrb_fixnum_value(0));

mrb_define_const(mrb, module_TABVIEW_BTNS_POS, "BOTTOM", mrb_fixnum_value(1));

mrb_define_const(mrb, module_TABVIEW_BTNS_POS, "LEFT", mrb_fixnum_value(2));

mrb_define_const(mrb, module_TABVIEW_BTNS_POS, "RIGHT", mrb_fixnum_value(3));

mrb_define_const(mrb, module_TABVIEW_STYLE, "BG", mrb_fixnum_value(0));

mrb_define_const(mrb, module_TABVIEW_STYLE, "INDIC", mrb_fixnum_value(1));

mrb_define_const(mrb, module_TABVIEW_STYLE, "BTN_BG", mrb_fixnum_value(2));

mrb_define_const(mrb, module_TABVIEW_STYLE, "BTN_REL", mrb_fixnum_value(3));

mrb_define_const(mrb, module_TABVIEW_STYLE, "BTN_PR", mrb_fixnum_value(4));

mrb_define_const(mrb, module_TABVIEW_STYLE, "BTN_TGL_REL", mrb_fixnum_value(5));

mrb_define_const(mrb, module_TABVIEW_STYLE, "BTN_TGL_PR", mrb_fixnum_value(6));

/*
 * Registering module: LVTask
 */
struct RClass *module_LVTask = mrb_define_module_under(
	mrb,
	(mrb_module_get_under(mrb, (mrb_module_get_under(mrb, (mrb->object_class), "LVGL")), "Hacks")),
	"LVTask"
);

mrb_define_class_method(
	mrb,
	module_LVTask,
	"create_task",
	mrb_mruby_lvgui_module_LVGL_module_Hacks_module_LVTask_create_task,
	MRB_ARGS_REQ(3)
);

mrb_define_class_method(
	mrb,
	module_LVTask,
	"handle_tasks",
	mrb_mruby_lvgui_module_LVGL_module_Hacks_module_LVTask_handle_tasks,
	MRB_ARGS_NONE()
);

/*
 * Registering class: LVTabpage
 */
struct RClass *class_LVTabpage = mrb_define_class_under(
	mrb,
	(mrb_class_get_under(mrb, (mrb_module_get_under(mrb, (mrb->object_class), "LVGL")), "LVTabview")),
	"LVTabpage",
	(mrb_class_get_under(mrb, (mrb_module_get_under(mrb, (mrb->object_class), "LVGL")), "LVContainer"))
);

mrb_define_method(
	mrb,
	class_LVTabpage,
	"initialize",
	mrb_mruby_lvgui_module_LVGL_class_LVTabview_class_LVTabpage_initialize,
	MRB_ARGS_NONE()
);
}
void mrb_mruby_lvgui_gem_final(mrb_state * mrb) {
/*
 * Intentionally left blank.
 * The application closing is our clean-up for now.
 */
}
