TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    rijn_tab.cpp \
    rijndael.cpp \
    ../exceptn.cpp \
    ../mlock.cpp \
    ../opencl.cpp \
    ../util.cpp \
    rijndael-main.cpp

DISTFILES += \
    ClassDiagram1.cd \
    ClassDiagram2.cd

INCLUDEPATH += \
    ../include
