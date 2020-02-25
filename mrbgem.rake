MRuby::Gem::Specification.new("mruby-lvgui") do |spec|
  spec.license = "MIT"
  spec.authors = "Samuel Dionne-Riel"
  spec.version = "0.0.1"

  spec.objs = Dir.glob("#{dir}/src/**/*.{c,cpp,m,asm,S}").map { |f| objfile(f.relative_path_from(dir).pathmap("#{build_dir}/%X")) }
  spec.cc.include_paths << `pkg-config --cflags lvgui`.chomp
  spec.linker.flags_after_libraries << `pkg-config --libs lvgui`.chomp
end
