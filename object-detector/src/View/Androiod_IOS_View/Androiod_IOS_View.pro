QT += qml quick

CONFIG += c++11

SOURCES += main.cpp

RESOURCES += qml.qrc

QML_IMPORT_PATH =

QML_DESIGNER_IMPORT_PATH =

DEFINES += QT_DEPRECATED_WARNINGS

CONFIG(debug , debug | release){
include($$_PRO_FILE_PWD_/../../COMMON_VARS.pri)
}
#qnx: target.path = /tmp/$${TARGET}/bin
#else: unix:!android: target.path = /opt/$${TARGET}/bin
#!isEmpty(target.path): INSTALLS += target
