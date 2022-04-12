/********************************************************************************
** Form generated from reading UI file 'TrainControllerGUI.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRAINCONTROLLERGUI_H
#define UI_TRAINCONTROLLERGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TrainControllerGUI
{
public:
    QWidget *centralwidget;
    QPushButton *incSpeed;
    QPushButton *decSpeed;
    QLCDNumber *currentSetpoint;
    QPushButton *doorButton;
    QPushButton *lightButton;
    QPushButton *serviceBrake;
    QLabel *speedLabel;
    QLCDNumber *currentPower;
    QLabel *powerLabel;
    QLabel *lightStatus;
    QLabel *doorStatus;
    QPushButton *mode;
    QLabel *modeStatus;
    QPushButton *eBrakeButton;
    QPlainTextEdit *kpTextbox;
    QPlainTextEdit *kiTextbox;
    QPushButton *submit;
    QGraphicsView *emergencyBrakeStatus;
    QGraphicsView *passengerEmergencyBrakeStatus;
    QGraphicsView *brakeFailureStatus;
    QGraphicsView *signalPickupFailureStatus;
    QGraphicsView *engineFailureStatus;
    QLabel *emergencyBrakeLabel;
    QLabel *passengerEmergencyBrakeLabel;
    QLabel *brakeFailureLabel;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TrainControllerGUI)
    {
        if (TrainControllerGUI->objectName().isEmpty())
            TrainControllerGUI->setObjectName(QString::fromUtf8("TrainControllerGUI"));
        TrainControllerGUI->resize(800, 600);
        centralwidget = new QWidget(TrainControllerGUI);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        incSpeed = new QPushButton(centralwidget);
        incSpeed->setObjectName(QString::fromUtf8("incSpeed"));
        incSpeed->setGeometry(QRect(20, 10, 61, 51));
        decSpeed = new QPushButton(centralwidget);
        decSpeed->setObjectName(QString::fromUtf8("decSpeed"));
        decSpeed->setGeometry(QRect(20, 70, 61, 51));
        decSpeed->setAutoDefault(false);
        currentSetpoint = new QLCDNumber(centralwidget);
        currentSetpoint->setObjectName(QString::fromUtf8("currentSetpoint"));
        currentSetpoint->setGeometry(QRect(90, 10, 81, 91));
        doorButton = new QPushButton(centralwidget);
        doorButton->setObjectName(QString::fromUtf8("doorButton"));
        doorButton->setGeometry(QRect(630, 250, 151, 31));
        QFont font;
        font.setPointSize(5);
        doorButton->setFont(font);
        lightButton = new QPushButton(centralwidget);
        lightButton->setObjectName(QString::fromUtf8("lightButton"));
        lightButton->setGeometry(QRect(630, 180, 151, 31));
        lightButton->setFont(font);
        serviceBrake = new QPushButton(centralwidget);
        serviceBrake->setObjectName(QString::fromUtf8("serviceBrake"));
        serviceBrake->setGeometry(QRect(590, 120, 191, 41));
        serviceBrake->setFont(font);
        speedLabel = new QLabel(centralwidget);
        speedLabel->setObjectName(QString::fromUtf8("speedLabel"));
        speedLabel->setGeometry(QRect(100, 90, 201, 51));
        QFont font1;
        font1.setPointSize(3);
        speedLabel->setFont(font1);
        currentPower = new QLCDNumber(centralwidget);
        currentPower->setObjectName(QString::fromUtf8("currentPower"));
        currentPower->setGeometry(QRect(190, 10, 81, 91));
        powerLabel = new QLabel(centralwidget);
        powerLabel->setObjectName(QString::fromUtf8("powerLabel"));
        powerLabel->setGeometry(QRect(230, 100, 71, 31));
        powerLabel->setFont(font1);
        lightStatus = new QLabel(centralwidget);
        lightStatus->setObjectName(QString::fromUtf8("lightStatus"));
        lightStatus->setGeometry(QRect(630, 210, 211, 31));
        lightStatus->setFont(font);
        doorStatus = new QLabel(centralwidget);
        doorStatus->setObjectName(QString::fromUtf8("doorStatus"));
        doorStatus->setGeometry(QRect(630, 290, 251, 31));
        doorStatus->setFont(font);
        mode = new QPushButton(centralwidget);
        mode->setObjectName(QString::fromUtf8("mode"));
        mode->setGeometry(QRect(590, 10, 191, 41));
        mode->setFont(font);
        modeStatus = new QLabel(centralwidget);
        modeStatus->setObjectName(QString::fromUtf8("modeStatus"));
        modeStatus->setGeometry(QRect(660, 50, 261, 21));
        modeStatus->setFont(font);
        eBrakeButton = new QPushButton(centralwidget);
        eBrakeButton->setObjectName(QString::fromUtf8("eBrakeButton"));
        eBrakeButton->setGeometry(QRect(590, 70, 191, 41));
        eBrakeButton->setFont(font);
        kpTextbox = new QPlainTextEdit(centralwidget);
        kpTextbox->setObjectName(QString::fromUtf8("kpTextbox"));
        kpTextbox->setGeometry(QRect(670, 440, 101, 51));
        kiTextbox = new QPlainTextEdit(centralwidget);
        kiTextbox->setObjectName(QString::fromUtf8("kiTextbox"));
        kiTextbox->setGeometry(QRect(670, 500, 101, 51));
        submit = new QPushButton(centralwidget);
        submit->setObjectName(QString::fromUtf8("submit"));
        submit->setGeometry(QRect(670, 390, 101, 41));
        emergencyBrakeStatus = new QGraphicsView(centralwidget);
        emergencyBrakeStatus->setObjectName(QString::fromUtf8("emergencyBrakeStatus"));
        emergencyBrakeStatus->setGeometry(QRect(20, 320, 31, 31));
        passengerEmergencyBrakeStatus = new QGraphicsView(centralwidget);
        passengerEmergencyBrakeStatus->setObjectName(QString::fromUtf8("passengerEmergencyBrakeStatus"));
        passengerEmergencyBrakeStatus->setGeometry(QRect(20, 360, 31, 31));
        brakeFailureStatus = new QGraphicsView(centralwidget);
        brakeFailureStatus->setObjectName(QString::fromUtf8("brakeFailureStatus"));
        brakeFailureStatus->setGeometry(QRect(20, 400, 31, 31));
        signalPickupFailureStatus = new QGraphicsView(centralwidget);
        signalPickupFailureStatus->setObjectName(QString::fromUtf8("signalPickupFailureStatus"));
        signalPickupFailureStatus->setGeometry(QRect(20, 440, 31, 31));
        engineFailureStatus = new QGraphicsView(centralwidget);
        engineFailureStatus->setObjectName(QString::fromUtf8("engineFailureStatus"));
        engineFailureStatus->setGeometry(QRect(20, 480, 31, 31));
        emergencyBrakeLabel = new QLabel(centralwidget);
        emergencyBrakeLabel->setObjectName(QString::fromUtf8("emergencyBrakeLabel"));
        emergencyBrakeLabel->setGeometry(QRect(60, 320, 141, 31));
        emergencyBrakeLabel->setFont(font);
        passengerEmergencyBrakeLabel = new QLabel(centralwidget);
        passengerEmergencyBrakeLabel->setObjectName(QString::fromUtf8("passengerEmergencyBrakeLabel"));
        passengerEmergencyBrakeLabel->setGeometry(QRect(60, 360, 191, 31));
        passengerEmergencyBrakeLabel->setFont(font);
        brakeFailureLabel = new QLabel(centralwidget);
        brakeFailureLabel->setObjectName(QString::fromUtf8("brakeFailureLabel"));
        brakeFailureLabel->setGeometry(QRect(60, 400, 161, 31));
        brakeFailureLabel->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 440, 131, 31));
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 480, 131, 31));
        label_2->setFont(font);
        TrainControllerGUI->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TrainControllerGUI);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 19));
        TrainControllerGUI->setMenuBar(menubar);
        statusbar = new QStatusBar(TrainControllerGUI);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        TrainControllerGUI->setStatusBar(statusbar);

        retranslateUi(TrainControllerGUI);

        QMetaObject::connectSlotsByName(TrainControllerGUI);
    } // setupUi

    void retranslateUi(QMainWindow *TrainControllerGUI)
    {
        TrainControllerGUI->setWindowTitle(QCoreApplication::translate("TrainControllerGUI", "TrainControllerGUI", nullptr));
        incSpeed->setText(QCoreApplication::translate("TrainControllerGUI", "+", nullptr));
        decSpeed->setText(QCoreApplication::translate("TrainControllerGUI", "-", nullptr));
        doorButton->setText(QCoreApplication::translate("TrainControllerGUI", "Open/Close Door", nullptr));
        lightButton->setText(QCoreApplication::translate("TrainControllerGUI", "Lights On/Off", nullptr));
        serviceBrake->setText(QCoreApplication::translate("TrainControllerGUI", "Service Brake", nullptr));
        speedLabel->setText(QCoreApplication::translate("TrainControllerGUI", " Setpoint Speed", nullptr));
        powerLabel->setText(QCoreApplication::translate("TrainControllerGUI", "Power", nullptr));
        lightStatus->setText(QCoreApplication::translate("TrainControllerGUI", "Light Status: OFF", nullptr));
        doorStatus->setText(QCoreApplication::translate("TrainControllerGUI", "Door Staus: CLOSED", nullptr));
        mode->setText(QCoreApplication::translate("TrainControllerGUI", "Automatic/Manual", nullptr));
        modeStatus->setText(QCoreApplication::translate("TrainControllerGUI", "Mode: Manual", nullptr));
        eBrakeButton->setText(QCoreApplication::translate("TrainControllerGUI", "E-Brake", nullptr));
        kpTextbox->setPlainText(QCoreApplication::translate("TrainControllerGUI", "Kp", nullptr));
        kiTextbox->setPlainText(QCoreApplication::translate("TrainControllerGUI", "Ki", nullptr));
        submit->setText(QCoreApplication::translate("TrainControllerGUI", "Submit", nullptr));
        emergencyBrakeLabel->setText(QCoreApplication::translate("TrainControllerGUI", "Emergency Brake", nullptr));
        passengerEmergencyBrakeLabel->setText(QCoreApplication::translate("TrainControllerGUI", "Passenger Emergency Brake", nullptr));
        brakeFailureLabel->setText(QCoreApplication::translate("TrainControllerGUI", "Brake Failure", nullptr));
        label->setText(QCoreApplication::translate("TrainControllerGUI", "Signal Pickup Failure", nullptr));
        label_2->setText(QCoreApplication::translate("TrainControllerGUI", "Engine Failure", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TrainControllerGUI: public Ui_TrainControllerGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAINCONTROLLERGUI_H
