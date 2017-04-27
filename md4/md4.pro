TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    enc_tab.cpp \
    encoder.cpp \
    filtbase.cpp \
    hash.cpp \
    md4.cpp \
    pipe_io.cpp \
    secqueue.cpp \
    ../mlock.cpp \
    ../exceptn.cpp \
    ../opencl.cpp \
    ../util.cpp

DISTFILES += \
    ClassDiagram1.cd \
    ClassDiagram2.cd

INCLUDEPATH += \
    ../include
