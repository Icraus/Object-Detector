#############################################################################
# Makefile for building: CircleDetection
# Generated by qmake (3.0) (Qt 5.7.0)
# Project:  CircleDetection.pro
# Template: app
# Command: C:\Qt\static\qt5-x64-static-release\bin\qmake.exe -spec win32-msvc2013 -o Makefile CircleDetection.pro
#############################################################################

MAKEFILE      = Makefile

first: release
install: release-install
uninstall: release-uninstall
QMAKE         = C:\Qt\static\qt5-x64-static-release\bin\qmake.exe
DEL_FILE      = del
CHK_DIR_EXISTS= if not exist
MKDIR         = mkdir
COPY          = copy /y
COPY_FILE     = copy /y
COPY_DIR      = xcopy /s /q /y /i
INSTALL_FILE  = copy /y
INSTALL_PROGRAM = copy /y
INSTALL_DIR   = xcopy /s /q /y /i
DEL_FILE      = del
SYMLINK       = $(QMAKE) -install ln -f -s
DEL_DIR       = rmdir
MOVE          = move
SUBTARGETS    =  \
		release \
		debug


release: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release
release-make_first: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release 
release-all: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release all
release-clean: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release clean
release-distclean: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release distclean
release-install: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release install
release-uninstall: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release uninstall
debug: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug
debug-make_first: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug 
debug-all: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug all
debug-clean: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug clean
debug-distclean: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug distclean
debug-install: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug install
debug-uninstall: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug uninstall

