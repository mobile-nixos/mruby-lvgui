#!/usr/bin/env ruby

# Fiddle doesn't support nested structs.
# As struct padding and packing is horrible, and terrible, we instead rely on
# this generator to generate C functions that will be used to interact with
# the struct.

$h = []
$c = []
$ffi = []

$h << <<~EOF
#ifndef GENERATED_FFI_H
#define GENERATED_FFI_H
EOF

$c << <<~EOF
#include "lvgui_struct_accessors.h"
#include <stdlib.h>
EOF

# Flattens the given nested struct
def flatten_struct(fields, prefix: nil)
  fields.map do |field|
    type = field.first
    name = [prefix, field.last].compact.join("_").gsub(".", "_")

    if type.is_a? Array then
      flatten_struct(type, prefix: [prefix, field.last].compact.join("."))
    else
      [[name.to_sym, {
        type: type,
        accessor: [prefix, field.last].compact.join(".")
      }]]
    end
  end.flatten(1)
end

# This binding will *not* create the typealias (or typedef) for you.
# You probably want to map it to `void *`.
# This only handles creating the bindings.
def bindings(struct_name, fields, type: nil)
  struct_type = type
  struct_type ||= "#{struct_name}_t".to_sym

  fields = flatten_struct(fields)

  # Allocation
  $h << <<~EOF
  #{struct_type} * lvgui_allocate_#{struct_name}();
  EOF
  $c << <<~EOF
  #{struct_type} * lvgui_allocate_#{struct_name}() {
    return malloc(sizeof(#{struct_type}));
  }
  EOF
  $ffi << <<~EOF
  extern "#{struct_type} * lvgui_allocate_#{struct_name}()"
  EOF

  # Accesors
  fields.each do |pair|
    field_name, details = pair
    type = details[:type]
    accessor = details[:accessor]
    
    # This is using a double-underscore between struct_name and field_name to
    # reduce the risks of types having clashing names.
    $h << <<~EOF
    #{type} lvgui_get_#{struct_name}__#{field_name}(#{struct_type} * s) __attribute__((used));
    void lvgui_set_#{struct_name}__#{field_name}(#{struct_type} * s, #{type} value) __attribute__((used));
    EOF
    $c << <<~EOF
    #{type} lvgui_get_#{struct_name}__#{field_name}(#{struct_type} * s) {
      return s->#{accessor};
    }
    void lvgui_set_#{struct_name}__#{field_name}(#{struct_type} * s, #{type} value) {
      s->#{accessor} = value;
    }
    EOF
    $ffi << <<~EOF
    extern "#{type} lvgui_get_#{struct_name}__#{field_name}(#{struct_type} *)"
    extern "void lvgui_set_#{struct_name}__#{field_name}(#{struct_type} *, #{type})"
    EOF
  end
end

$h << <<~EOF
#include <lvgl/lvgl.h>
#include <lv_drv_conf.h>
EOF

$ffi << <<~EOF
module LVGL::FFI
EOF

# The struct we want to handle, in pairs [:type, :name].
# Where type can be an array, implying a struct.
bindings(:lv_style, [
  [:uint8_t, :glass],
  [
    [
      [:lv_color_t, :main_color],
      [:lv_color_t, :grad_color],
      [:lv_coord_t, :radius],
      [:lv_opa_t, :opa],
      [
        [
          [:lv_color_t, :color],
          [:lv_coord_t, :width],
          [:lv_border_part_t, :part],
          [:lv_opa_t, :opa],
        ],
        :border
      ],
      [
        [
          [:lv_color_t, :color],
          [:lv_coord_t, :width],
          [:lv_shadow_type_t, :type],
        ],
        :shadow
      ],
      [
        [
          [:lv_coord_t, :top],
          [:lv_coord_t, :bottom],
          [:lv_coord_t, :left],
          [:lv_coord_t, :right],
          [:lv_coord_t, :inner],
        ],
        :padding
      ],
    ],
    :body
  ],
  [
    [
      [:lv_color_t, :color],
      [:lv_color_t, :sel_color],
      ["lv_font_t *", :font],
      [:lv_coord_t, :letter_space],
      [:lv_coord_t, :line_space],
      [:lv_opa_t, :opa],
    ],
    :text
  ],
  [
    [
      [:lv_color_t, :color],
      [:lv_opa_t, :intense],
      [:lv_opa_t, :opa],
    ],
    :image
  ],
  [
    [
      [:lv_color_t, :color],
      [:lv_coord_t, :width],
      [:lv_opa_t, :opa],
      [:uint8_t, :rounded],
    ],
    :line
  ],
])

# We're re-using the allocator pattern, without making actual struct accessors
# as LVGL already assumes it'll be handled through accesor functions.
bindings(:lv_anim, [])

$ffi << <<~EOF
end # module LVGL::FFI
EOF

$h << <<~EOF
#endif
EOF

# We don't need to interact with the debug sentinel here.
# If we did, we could add proper ifdefs to $c and $h.
#  [
#    [:uint32_t, :debug_sentinel]
#  ]

File.write(File.join("lvgui_struct_accessors.h"), $h.join("\n"))
File.write(File.join("lvgui_struct_accessors.c"), $c.join("\n"))
File.write(File.join("mrblib/generated_ffi.rb"), $ffi.join("\n"))

puts <<~EOF
The generated C source will need to be updated in the lvgui project.
EOF
