TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    cast_tab.cpp \
    cast5.cpp \
    cast256.cpp \
    cst.cpp \
    enc_tab.cpp \
    encoder.cpp \
    exceptn.cpp \
    mlock.cpp \
    opencl.cpp \
    symkey.cpp \
    util.cpp

INCLUDEPATH += \
    ../include
