TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    cast_tab.cpp \
    cast5.cpp \
    cast256.cpp \
    ../exceptn.cpp \
    ../mlock.cpp \
    ../opencl.cpp \
    ../util.cpp \
    cast5-main.cpp

INCLUDEPATH += \
    ../include
