QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    choosedispatch.cpp \
    chooseline.cpp \
    customdispatch.cpp \
    main.cpp \
    ctc.cpp \
    trackedit.cpp \
    trainedit.cpp \
    updateschedule.cpp

HEADERS += \
    choosedispatch.h \
    chooseline.h \
    ctc.h \
    customdispatch.h \
    trackedit.h \
    trainedit.h \
    updateschedule.h

FORMS += \
    choosedispatch.ui \
    chooseline.ui \
    ctc.ui \
    customdispatch.ui \
    trackedit.ui \
    trainedit.ui \
    updateschedule.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
