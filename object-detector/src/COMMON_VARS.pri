INSTALL_HEADER = $$HEADERS
INSTALL_PREFIX = $$TARGET

INCLUDE_PATH = "$$PWD/../include"

DEST_PREFIX = $$[QMAKE_SPEC]
equals(DEST_PREFIX, "win32-g++"){
    DEST_PREFIX = "mingw32"
}

CONFIG(debug, debug | release){
    LIBS_PATH = "$$PWD/../libs/$$DEST_PREFIX"
    DLLDESTDIR_PATH = "$$PWD/../bin/$$DEST_PREFIX"
    BIN_PATH = $$DLLDESTDIR_PATH
}

CONFIG(release, debug | release){
    LIBS_PATH = "$$PWD/../libs/release/$$DEST_PREFIX"
    DLLDESTDIR_PATH = "$$PWD/../bin/release/$$DEST_PREFIX"
    BIN_PATH = $$DLLDESTDIR_PATH
}
include(INSTALL_ALL.pri)
