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
        imageprocessorsstatic.cpp \
    ImageProcessor/abstractimageprocessor.cpp \
    ImageProcessor/detectcircle.cpp \
    ImageProcessor/detectcolor.cpp \
    ImageProcessor/dilate.cpp \
    ImageProcessor/objectdetection.cpp

HEADERS += \
        imageprocessorsstatic.h \
    ImageProcessor/abstractimageprocessor.h \
    ImageProcessor/detectcircle.h \
    ImageProcessor/detectcolor.h \
    ImageProcessor/dilate.h \
    ImageProcessor/objectdetection.h \
    headers.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}

include(../../OPENCVLinking.pro)
