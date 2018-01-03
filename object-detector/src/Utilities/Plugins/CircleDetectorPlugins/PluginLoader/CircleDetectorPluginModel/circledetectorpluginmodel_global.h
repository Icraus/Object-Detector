#ifndef CIRCLEDETECTORPLUGINMODEL_GLOBAL_H
#define CIRCLEDETECTORPLUGINMODEL_GLOBAL_H

#ifdef CIRCLE_MODEL_USE_SHARED_LIB
#   include <QtCore/qglobal.h>
#   define CIRCLE_MODEL_LIB CIRCLEDETECTORMODELSHARED_EXPORT
#   if defined(CIRCLEDETECTORMODEL_LIBRARY)
#       define CIRCLEDETECTORMODELSHARED_EXPORT Q_DECL_EXPORT
#   else
#       define CIRCLEDETECTORMODELSHARED_EXPORT Q_DECL_IMPORT
#   endif
#else
#   define CIRCLE_MODEL_LIB
#endif

#define CIRCLE_MODEL_BEGIN_NAMESPACE
#define CIRCLE_MODEL_END_NAMESPACE

#ifdef USE_CPP_STD_14
#include <cstdio>
#   define INIT_UNIQUE_PTR(TYPE, ...) std::make_unique<TYPE>(__VA_ARGS__)
#else
#   define INIT_UNIQUE_PTR(TYPE, ...) std::unique_ptr<TYPE>(new TYPE(__VA_ARGS__))
#endif
#endif // CIRCLEDETECTORPLUGINMODEL_GLOBAL_H
