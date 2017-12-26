QT += qml quick

CONFIG += c++11

SOURCES += main.cpp

RESOURCES += qml.qrc

QML_IMPORT_PATH =

QML_DESIGNER_IMPORT_PATH =

DEFINES += QT_DEPRECATED_WARNINGS
DEST_PREFIX = $$[QMAKE_SPEC]
equals(DEST_PREFIX, "win32-g++"){
DEST_PREFIX = "mingw32"
}else{

DEST_PREFIX = $$[QMAKE_SPEC]\\$$QMAKE_TARGET.arch

}
DESTDIR += $$_PRO_FILE_PWD_\..\..\bin\\$$DEST_PREFIX

qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