Makefile: CircleDetection.pro ..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\win32-msvc2013\qmake.conf ..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\features\spec_pre.prf \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\common\angle.conf \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\common\msvc-base.conf \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\common\msvc-desktop.conf \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\qconfig.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_3dcore.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_3dcore_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_3dextras.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_3dextras_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_3dinput.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_3dinput_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_3dlogic.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_3dlogic_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_3dquick.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_3dquick_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_3dquickextras.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_3dquickextras_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_3dquickinput.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_3dquickinput_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_3dquickrender.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_3dquickrender_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_3drender.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_3drender_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_axbase.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_axbase_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_axcontainer.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_axcontainer_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_axserver.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_axserver_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_bluetooth.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_bluetooth_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_bootstrap_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_charts.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_charts_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_clucene_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_concurrent.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_concurrent_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_core.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_core_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_datavisualization.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_datavisualization_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_gamepad.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_gamepad_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_gui.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_gui_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_help.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_help_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_location.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_location_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_multimedia.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_multimedia_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_multimediawidgets.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_multimediawidgets_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_network.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_network_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_nfc.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_nfc_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_opengl.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_opengl_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_openglextensions.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_openglextensions_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_packetprotocol_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_platformsupport_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_positioning.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_positioning_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_printsupport.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_printsupport_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_purchasing.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_purchasing_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_qml.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_qml_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_qmldebug_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_qmldevtools_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_qmltest.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_qmltest_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_qtmultimediaquicktools_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_quick.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_quick_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_quickcontrols2.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_quickcontrols2_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_quickparticles_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_quicktemplates2_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_quickwidgets.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_quickwidgets_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_script.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_script_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_scripttools.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_scripttools_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_scxml.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_scxml_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_sensors.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_sensors_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_serialbus.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_serialbus_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_serialport.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_serialport_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_sql.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_sql_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_svg.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_svg_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_testlib.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_testlib_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_uiplugin.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_uitools.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_uitools_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_webchannel.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_webchannel_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_websockets.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_websockets_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_widgets.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_widgets_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_winextras.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_winextras_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_xml.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_xml_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_xmlpatterns.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_xmlpatterns_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_zlib_private.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_assimpsceneio.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_dsengine.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_gltfsceneio.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qdds.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qgenericbearer.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qicns.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qico.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qminimal.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qmldbg_debugger.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qmldbg_inspector.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qmldbg_local.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qmldbg_native.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qmldbg_profiler.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qmldbg_quickprofiler.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qmldbg_server.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qmldbg_tcp.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qnativewifibearer.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qoffscreen.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qsvg.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qsvgicon.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qtaudio_windows.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qtga.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qtgeoservices_mapbox.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qtgeoservices_nokia.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qtgeoservices_osm.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qtiff.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qtmedia_audioengine.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qtmultimedia_m3u.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qtpeakcanbus.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qtposition_positionpoll.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qtposition_serialnmea.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qtsensorgestures_plugin.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qtsensorgestures_shakeplugin.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qtsensors_generic.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qttinycanbus.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qtuiotouchplugin.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qtvirtualkeyboardplugin.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qwbmp.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qwebp.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qwindows.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_windowsprintersupport.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_xinputgamepad.pri \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\features\qt_functions.prf \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\features\qt_config.prf \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\features\win32\qt_config.prf \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\win32-msvc2013\qmake.conf \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\features\spec_post.prf \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\features\exclusive_builds.prf \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\features\default_pre.prf \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\features\win32\default_pre.prf \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\features\resolve_config.prf \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\features\exclusive_builds_post.prf \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\features\default_post.prf \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\features\win32\rtti.prf \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\features\precompile_header.prf \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\features\warn_on.prf \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\features\qt.prf \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\features\resources.prf \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\features\moc.prf \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\features\win32\opengl.prf \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\features\uic.prf \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\features\file_copies.prf \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\features\win32\windows.prf \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\features\testcase_targets.prf \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\features\exceptions.prf \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\features\yacc.prf \
		..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\features\lex.prf \
		CircleDetection.pro \
		..\..\..\..\Qt\static\qt5-x64-static-release\lib\qtmain.prl \
		..\..\..\..\Qt\static\qt5-x64-static-release\lib\Qt5Widgets.prl \
		..\..\..\..\Qt\static\qt5-x64-static-release\lib\Qt5Gui.prl \
		..\..\..\..\Qt\static\qt5-x64-static-release\lib\Qt5Core.prl \
		..\..\..\..\Qt\static\qt5-x64-static-release\plugins\platforms\qwindows.prl \
		..\..\..\..\Qt\static\qt5-x64-static-release\plugins\imageformats\qdds.prl \
		..\..\..\..\Qt\static\qt5-x64-static-release\plugins\imageformats\qicns.prl \
		..\..\..\..\Qt\static\qt5-x64-static-release\plugins\imageformats\qico.prl \
		..\..\..\..\Qt\static\qt5-x64-static-release\plugins\imageformats\qtga.prl \
		..\..\..\..\Qt\static\qt5-x64-static-release\plugins\imageformats\qtiff.prl \
		..\..\..\..\Qt\static\qt5-x64-static-release\plugins\imageformats\qwbmp.prl \
		..\..\..\..\Qt\static\qt5-x64-static-release\plugins\imageformats\qwebp.prl
	$(QMAKE) -spec win32-msvc2013 -o Makefile CircleDetection.pro
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\features\spec_pre.prf:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\common\angle.conf:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\common\msvc-base.conf:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\common\msvc-desktop.conf:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\qconfig.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_3dcore.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_3dcore_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_3dextras.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_3dextras_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_3dinput.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_3dinput_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_3dlogic.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_3dlogic_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_3dquick.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_3dquick_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_3dquickextras.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_3dquickextras_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_3dquickinput.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_3dquickinput_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_3dquickrender.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_3dquickrender_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_3drender.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_3drender_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_axbase.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_axbase_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_axcontainer.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_axcontainer_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_axserver.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_axserver_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_bluetooth.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_bluetooth_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_bootstrap_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_charts.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_charts_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_clucene_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_concurrent.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_concurrent_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_core.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_core_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_datavisualization.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_datavisualization_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_gamepad.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_gamepad_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_gui.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_gui_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_help.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_help_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_location.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_location_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_multimedia.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_multimedia_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_multimediawidgets.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_multimediawidgets_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_network.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_network_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_nfc.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_nfc_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_opengl.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_opengl_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_openglextensions.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_openglextensions_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_packetprotocol_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_platformsupport_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_positioning.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_positioning_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_printsupport.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_printsupport_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_purchasing.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_purchasing_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_qml.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_qml_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_qmldebug_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_qmldevtools_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_qmltest.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_qmltest_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_qtmultimediaquicktools_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_quick.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_quick_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_quickcontrols2.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_quickcontrols2_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_quickparticles_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_quicktemplates2_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_quickwidgets.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_quickwidgets_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_script.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_script_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_scripttools.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_scripttools_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_scxml.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_scxml_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_sensors.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_sensors_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_serialbus.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_serialbus_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_serialport.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_serialport_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_sql.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_sql_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_svg.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_svg_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_testlib.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_testlib_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_uiplugin.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_uitools.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_uitools_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_webchannel.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_webchannel_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_websockets.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_websockets_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_widgets.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_widgets_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_winextras.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_winextras_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_xml.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_xml_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_xmlpatterns.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_xmlpatterns_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_lib_zlib_private.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_assimpsceneio.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_dsengine.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_gltfsceneio.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qdds.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qgenericbearer.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qicns.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qico.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qminimal.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qmldbg_debugger.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qmldbg_inspector.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qmldbg_local.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qmldbg_native.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qmldbg_profiler.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qmldbg_quickprofiler.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qmldbg_server.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qmldbg_tcp.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qnativewifibearer.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qoffscreen.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qsvg.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qsvgicon.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qtaudio_windows.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qtga.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qtgeoservices_mapbox.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qtgeoservices_nokia.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qtgeoservices_osm.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qtiff.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qtmedia_audioengine.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qtmultimedia_m3u.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qtpeakcanbus.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qtposition_positionpoll.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qtposition_serialnmea.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qtsensorgestures_plugin.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qtsensorgestures_shakeplugin.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qtsensors_generic.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qttinycanbus.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qtuiotouchplugin.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qtvirtualkeyboardplugin.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qwbmp.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qwebp.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_qwindows.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_windowsprintersupport.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\modules\qt_plugin_xinputgamepad.pri:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\features\qt_functions.prf:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\features\qt_config.prf:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\features\win32\qt_config.prf:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\win32-msvc2013\qmake.conf:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\features\spec_post.prf:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\features\exclusive_builds.prf:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\features\default_pre.prf:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\features\win32\default_pre.prf:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\features\resolve_config.prf:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\features\exclusive_builds_post.prf:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\features\default_post.prf:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\features\win32\rtti.prf:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\features\precompile_header.prf:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\features\warn_on.prf:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\features\qt.prf:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\features\resources.prf:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\features\moc.prf:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\features\win32\opengl.prf:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\features\uic.prf:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\features\file_copies.prf:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\features\win32\windows.prf:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\features\testcase_targets.prf:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\features\exceptions.prf:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\features\yacc.prf:
..\..\..\..\Qt\static\qt5-x64-static-release\mkspecs\features\lex.prf:
CircleDetection.pro:
..\..\..\..\Qt\static\qt5-x64-static-release\lib\qtmain.prl:
..\..\..\..\Qt\static\qt5-x64-static-release\lib\Qt5Widgets.prl:
..\..\..\..\Qt\static\qt5-x64-static-release\lib\Qt5Gui.prl:
..\..\..\..\Qt\static\qt5-x64-static-release\lib\Qt5Core.prl:
..\..\..\..\Qt\static\qt5-x64-static-release\plugins\platforms\qwindows.prl:
..\..\..\..\Qt\static\qt5-x64-static-release\plugins\imageformats\qdds.prl:
..\..\..\..\Qt\static\qt5-x64-static-release\plugins\imageformats\qicns.prl:
..\..\..\..\Qt\static\qt5-x64-static-release\plugins\imageformats\qico.prl:
..\..\..\..\Qt\static\qt5-x64-static-release\plugins\imageformats\qtga.prl:
..\..\..\..\Qt\static\qt5-x64-static-release\plugins\imageformats\qtiff.prl:
..\..\..\..\Qt\static\qt5-x64-static-release\plugins\imageformats\qwbmp.prl:
..\..\..\..\Qt\static\qt5-x64-static-release\plugins\imageformats\qwebp.prl:
qmake: FORCE
	@$(QMAKE) -spec win32-msvc2013 -o Makefile CircleDetection.pro

qmake_all: FORCE

make_first: release-make_first debug-make_first  FORCE
all: release-all debug-all  FORCE
clean: release-clean debug-clean  FORCE
distclean: release-distclean debug-distclean  FORCE
	-$(DEL_FILE) Makefile
	-$(DEL_FILE) C:\Users\Shoka\Documents\CircleDetection\circledetection_plugin_import.cpp

release-mocclean:
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release mocclean
debug-mocclean:
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug mocclean
mocclean: release-mocclean debug-mocclean

release-mocables:
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release mocables
debug-mocables:
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug mocables
mocables: release-mocables debug-mocables

check: first

benchmark: first
FORCE:

$(MAKEFILE).Release: Makefile
$(MAKEFILE).Debug: Makefile
