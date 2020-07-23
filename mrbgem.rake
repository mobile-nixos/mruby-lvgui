MRuby::Gem::Specification.new("mruby-lvgui") do |spec|
  spec.license = "MIT"
  spec.authors = "Samuel Dionne-Riel"
  spec.version = "0.2.0"

  spec.cc.include_paths << `pkg-config --cflags lvgui`.chomp
  spec.linker.flags_after_libraries << `pkg-config --libs lvgui`.chomp

  spec.add_dependency('mruby-fiddle')

  spec.rbfiles = [
    "#{dir}/mrblib/fiddlier.rb",
    "#{dir}/mrblib/lvgl.rb",
    "#{dir}/mrblib/lvgl/ffi.rb",
    "#{dir}/mrblib/generated_ffi.rb",
    "#{dir}/mrblib/lvgl/hacks.rb",
    "#{dir}/mrblib/lvgl/introspection.rb",
    "#{dir}/mrblib/lvgl/lvgl.rb",
    "#{dir}/mrblib/lvgui.rb",
  ] + Dir.glob("#{dir}/mrblib/lvgui/**/*.rb").sort
end
