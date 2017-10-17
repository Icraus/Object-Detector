#-------------------------------------------------
#
# Project created by QtCreator 2017-10-17T00:30:31
#
#-------------------------------------------------

QT       -= gui

TARGET = ImageProcessorsStatic
TEMPLATE = lib
CONFIG += staticlib


DEFINES += QT_DEPRECATED_WARNINGS
SOURCES += \
    ImageProcessor/abstractimageprocessor.cpp \
    ImageProcessor/detectcircle.cpp \
    ImageProcessor/detectcolor.cpp \
    ImageProcessor/dilate.cpp \
    ImageProcessor/objectdetection.cpp

HEADERS += \
    ImageProcessor/abstractimageprocessor.h \
    ImageProcessor/detectcircle.h \
    ImageProcessor/detectcolor.h \
    ImageProcessor/dilate.h \
    ImageProcessor/objectdetection.h \
    headers.h
CONFIG(!staticlib){
    HEADERS += imageprocessors_global.h
    DEFINES += IMAGEPROCESSORS_LIBRARY
}

unix {
    target.path = /usr/lib
    INSTALLS += target
}

include(../../OPENCVLinking.pro)
