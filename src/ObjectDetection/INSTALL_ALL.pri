INSTALL_HEADER = $$HEADERS
INSTALL_PREFIX = $$TARGET

for(VARS, INSTALL_HEADER){
    VARS_FILE  = "$$_PRO_FILE_PWD_\\$$VARS"
    VARS ~= s,/,\\,g
    DIR_VAR_NAME = $$dirname(VARS)
    eval(header_$${VARS}.files += $$VARS_FILE)
    eval(header_$${VARS}.path += "$$_PRO_FILE_PWD_\..\..\include\\$$INSTALL_PREFIX\\$$DIR_VAR_NAME")
    eval(INSTALLS *= header_$${VARS})


}
CONFIG(release, debug | release){
DESTDIR += "$$_PRO_FILE_PWD_\..\..\libs\release"
DLLDESTDIR += "$$_PRO_FILE_PWD_\..\..\bin\release"

}
CONFIG(debug, debug | release){

DESTDIR += "$$_PRO_FILE_PWD_\..\..\libs\\$$[QMAKE_SPEC]"
DLLDESTDIR += "$$_PRO_FILE_PWD_\..\..\bin\\$$[QMAKE_SPEC]"

}
