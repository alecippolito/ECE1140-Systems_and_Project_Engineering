/********************************************************************************
** Form generated from reading UI file 'TrainControllerGUI.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRAINCONTROLLERGUI_H
#define UI_TRAINCONTROLLERGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
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
    QGraphicsView *emergencyBrakeStatus;
    QGraphicsView *passengerEmergencyBrakeStatus;
    QGraphicsView *brakeFailureStatus;
    QGraphicsView *signalPickupFailureStatus;
    QGraphicsView *engineFailureStatus;
    QLabel *emergencyBrakeLabel;
    QLabel *passengerEmergencyBrakeLabel;
    QLabel *brakeFailureLabel;
    QLabel *signalPickupFailureLabel;
    QLabel *engineFailureLabel;
    QLCDNumber *currentCommanded;
    QLabel *commandedSpeedLabel;
    QPushButton *eBrakeButton;
    QPushButton *adButton;
    QLabel *adLabel;
    QLabel *adLabelMovie;
    QLCDNumber *currentTemp;
    QPushButton *incTempButton;
    QPushButton *decTempButton;
    QLabel *tempLabel;
    QLabel *announcementLabel;
    QPushButton *tempSubmit;
    QPlainTextEdit *tempTextbox;
    QLCDNumber *currentVelocity;
    QLabel *velocityLabel;
    QPlainTextEdit *kpTextbox;
    QPlainTextEdit *kiTextbox;
    QLabel *kpLabel;
    QLabel *kpLabel_2;
    QPushButton *kpkiSubmit;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QLabel *announcmentMessage;
    QLabel *announcmentStation;
    QLabel *trainNumLabel;
    QLabel *trainNumVal;
    QLCDNumber *currentAuthority;
    QLabel *currentAuthorityLabel;
    QPushButton *releaseServiceBrake;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TrainControllerGUI)
    {
        if (TrainControllerGUI->objectName().isEmpty())
            TrainControllerGUI->setObjectName(QString::fromUtf8("TrainControllerGUI"));
        TrainControllerGUI->resize(800, 600);
        TrainControllerGUI->setAutoFillBackground(false);
        TrainControllerGUI->setDockNestingEnabled(false);
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
        doorButton->setGeometry(QRect(640, 70, 151, 31));
        QFont font;
        font.setPointSize(4);
        doorButton->setFont(font);
        lightButton = new QPushButton(centralwidget);
        lightButton->setObjectName(QString::fromUtf8("lightButton"));
        lightButton->setGeometry(QRect(640, 10, 151, 31));
        lightButton->setFont(font);
        serviceBrake = new QPushButton(centralwidget);
        serviceBrake->setObjectName(QString::fromUtf8("serviceBrake"));
        serviceBrake->setGeometry(QRect(20, 140, 191, 41));
        serviceBrake->setFont(font);
        speedLabel = new QLabel(centralwidget);
        speedLabel->setObjectName(QString::fromUtf8("speedLabel"));
        speedLabel->setGeometry(QRect(90, 100, 81, 21));
        QFont font1;
        font1.setPointSize(3);
        speedLabel->setFont(font1);
        speedLabel->setAlignment(Qt::AlignCenter);
        currentPower = new QLCDNumber(centralwidget);
        currentPower->setObjectName(QString::fromUtf8("currentPower"));
        currentPower->setGeometry(QRect(390, 10, 81, 91));
        powerLabel = new QLabel(centralwidget);
        powerLabel->setObjectName(QString::fromUtf8("powerLabel"));
        powerLabel->setGeometry(QRect(390, 100, 81, 21));
        powerLabel->setFont(font1);
        powerLabel->setAlignment(Qt::AlignCenter);
        lightStatus = new QLabel(centralwidget);
        lightStatus->setObjectName(QString::fromUtf8("lightStatus"));
        lightStatus->setGeometry(QRect(640, 40, 151, 20));
        lightStatus->setFont(font1);
        lightStatus->setAlignment(Qt::AlignCenter);
        doorStatus = new QLabel(centralwidget);
        doorStatus->setObjectName(QString::fromUtf8("doorStatus"));
        doorStatus->setGeometry(QRect(640, 100, 151, 21));
        doorStatus->setFont(font1);
        doorStatus->setAlignment(Qt::AlignCenter);
        mode = new QPushButton(centralwidget);
        mode->setObjectName(QString::fromUtf8("mode"));
        mode->setGeometry(QRect(20, 230, 191, 41));
        mode->setFont(font);
        modeStatus = new QLabel(centralwidget);
        modeStatus->setObjectName(QString::fromUtf8("modeStatus"));
        modeStatus->setGeometry(QRect(20, 270, 191, 21));
        modeStatus->setFont(font1);
        modeStatus->setAlignment(Qt::AlignCenter);
        emergencyBrakeStatus = new QGraphicsView(centralwidget);
        emergencyBrakeStatus->setObjectName(QString::fromUtf8("emergencyBrakeStatus"));
        emergencyBrakeStatus->setGeometry(QRect(20, 360, 31, 31));
        passengerEmergencyBrakeStatus = new QGraphicsView(centralwidget);
        passengerEmergencyBrakeStatus->setObjectName(QString::fromUtf8("passengerEmergencyBrakeStatus"));
        passengerEmergencyBrakeStatus->setGeometry(QRect(20, 400, 31, 31));
        brakeFailureStatus = new QGraphicsView(centralwidget);
        brakeFailureStatus->setObjectName(QString::fromUtf8("brakeFailureStatus"));
        brakeFailureStatus->setGeometry(QRect(20, 440, 31, 31));
        signalPickupFailureStatus = new QGraphicsView(centralwidget);
        signalPickupFailureStatus->setObjectName(QString::fromUtf8("signalPickupFailureStatus"));
        signalPickupFailureStatus->setGeometry(QRect(20, 480, 31, 31));
        engineFailureStatus = new QGraphicsView(centralwidget);
        engineFailureStatus->setObjectName(QString::fromUtf8("engineFailureStatus"));
        engineFailureStatus->setGeometry(QRect(20, 520, 31, 31));
        QBrush brush(QColor(0, 170, 0, 255));
        brush.setStyle(Qt::NoBrush);
        engineFailureStatus->setBackgroundBrush(brush);
        QBrush brush1(QColor(0, 170, 0, 255));
        brush1.setStyle(Qt::NoBrush);
        engineFailureStatus->setForegroundBrush(brush1);
        emergencyBrakeLabel = new QLabel(centralwidget);
        emergencyBrakeLabel->setObjectName(QString::fromUtf8("emergencyBrakeLabel"));
        emergencyBrakeLabel->setGeometry(QRect(60, 360, 141, 31));
        emergencyBrakeLabel->setFont(font1);
        passengerEmergencyBrakeLabel = new QLabel(centralwidget);
        passengerEmergencyBrakeLabel->setObjectName(QString::fromUtf8("passengerEmergencyBrakeLabel"));
        passengerEmergencyBrakeLabel->setGeometry(QRect(60, 400, 271, 31));
        passengerEmergencyBrakeLabel->setFont(font1);
        brakeFailureLabel = new QLabel(centralwidget);
        brakeFailureLabel->setObjectName(QString::fromUtf8("brakeFailureLabel"));
        brakeFailureLabel->setGeometry(QRect(60, 440, 161, 31));
        brakeFailureLabel->setFont(font1);
        signalPickupFailureLabel = new QLabel(centralwidget);
        signalPickupFailureLabel->setObjectName(QString::fromUtf8("signalPickupFailureLabel"));
        signalPickupFailureLabel->setGeometry(QRect(60, 480, 221, 31));
        signalPickupFailureLabel->setFont(font1);
        engineFailureLabel = new QLabel(centralwidget);
        engineFailureLabel->setObjectName(QString::fromUtf8("engineFailureLabel"));
        engineFailureLabel->setGeometry(QRect(60, 520, 131, 31));
        engineFailureLabel->setFont(font1);
        currentCommanded = new QLCDNumber(centralwidget);
        currentCommanded->setObjectName(QString::fromUtf8("currentCommanded"));
        currentCommanded->setGeometry(QRect(190, 10, 81, 91));
        commandedSpeedLabel = new QLabel(centralwidget);
        commandedSpeedLabel->setObjectName(QString::fromUtf8("commandedSpeedLabel"));
        commandedSpeedLabel->setGeometry(QRect(190, 100, 91, 21));
        commandedSpeedLabel->setFont(font1);
        commandedSpeedLabel->setAlignment(Qt::AlignCenter);
        eBrakeButton = new QPushButton(centralwidget);
        eBrakeButton->setObjectName(QString::fromUtf8("eBrakeButton"));
        eBrakeButton->setGeometry(QRect(20, 300, 231, 51));
        eBrakeButton->setFont(font);
        adButton = new QPushButton(centralwidget);
        adButton->setObjectName(QString::fromUtf8("adButton"));
        adButton->setGeometry(QRect(640, 130, 151, 31));
        adButton->setFont(font);
        adLabel = new QLabel(centralwidget);
        adLabel->setObjectName(QString::fromUtf8("adLabel"));
        adLabel->setGeometry(QRect(630, 160, 171, 20));
        adLabel->setFont(font1);
        adLabel->setAlignment(Qt::AlignCenter);
        adLabelMovie = new QLabel(centralwidget);
        adLabelMovie->setObjectName(QString::fromUtf8("adLabelMovie"));
        adLabelMovie->setGeometry(QRect(640, 170, 151, 16));
        adLabelMovie->setFont(font1);
        adLabelMovie->setAlignment(Qt::AlignCenter);
        currentTemp = new QLCDNumber(centralwidget);
        currentTemp->setObjectName(QString::fromUtf8("currentTemp"));
        currentTemp->setGeometry(QRect(740, 190, 51, 61));
        incTempButton = new QPushButton(centralwidget);
        incTempButton->setObjectName(QString::fromUtf8("incTempButton"));
        incTempButton->setGeometry(QRect(640, 190, 51, 61));
        incTempButton->setFont(font);
        decTempButton = new QPushButton(centralwidget);
        decTempButton->setObjectName(QString::fromUtf8("decTempButton"));
        decTempButton->setGeometry(QRect(690, 190, 51, 61));
        decTempButton->setFont(font);
        tempLabel = new QLabel(centralwidget);
        tempLabel->setObjectName(QString::fromUtf8("tempLabel"));
        tempLabel->setGeometry(QRect(590, 250, 201, 16));
        tempLabel->setFont(font1);
        tempLabel->setAlignment(Qt::AlignCenter);
        announcementLabel = new QLabel(centralwidget);
        announcementLabel->setObjectName(QString::fromUtf8("announcementLabel"));
        announcementLabel->setGeometry(QRect(310, 430, 151, 31));
        announcementLabel->setFont(font);
        announcementLabel->setAlignment(Qt::AlignCenter);
        tempSubmit = new QPushButton(centralwidget);
        tempSubmit->setObjectName(QString::fromUtf8("tempSubmit"));
        tempSubmit->setGeometry(QRect(590, 230, 51, 20));
        tempSubmit->setFont(font);
        tempTextbox = new QPlainTextEdit(centralwidget);
        tempTextbox->setObjectName(QString::fromUtf8("tempTextbox"));
        tempTextbox->setGeometry(QRect(590, 190, 51, 41));
        tempTextbox->setFont(font1);
        tempTextbox->setBackgroundVisible(false);
        currentVelocity = new QLCDNumber(centralwidget);
        currentVelocity->setObjectName(QString::fromUtf8("currentVelocity"));
        currentVelocity->setGeometry(QRect(290, 10, 81, 91));
        velocityLabel = new QLabel(centralwidget);
        velocityLabel->setObjectName(QString::fromUtf8("velocityLabel"));
        velocityLabel->setGeometry(QRect(290, 100, 81, 16));
        velocityLabel->setFont(font1);
        velocityLabel->setAlignment(Qt::AlignCenter);
        kpTextbox = new QPlainTextEdit(centralwidget);
        kpTextbox->setObjectName(QString::fromUtf8("kpTextbox"));
        kpTextbox->setGeometry(QRect(600, 420, 51, 41));
        kpTextbox->setFont(font1);
        kiTextbox = new QPlainTextEdit(centralwidget);
        kiTextbox->setObjectName(QString::fromUtf8("kiTextbox"));
        kiTextbox->setGeometry(QRect(600, 470, 51, 41));
        kiTextbox->setFont(font1);
        kpLabel = new QLabel(centralwidget);
        kpLabel->setObjectName(QString::fromUtf8("kpLabel"));
        kpLabel->setGeometry(QRect(660, 430, 131, 20));
        kpLabel->setFont(font1);
        kpLabel_2 = new QLabel(centralwidget);
        kpLabel_2->setObjectName(QString::fromUtf8("kpLabel_2"));
        kpLabel_2->setGeometry(QRect(660, 480, 131, 16));
        kpLabel_2->setFont(font1);
        kpkiSubmit = new QPushButton(centralwidget);
        kpkiSubmit->setObjectName(QString::fromUtf8("kpkiSubmit"));
        kpkiSubmit->setGeometry(QRect(610, 520, 161, 21));
        kpkiSubmit->setFont(font);
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(580, 400, 211, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(570, 410, 20, 141));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(580, 540, 211, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(centralwidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(780, 410, 20, 141));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        announcmentMessage = new QLabel(centralwidget);
        announcmentMessage->setObjectName(QString::fromUtf8("announcmentMessage"));
        announcmentMessage->setGeometry(QRect(310, 460, 151, 41));
        announcmentMessage->setFont(font);
        announcmentMessage->setAlignment(Qt::AlignCenter);
        announcmentStation = new QLabel(centralwidget);
        announcmentStation->setObjectName(QString::fromUtf8("announcmentStation"));
        announcmentStation->setGeometry(QRect(310, 500, 151, 31));
        announcmentStation->setFont(font);
        announcmentStation->setAlignment(Qt::AlignCenter);
        trainNumLabel = new QLabel(centralwidget);
        trainNumLabel->setObjectName(QString::fromUtf8("trainNumLabel"));
        trainNumLabel->setGeometry(QRect(550, 300, 91, 16));
        trainNumLabel->setFont(font);
        trainNumLabel->setAlignment(Qt::AlignCenter);
        trainNumVal = new QLabel(centralwidget);
        trainNumVal->setObjectName(QString::fromUtf8("trainNumVal"));
        trainNumVal->setGeometry(QRect(650, 300, 41, 16));
        trainNumVal->setFont(font);
        trainNumVal->setAlignment(Qt::AlignCenter);
        currentAuthority = new QLCDNumber(centralwidget);
        currentAuthority->setObjectName(QString::fromUtf8("currentAuthority"));
        currentAuthority->setGeometry(QRect(490, 10, 81, 91));
        currentAuthorityLabel = new QLabel(centralwidget);
        currentAuthorityLabel->setObjectName(QString::fromUtf8("currentAuthorityLabel"));
        currentAuthorityLabel->setGeometry(QRect(490, 100, 81, 21));
        currentAuthorityLabel->setFont(font1);
        currentAuthorityLabel->setAlignment(Qt::AlignCenter);
        releaseServiceBrake = new QPushButton(centralwidget);
        releaseServiceBrake->setObjectName(QString::fromUtf8("releaseServiceBrake"));
        releaseServiceBrake->setGeometry(QRect(20, 180, 191, 41));
        releaseServiceBrake->setFont(font);
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
        serviceBrake->setText(QCoreApplication::translate("TrainControllerGUI", "Enable Service Brake", nullptr));
        speedLabel->setText(QCoreApplication::translate("TrainControllerGUI", " Setpoint Speed", nullptr));
        powerLabel->setText(QCoreApplication::translate("TrainControllerGUI", "Power", nullptr));
        lightStatus->setText(QCoreApplication::translate("TrainControllerGUI", "Light Status: OFF", nullptr));
        doorStatus->setText(QCoreApplication::translate("TrainControllerGUI", "Door Staus: CLOSED", nullptr));
        mode->setText(QCoreApplication::translate("TrainControllerGUI", "Automatic/Manual", nullptr));
        modeStatus->setText(QCoreApplication::translate("TrainControllerGUI", "Mode: Manual", nullptr));
        emergencyBrakeLabel->setText(QCoreApplication::translate("TrainControllerGUI", "Emergency Brake", nullptr));
        passengerEmergencyBrakeLabel->setText(QCoreApplication::translate("TrainControllerGUI", "Passenger Emergency Brake", nullptr));
        brakeFailureLabel->setText(QCoreApplication::translate("TrainControllerGUI", "Brake Failure", nullptr));
        signalPickupFailureLabel->setText(QCoreApplication::translate("TrainControllerGUI", "Signal Pickup Failure", nullptr));
        engineFailureLabel->setText(QCoreApplication::translate("TrainControllerGUI", "Engine Failure", nullptr));
        commandedSpeedLabel->setText(QCoreApplication::translate("TrainControllerGUI", "Commanded Speed", nullptr));
        eBrakeButton->setText(QCoreApplication::translate("TrainControllerGUI", "EMERGENCY BRAKE", nullptr));
        adButton->setText(QCoreApplication::translate("TrainControllerGUI", "Change Advertisement", nullptr));
        adLabel->setText(QCoreApplication::translate("TrainControllerGUI", "Current Advertisement:", nullptr));
        adLabelMovie->setText(QCoreApplication::translate("TrainControllerGUI", "Snowpeircer", nullptr));
        incTempButton->setText(QCoreApplication::translate("TrainControllerGUI", "+", nullptr));
        decTempButton->setText(QCoreApplication::translate("TrainControllerGUI", "-", nullptr));
        tempLabel->setText(QCoreApplication::translate("TrainControllerGUI", "Temperature", nullptr));
        announcementLabel->setText(QCoreApplication::translate("TrainControllerGUI", "Announcments", nullptr));
        tempSubmit->setText(QCoreApplication::translate("TrainControllerGUI", "Submit", nullptr));
        tempTextbox->setPlainText(QString());
        tempTextbox->setPlaceholderText(QCoreApplication::translate("TrainControllerGUI", "Temperature", nullptr));
        velocityLabel->setText(QCoreApplication::translate("TrainControllerGUI", "Speed", nullptr));
        kpLabel->setText(QCoreApplication::translate("TrainControllerGUI", "Kp (suggested 250)", nullptr));
        kpLabel_2->setText(QCoreApplication::translate("TrainControllerGUI", "Ki (suggested 250)", nullptr));
        kpkiSubmit->setText(QCoreApplication::translate("TrainControllerGUI", "Submit", nullptr));
        announcmentMessage->setText(QCoreApplication::translate("TrainControllerGUI", "\"Arriving at\"", nullptr));
        announcmentStation->setText(QCoreApplication::translate("TrainControllerGUI", "\"Station 1\"", nullptr));
        trainNumLabel->setText(QCoreApplication::translate("TrainControllerGUI", "Train Number:", nullptr));
        trainNumVal->setText(QCoreApplication::translate("TrainControllerGUI", "\"1\"", nullptr));
        currentAuthorityLabel->setText(QCoreApplication::translate("TrainControllerGUI", "Authority", nullptr));
        releaseServiceBrake->setText(QCoreApplication::translate("TrainControllerGUI", "Disable Serevice Brake", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TrainControllerGUI: public Ui_TrainControllerGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAINCONTROLLERGUI_H
