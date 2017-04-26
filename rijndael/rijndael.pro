TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    rd.cpp \
    rijn_tab.cpp \
    rijndael.cpp \
    ../exceptn.cpp \
    ../mlock.cpp \
    ../opencl.cpp \
    ../util.cpp

DISTFILES += \
    ClassDiagram1.cd \
    ClassDiagram2.cd

INCLUDEPATH += \
    ../include
