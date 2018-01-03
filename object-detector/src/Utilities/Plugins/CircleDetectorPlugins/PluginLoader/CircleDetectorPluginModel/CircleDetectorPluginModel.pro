#-------------------------------------------------
#
# Project created by QtCreator 2018-01-03T02:49:42
#
#-------------------------------------------------

QT       -= gui

TARGET = CircleDetectorPluginModel
TEMPLATE = lib
CONFIG += c++14
CONFIG(c++14){
    DEFINES += USE_CPP_STD_14
}
!CONFIG(staticlib){
    DEFINES += CIRCLE_MODEL_USE_SHARED_LIB
    DEFINES += CIRCLEDETECTORMODEL_LIBRARY
}



DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
        circledetectorpluginmodel.cpp \
    impl/circledetectorpluginmodelimpl.cpp

HEADERS += \
        circledetectorpluginmodel.h \
    impl/circledetectorpluginmodelimpl.h \
    circledetectorpluginmodel_global.h

include(../../../../../COMMON_VARS.pri)
include(../../../../../OPENCVLinking.pro)
INCLUDEPATH += $$INCLUDE_PATH/ImageProcessorsPlugin


