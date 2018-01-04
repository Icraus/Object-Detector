#ifndef IMAGEPROCESSORS_GLOBAL_H
#define IMAGEPROCESSORS_GLOBAL_H

#ifndef USE_STATIC_LIB
#   include <QtCore/qglobal.h>
#   define IMG_PROC_LIB IMAGEPROCESSORSSHARED_EXPORT
#   if defined(IMAGEPROCESSORS_LIBRARY)
#       define IMAGEPROCESSORSSHARED_EXPORT Q_DECL_EXPORT
#   else
#       define IMAGEPROCESSORSSHARED_EXPORT Q_DECL_IMPORT
#   endif
#else
#   define IMG_PROC_LIB
#endif




#ifdef USE_CPP_STD_14
#include <cstdio>
#   define INIT_UNIQUE_PTR(TYPE, ...) std::make_unique<TYPE>(__VA_ARGS__)
#else
#   define INIT_UNIQUE_PTR(TYPE, ...) std::unique_ptr<TYPE>(new TYPE(__VA_ARGS__))
#endif
#endif // IMAGEPROCESSORS_GLOBAL_H
