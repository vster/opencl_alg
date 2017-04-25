TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    exceptn.cpp \
    mlock.cpp \
    opencl.cpp \
    sqr_tab.cpp \
    sqr.cpp \
    square.cpp \
    util.cpp

INCLUDEPATH += \
    ../include
