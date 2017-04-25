TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    bf.cpp \
    blfs_tab.cpp \
    blowfish.cpp \
    enc_tab.cpp \
    encoder.cpp \
    exceptn.cpp \
    mlock.cpp \
    opencl.cpp \
    symkey.cpp \
    util.cpp

INCLUDEPATH += \
    ../include
