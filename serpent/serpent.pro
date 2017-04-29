TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    serpent.cpp \
    ../exceptn.cpp \
    ../mlock.cpp \
    ../opencl.cpp \
    ../util.cpp \
    serpent-main.cpp

INCLUDEPATH += \
    ../include
