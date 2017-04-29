TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    rc5.cpp \
    ../exceptn.cpp \
    ../mlock.cpp \
    ../opencl.cpp \
    ../util.cpp \
    rc5-main.cpp


INCLUDEPATH += \
    ../include
