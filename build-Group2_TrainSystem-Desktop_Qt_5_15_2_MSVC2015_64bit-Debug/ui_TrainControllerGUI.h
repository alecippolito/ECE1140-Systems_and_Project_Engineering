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
    QLabel *eBrakeStatus;
    QPushButton *eBrakeButton;
    QPlainTextEdit *kpTextbox;
    QPlainTextEdit *kiTextbox;
    QPushButton *submit;
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
        incSpeed->setGeometry(QRect(20, 10, 231, 121));
        decSpeed = new QPushButton(centralwidget);
        decSpeed->setObjectName(QString::fromUtf8("decSpeed"));
        decSpeed->setGeometry(QRect(20, 150, 231, 111));
        currentSetpoint = new QLCDNumber(centralwidget);
        currentSetpoint->setObjectName(QString::fromUtf8("currentSetpoint"));
        currentSetpoint->setGeometry(QRect(280, 10, 161, 201));
        doorButton = new QPushButton(centralwidget);
        doorButton->setObjectName(QString::fromUtf8("doorButton"));
        doorButton->setGeometry(QRect(20, 270, 231, 101));
        lightButton = new QPushButton(centralwidget);
        lightButton->setObjectName(QString::fromUtf8("lightButton"));
        lightButton->setGeometry(QRect(20, 450, 231, 101));
        serviceBrake = new QPushButton(centralwidget);
        serviceBrake->setObjectName(QString::fromUtf8("serviceBrake"));
        serviceBrake->setGeometry(QRect(470, 100, 311, 81));
        speedLabel = new QLabel(centralwidget);
        speedLabel->setObjectName(QString::fromUtf8("speedLabel"));
        speedLabel->setGeometry(QRect(340, 200, 91, 51));
        currentPower = new QLCDNumber(centralwidget);
        currentPower->setObjectName(QString::fromUtf8("currentPower"));
        currentPower->setGeometry(QRect(290, 240, 161, 201));
        powerLabel = new QLabel(centralwidget);
        powerLabel->setObjectName(QString::fromUtf8("powerLabel"));
        powerLabel->setGeometry(QRect(340, 470, 81, 31));
        lightStatus = new QLabel(centralwidget);
        lightStatus->setObjectName(QString::fromUtf8("lightStatus"));
        lightStatus->setGeometry(QRect(30, 410, 211, 31));
        doorStatus = new QLabel(centralwidget);
        doorStatus->setObjectName(QString::fromUtf8("doorStatus"));
        doorStatus->setGeometry(QRect(20, 370, 251, 31));
        mode = new QPushButton(centralwidget);
        mode->setObjectName(QString::fromUtf8("mode"));
        mode->setGeometry(QRect(470, 220, 311, 61));
        modeStatus = new QLabel(centralwidget);
        modeStatus->setObjectName(QString::fromUtf8("modeStatus"));
        modeStatus->setGeometry(QRect(480, 290, 281, 21));
        eBrakeStatus = new QLabel(centralwidget);
        eBrakeStatus->setObjectName(QString::fromUtf8("eBrakeStatus"));
        eBrakeStatus->setGeometry(QRect(470, 180, 311, 31));
        eBrakeButton = new QPushButton(centralwidget);
        eBrakeButton->setObjectName(QString::fromUtf8("eBrakeButton"));
        eBrakeButton->setGeometry(QRect(470, 10, 311, 71));
        kpTextbox = new QPlainTextEdit(centralwidget);
        kpTextbox->setObjectName(QString::fromUtf8("kpTextbox"));
        kpTextbox->setGeometry(QRect(480, 430, 101, 51));
        kiTextbox = new QPlainTextEdit(centralwidget);
        kiTextbox->setObjectName(QString::fromUtf8("kiTextbox"));
        kiTextbox->setGeometry(QRect(480, 490, 101, 51));
        submit = new QPushButton(centralwidget);
        submit->setObjectName(QString::fromUtf8("submit"));
        submit->setGeometry(QRect(480, 380, 101, 41));
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
        incSpeed->setText(QCoreApplication::translate("TrainControllerGUI", "Inccrese Speed", nullptr));
        decSpeed->setText(QCoreApplication::translate("TrainControllerGUI", "Decrease Speed", nullptr));
        doorButton->setText(QCoreApplication::translate("TrainControllerGUI", "Open/Close Door", nullptr));
        lightButton->setText(QCoreApplication::translate("TrainControllerGUI", "Lights On/Off", nullptr));
        serviceBrake->setText(QCoreApplication::translate("TrainControllerGUI", "Brake", nullptr));
        speedLabel->setText(QCoreApplication::translate("TrainControllerGUI", " Speed", nullptr));
        powerLabel->setText(QCoreApplication::translate("TrainControllerGUI", "Power", nullptr));
        lightStatus->setText(QCoreApplication::translate("TrainControllerGUI", "Light Staus: OFF", nullptr));
        doorStatus->setText(QCoreApplication::translate("TrainControllerGUI", "Door Staus: CLOSED", nullptr));
        mode->setText(QCoreApplication::translate("TrainControllerGUI", "Automatic/Manual", nullptr));
        modeStatus->setText(QCoreApplication::translate("TrainControllerGUI", "Mode: Manual", nullptr));
        eBrakeStatus->setText(QCoreApplication::translate("TrainControllerGUI", "E-Brake Status: OFF", nullptr));
        eBrakeButton->setText(QCoreApplication::translate("TrainControllerGUI", "E-Brake", nullptr));
        kpTextbox->setPlainText(QCoreApplication::translate("TrainControllerGUI", "Kp", nullptr));
        kiTextbox->setPlainText(QCoreApplication::translate("TrainControllerGUI", "Ki", nullptr));
        submit->setText(QCoreApplication::translate("TrainControllerGUI", "Submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TrainControllerGUI: public Ui_TrainControllerGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAINCONTROLLERGUI_H
