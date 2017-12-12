TEMPLATE = subdirs
CONFIG += ordered
SUBDIRS += \
    CircleDetector \
    Utilities \
    View
#    DevicesInterfaces
View.depends += CircleDetector
View.depends += Utilities
