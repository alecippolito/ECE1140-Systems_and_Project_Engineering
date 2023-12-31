QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ctc_changeswitches.cpp \
    ctc_choosetrackline.cpp \
    ctc_dispatchtrain.cpp \
    ctc_mainwindow.cpp \
    ctc_openclosetrack.cpp \
    ctc_testui.cpp \
    main.cpp \
    mockWayside.cpp \
    system_centraltimer_connector.cpp \
    TrainModelUI.cpp \
    trackmodel.cpp \
    yardToDormontTrackModel.cpp \
    Train.cpp \
    Block.cpp \
    TrainPhysics.cpp \
    TrainControllerGUI.cpp \
    TrainController.cpp \
    Track_controller.cpp \
    PLC.cpp \
    Track_mainwindow.cpp

HEADERS += \
    ctc_changeswitches.h \
    ctc_choosetrackline.h \
    ctc_dispatchtrain.h \
    ctc_mainwindow.h \
    ctc_openclosetrack.h \
    ctc_testui.h \
    mockWayside.h \
    system_centraltimer_connector.h \
    TrainModelUI.h \
    Train.h \
    Block.h \
    TrainPhysics.h \
    TrainControllerGUI.h \
    TrainController.h \
    trackmodel.h \
    yardToDormontTrackModel.h \
    Track_controller.h \
    PLC.h \
    Track_mainwindow.h

FORMS += \
    ctc_changeswitches.ui \
    ctc_choosetrackline.ui \
    ctc_dispatchtrain.ui \
    ctc_mainwindow.ui \
    ctc_openclosetrack.ui \
    ctc_testui.ui \
    system_centraltimer_connector.ui \
    TrainModelUI.ui \
    TrainControllerGUI.ui \
    trackmodel.ui \
    Track_mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    redline.csv \
    greenline.csv

RESOURCES += \
    trainResources.qrc
