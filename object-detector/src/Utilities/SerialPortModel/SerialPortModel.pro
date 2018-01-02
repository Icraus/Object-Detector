#-------------------------------------------------
#
# Project created by QtCreator 2018-01-01T23:55:27
#
#-------------------------------------------------

QT       += gui
QT      += serialport
TARGET = SerialPortModel
TEMPLATE = lib
CONFIG += static
!CONFIG(static){
    DEFINES += SERIALPORTMODEL_LIBRARY
    DEFINES += SERIAL_MODEL_USE_SHARED_LIB
}
# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    serialportmodel.cpp

HEADERS += \
        serialportmodel_global.h \ 
    serialportmodel.h

include(../../COMMON_VARS.pri)

RESOURCES += \
    resourses.qrc
