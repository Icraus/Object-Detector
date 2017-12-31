INSTALL_HEADER = $$HEADERS
INSTALL_PREFIX = $$TARGET
TEMP = $$find(INSTALL_HEADER, ./impl.*)
INSTALL_HEADER -= $$TEMP


for(VARS, INSTALL_HEADER){
    VARS_FILE  = "$$_PRO_FILE_PWD_/$$VARS"
    win32:VARS ~= s,/,\\,g
    DIR_VAR_NAME = $$dirname(VARS)
    eval(header_$${VARS}.files += $$VARS_FILE)
    eval(header_$${VARS}.path += "$$PWD/include/$$INSTALL_PREFIX/$$DIR_VAR_NAME")
    eval(INSTALLS *= header_$${VARS})
}
DEST_PREFIX = $$[QMAKE_SPEC]
equals(DEST_PREFIX, "win32-g++"){
DEST_PREFIX = "mingw32"
}
CONFIG(release, debug | release){
DESTDIR += "$$PWD/libs/release/$$DEST_PREFIX"
DLLDESTDIR += "$$PWD/bin/release/$$DEST_PREFIX"

}
CONFIG(debug, debug | release){

DESTDIR += "$$PWD/libs/$$DEST_PREFIX"
DLLDESTDIR += "$$PWD/bin/$$DEST_PREFIX"

}
#message($$PWD)
