TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    enc_tab.cpp \
    encoder.cpp \
    filtbase.cpp \
    hash.cpp \
    md2_tab.cpp \
    md2.cpp \
    pipe_io.cpp \
    secqueue.cpp \
    ../exceptn.cpp \
    ../mlock.cpp \
    ../opencl.cpp \
    ../util.cpp

DISTFILES += \
    ClassDiagram1.cd \
    test.txt

INCLUDEPATH += \
    ../include
