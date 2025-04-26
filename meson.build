project('cern_core', 'c',
  version: '0.1',
  default_options : ['warning_level=3', 'c_std=c23'],
  subproject_dir: 'vendor')

subproject('glib')

g_object_dependency = dependency('gobject-2.0', required: true)

cern_core_dependencies = [
  g_object_dependency
]

cern_core_sources = [
  'src/cloneable.c',
  'src/windows/handle.c'
]

cern_core_include_dirs = include_directories('include/')

libcern_core = library('cern_core',
  cern_core_sources,
  dependencies: cern_core_dependencies,
  include_directories: 'include/',
  install: true, c_args: ['-DCERN_CORE_DLL=1', '-DCERN_CORE_DLL_EXPORTS=1'])

cern_core_dep = declare_dependency(include_directories: cern_core_include_dirs,
  link_with: libcern_core,
  dependencies: cern_core_dependencies)

if not meson.is_subproject()
  pkgc = import('pkgconfig')

  pkgc.generate(name: 'cern_core',
    version: meson.project_version(),
    description: 'Core library for project cern.')
endif
