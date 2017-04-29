TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    rc6.cpp \
    ../exceptn.cpp \
    ../mlock.cpp \
    ../opencl.cpp \
    ../util.cpp \
    rc6-main.cpp

INCLUDEPATH += \
    ../include
