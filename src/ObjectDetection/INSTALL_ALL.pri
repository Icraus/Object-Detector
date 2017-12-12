INSTALL_HEADER = $$HEADERS
INSTALL_PREFIX = $$TARGET
TEMP = $$find(INSTALL_HEADER, ./impl.*)
INSTALL_HEADER -= $$TEMP


for(VARS, INSTALL_HEADER){
    VARS_FILE  = "$$_PRO_FILE_PWD_\\$$VARS"
    VARS ~= s,/,\\,g
    DIR_VAR_NAME = $$dirname(VARS)
    eval(header_$${VARS}.files += $$VARS_FILE)
    eval(header_$${VARS}.path += "$$PWD\include\\$$INSTALL_PREFIX\\$$DIR_VAR_NAME")
    eval(INSTALLS *= header_$${VARS})
}
CONFIG(release, debug | release){
DESTDIR += "$$PWD\libs\release"
DLLDESTDIR += "$$PWD\bin\release"

}
CONFIG(debug, debug | release){

DESTDIR += "$$PWD\libs\\$$[QMAKE_SPEC]"
DLLDESTDIR += "$$PWD\bin\\$$[QMAKE_SPEC]"

}
#message($$PWD)
