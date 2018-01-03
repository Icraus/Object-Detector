TEMPLATE = subdirs
CONFIG += ordered
SUBDIRS += \
    ErodePlugin \
    PluginLoader
PluginLoader.depends = ErodePlugin
