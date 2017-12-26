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
!CONFIG(static){
    DEFINES += IMAGEPROCESSORS_LIBRARY
    HEADERS += imageprocessors_global.h
}
unix {
    target.path = /usr/lib
    INSTALLS += target
}
include(../../INSTALL_ALL.pri)
include(../../OPENCVLinking.pro)
