QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ctc_choosetrackline.cpp \
    ctc_dispatchtrain.cpp \
    ctc_mainwindow.cpp \
    main.cpp \
    system_centraltimer_connector.cpp \
    TrainModelUI.cpp

HEADERS += \
    ctc_choosetrackline.h \
    ctc_dispatchtrain.h \
    ctc_mainwindow.h \
    system_centraltimer_connector.h \
    TrainModelUI.h

FORMS += \
    ctc_choosetrackline.ui \
    ctc_dispatchtrain.ui \
    ctc_mainwindow.ui \
    system_centraltimer_connector.ui \
    TrainModelUI.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
