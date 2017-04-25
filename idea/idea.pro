TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    exceptn.cpp \
    id.cpp \
    idea.cpp \
    mlock.cpp \
    opencl.cpp \
    util.cpp

INCLUDEPATH += \
    ../include
