#ifndef CERN_CORE_EXPORTS_H
#define CERN_CORE_EXPORTS_H 1

#if defined _WIN32 || defined __CYGWIN__
# define CERN_CORE_HELPER_DLL_IMPORT __declspec(dllimport)
# define CERN_CORE_HELPER_DLL_EXPORT __declspec(dllexport)
# define CERN_CORE_HELPER_DLL_LOCAL 
#else
# if __GNUC__ >= 4
# define CERN_CORE_HELPER_DLL_IMPORT __attribute__ ((visibility ("default")))
#   define CERN_CORE_HELPER_DLL_EXPORT __attribute__ ((visibility ("default")))
#   define CERN_CORE_HELPER_DLL_LOCAL  __attribute__ ((visibility ("hidden")))
# else
#   define CERN_CORE_HELPER_DLL_IMPORT 
#   define CERN_CORE_HELPER_DLL_EXPORT 
#   define CERN_CORE_HELPER_DLL_LOCAL 
# endif
#endif

#ifdef CERN_CORE_DLL
# ifdef CERN_CORE_DLL_EXPORTS
#   define CERN_CORE_API CERN_CORE_HELPER_DLL_EXPORT
# else
#   define CERN_CORE_API CERN_CORE_HELPER_DLL_IMPORT
# endif
#   define CERN_CORE_LOCAL CERN_CORE_HELPER_DLL_LOCAL
# else
#   define CERN_CORE_API
#   define CERN_CORE_LOCAL
#endif

#endif /* CERN_CORE_EXPORTS_H */
