
!equals(OVERRIDE_INSTALL, TRUE){
    contains(TEMPLATE, lib){
        !contains(OVERRIDE_INSTALL_HEADERS, TRUE){
            !contains(CONFIG, plugin){
                INSTALL_INCLUDE_PATH = "$$INCLUDE_PATH/$$INSTALL_PREFIX"
                TEMP = $$find(INSTALL_HEADER, .*impl.*)
                INSTALL_HEADER -= $$TEMP

                for(VARS, INSTALL_HEADER){
                    VARS_FILE  = "$$_PRO_FILE_PWD_/$$VARS"
                    win32:VARS ~= s,/,\\,g
                    DIR_VAR_NAME = $$dirname(VARS)
                    eval(header_$${VARS}.files += $$VARS_FILE)
                    eval(header_$${VARS}.path += "$$INSTALL_INCLUDE_PATH/$$DIR_VAR_NAME")
                    eval(INSTALLS *= header_$${VARS})
                }
                DESTDIR += $$LIBS_PATH
                win32:DLLDESTDIR += $$DLLDESTDIR_PATH
            }
    }
}
    !contains(OVERRIDE_INSTALL_PLUGINS, TRUE){
        contains(CONFIG, plugin){
            CONFIG(release , debug | release){
                target.path = $$PLUGINS_PATH
                INSTALLS    += target
            }
        }
    }
    !contains(OVERRIDE_INSTALL_BINS, TRUE){
        contains(TEMPLATE, app){
            DESTDIR += $$BIN_PATH
        }
    }

}


#message($$PWD)
