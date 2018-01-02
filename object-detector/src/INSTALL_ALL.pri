contains(TEMPLATE, lib){
    !contains(CONFIG, plugin){
        INCLUDE_PATH = "$$INCLUDE_PATH/$$INSTALL_PREFIX"
        TEMP = $$find(INSTALL_HEADER, ./impl.*)
        INSTALL_HEADER -= $$TEMP

        for(VARS, INSTALL_HEADER){
            VARS_FILE  = "$$_PRO_FILE_PWD_/$$VARS"
            win32:VARS ~= s,/,\\,g
            DIR_VAR_NAME = $$dirname(VARS)
            eval(header_$${VARS}.files += $$VARS_FILE)
            eval(header_$${VARS}.path += "$$INCLUDE_PATH/$$DIR_VAR_NAME")
            eval(INSTALLS *= header_$${VARS})
        }
        DESTDIR += $$LIBS_PATH
        win32:DLLDESTDIR += $$DLLDESTDIR_PATH
    }
}
contains(TEMPLATE, plugin){
    target.path = $$[QT_INSTALL_PLUGINS]/designer
    INSTALLS    += target
}

contains(TEMPLATE, app){

    DESTDIR += $$BIN_PATH
}



#message($$PWD)
