#-------------------------------------------------
#
# Project created by QtCreator 2018-01-03T13:30:46
#
#-------------------------------------------------

QT       += widgets

TARGET = CircleDetectorPluginLoaderView
TEMPLATE = lib
CONFIG += c++14
CONFIG(c++14){
    DEFINES += USE_CPP_STD_14
}
CONFIG(static){
    DEFINES += CIRCLE_PLUGIN_LOADER_USE_STATIC_LIB

}
!CONFIG(staticlib){
    DEFINES += CIRCLEDETECTORVIEW_LIBRARY

}
SOURCES += \
    impl/circledetecorpluginloaderviewimpl.cpp  \
    circledetecorpluginloaderview.cpp

HEADERS += \
    circledetectorpluginloaderview_global.h  \
    impl/circledetecorpluginloaderviewimpl.h  \
    circledetecorpluginloaderview.h

FORMS += \
    circledetecorpluginloaderview.ui

include(../../../../../COMMON_VARS.pri)
include(../../../../../OPENCVLinking.pro)
INCLUDEPATH += $$INCLUDE_PATH/ImageProcessorsPlugin
INCLUDEPATH += $$INCLUDE_PATH/CircleDetectorPluginModel

LIBS += -L$$LIBS_PATH   \
    -lCircleDetectorPluginModel
