TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    exceptn.cpp \
    mlock.cpp \
    opencl.cpp \
    rc.cpp \
    rc2_tab.cpp \
    rc2.cpp \
    util.cpp

INCLUDEPATH += \
    ../include
