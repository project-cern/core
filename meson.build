project('cern core', 'c',
  version: '0.1',
  default_options : ['warning_level=3', 'c_std=c23'],
  subproject_dir: 'vendor')

glib_subproject = subproject('glib')

g_object_dependency = dependency('gobject-2.0', required: true)

cern_core_dependencies = [
  g_object_dependency
]

cern_core_sources = [
  'src/cloneable.c',
  'src/windows/handle.c'
]

cern_core_dep = library('cern_core',
  cern_core_sources,
  dependencies: cern_core_dependencies,
  include_directories: 'include/',
  install: true)

