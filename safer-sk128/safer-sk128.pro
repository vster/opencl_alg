TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    safe_tab.cpp \
    safer_sk.cpp \
    ../exceptn.cpp \
    ../mlock.cpp \
    ../opencl.cpp \
    ../util.cpp \
    safer-main.cpp

INCLUDEPATH += \
    ../include
