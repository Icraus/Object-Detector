#-------------------------------------------------
#
# Project created by QtCreator 2017-10-17T00:30:31
#
#-------------------------------------------------

QT       -= gui
TARGET = ImageProcessors
TEMPLATE = lib
CONFIG += c++14

DEFINES += QT_DEPRECATED_WARNINGS
SOURCES += \
    ImageProcessor/abstractimageprocessor.cpp \
    ImageProcessor/detectcircle.cpp \
    ImageProcessor/detectcolor.cpp \
    ImageProcessor/dilate.cpp \
    ImageProcessor/objectdetection.cpp \
    objectdetectorbuilder.cpp \
    ImageProcessor/impl/abstractimageprocessorimpl.cpp \
    ImageProcessor/impl/detectcircleimpl.cpp \
    ImageProcessor/impl/detectcolorimpl.cpp \
    ImageProcessor/impl/dilateimpl.cpp \
    ImageProcessor/impl/objectdetectionimpl.cpp

HEADERS += \
    ImageProcessor/abstractimageprocessor.h \
    ImageProcessor/detectcircle.h \
    ImageProcessor/detectcolor.h \
    ImageProcessor/dilate.h \
    ImageProcessor/objectdetection.h \
    headers.h \
    objectdetectorbuilder.h \
    ImageProcessor/impl/abstractimageprocessorimpl.h \
    ImageProcessor/impl/detectcircleimpl.h \
    ImageProcessor/impl/detectcolorimpl.h \
    ImageProcessor/impl/dilateimpl.h \
    ImageProcessor/impl/objectdetectionimpl.h


HEADERS += imageprocessors_global.h
CONFIG(c++14){
    DEFINES += USE_CPP_STD_14
}
CONFIG(staticlib){
    DEFINES += USE_STATIC_LIB
}
!CONFIG(static){
    DEFINES += IMAGEPROCESSORS_LIBRARY
}
#unix {
#    target.path = /usr/lib
#    INSTALLS += target
#}
include(../../COMMON_VARS.pri)
include(../../OPENCVLinking.pro)
INCLUDEPATH += $$INCLUDE_PATH/ImageProcessorsPlugin

