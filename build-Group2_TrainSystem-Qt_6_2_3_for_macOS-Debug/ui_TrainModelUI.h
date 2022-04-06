/********************************************************************************
** Form generated from reading UI file 'TrainModelUI.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRAINMODELUI_H
#define UI_TRAINMODELUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_13;
    QLabel *numCarsLabel;
    QLabel *lengthLabel;
    QLabel *widthLabel;
    QLabel *heightLabel;
    QLabel *passengerCountLabel;
    QLabel *crewCountLabel;
    QLabel *weightLabel;
    QLabel *leftDoorsLabel;
    QLabel *lightsLabel;
    QLabel *rightDoorsLabel;
    QLabel *temperatureLabel;
    QLabel *intercomLabel;
    QPushButton *EmergencyBrakeButton;
    QPushButton *BrakeFailureButton;
    QPushButton *SignalPickupFailureButton;
    QPushButton *EngineFailureButton;
    QGraphicsView *BrakeFailureStatusLight;
    QGraphicsView *EngineFailureStatusLight;
    QGraphicsView *SignalPickupFailureStatusLight;
    QGraphicsView *EmergencyBrakeStatusLight;
    QLabel *label_12;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *destinationLabel;
    QLabel *currentBlockLabel;
    QLabel *nextBlockLabel;
    QLabel *label_17;
    QLabel *powerLabel;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *velocityLabel;
    QLabel *accelerationLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(460, 0, 231, 541));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setHorizontalSpacing(50);
        formLayout->setVerticalSpacing(22);
        formLayout->setContentsMargins(0, 5, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFrameShape(QFrame::WinPanel);
        label->setFrameShadow(QFrame::Plain);
        label->setLineWidth(1);
        label->setMidLineWidth(0);
        label->setScaledContents(false);
        label->setWordWrap(false);
        label->setMargin(2);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFrameShape(QFrame::WinPanel);
        label_2->setMargin(2);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFrameShape(QFrame::WinPanel);
        label_3->setMargin(2);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFrameShape(QFrame::WinPanel);
        label_4->setMargin(2);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFrameShape(QFrame::WinPanel);
        label_5->setMargin(2);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFrameShape(QFrame::WinPanel);
        label_6->setMargin(2);

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFrameShape(QFrame::WinPanel);
        label_7->setMargin(2);

        formLayout->setWidget(6, QFormLayout::LabelRole, label_7);

        label_8 = new QLabel(formLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFrameShape(QFrame::WinPanel);
        label_8->setMargin(2);

        formLayout->setWidget(7, QFormLayout::LabelRole, label_8);

        label_9 = new QLabel(formLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFrameShape(QFrame::WinPanel);
        label_9->setMargin(2);

        formLayout->setWidget(8, QFormLayout::LabelRole, label_9);

        label_10 = new QLabel(formLayoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFrameShape(QFrame::WinPanel);
        label_10->setMargin(2);

        formLayout->setWidget(9, QFormLayout::LabelRole, label_10);

        label_11 = new QLabel(formLayoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFrameShape(QFrame::WinPanel);
        label_11->setMargin(2);

        formLayout->setWidget(10, QFormLayout::LabelRole, label_11);

        label_13 = new QLabel(formLayoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFrameShape(QFrame::WinPanel);
        label_13->setMargin(2);

        formLayout->setWidget(11, QFormLayout::LabelRole, label_13);

        numCarsLabel = new QLabel(formLayoutWidget);
        numCarsLabel->setObjectName(QString::fromUtf8("numCarsLabel"));

        formLayout->setWidget(0, QFormLayout::FieldRole, numCarsLabel);

        lengthLabel = new QLabel(formLayoutWidget);
        lengthLabel->setObjectName(QString::fromUtf8("lengthLabel"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lengthLabel);

        widthLabel = new QLabel(formLayoutWidget);
        widthLabel->setObjectName(QString::fromUtf8("widthLabel"));

        formLayout->setWidget(2, QFormLayout::FieldRole, widthLabel);

        heightLabel = new QLabel(formLayoutWidget);
        heightLabel->setObjectName(QString::fromUtf8("heightLabel"));

        formLayout->setWidget(3, QFormLayout::FieldRole, heightLabel);

        passengerCountLabel = new QLabel(formLayoutWidget);
        passengerCountLabel->setObjectName(QString::fromUtf8("passengerCountLabel"));

        formLayout->setWidget(4, QFormLayout::FieldRole, passengerCountLabel);

        crewCountLabel = new QLabel(formLayoutWidget);
        crewCountLabel->setObjectName(QString::fromUtf8("crewCountLabel"));

        formLayout->setWidget(5, QFormLayout::FieldRole, crewCountLabel);

        weightLabel = new QLabel(formLayoutWidget);
        weightLabel->setObjectName(QString::fromUtf8("weightLabel"));

        formLayout->setWidget(6, QFormLayout::FieldRole, weightLabel);

        leftDoorsLabel = new QLabel(formLayoutWidget);
        leftDoorsLabel->setObjectName(QString::fromUtf8("leftDoorsLabel"));

        formLayout->setWidget(7, QFormLayout::FieldRole, leftDoorsLabel);

        lightsLabel = new QLabel(formLayoutWidget);
        lightsLabel->setObjectName(QString::fromUtf8("lightsLabel"));

        formLayout->setWidget(9, QFormLayout::FieldRole, lightsLabel);

        rightDoorsLabel = new QLabel(formLayoutWidget);
        rightDoorsLabel->setObjectName(QString::fromUtf8("rightDoorsLabel"));

        formLayout->setWidget(8, QFormLayout::FieldRole, rightDoorsLabel);

        temperatureLabel = new QLabel(formLayoutWidget);
        temperatureLabel->setObjectName(QString::fromUtf8("temperatureLabel"));

        formLayout->setWidget(10, QFormLayout::FieldRole, temperatureLabel);

        intercomLabel = new QLabel(formLayoutWidget);
        intercomLabel->setObjectName(QString::fromUtf8("intercomLabel"));

        formLayout->setWidget(11, QFormLayout::FieldRole, intercomLabel);

        EmergencyBrakeButton = new QPushButton(centralwidget);
        EmergencyBrakeButton->setObjectName(QString::fromUtf8("EmergencyBrakeButton"));
        EmergencyBrakeButton->setGeometry(QRect(20, 460, 221, 61));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        EmergencyBrakeButton->setPalette(palette);
        EmergencyBrakeButton->setCursor(QCursor(Qt::PointingHandCursor));
        EmergencyBrakeButton->setAutoFillBackground(false);
        EmergencyBrakeButton->setStyleSheet(QString::fromUtf8("background-color: red;\n"
"font: 16pt \"Times New Roman\";\n"
"font-weight: bold;"));
        BrakeFailureButton = new QPushButton(centralwidget);
        BrakeFailureButton->setObjectName(QString::fromUtf8("BrakeFailureButton"));
        BrakeFailureButton->setGeometry(QRect(60, 300, 141, 41));
        SignalPickupFailureButton = new QPushButton(centralwidget);
        SignalPickupFailureButton->setObjectName(QString::fromUtf8("SignalPickupFailureButton"));
        SignalPickupFailureButton->setGeometry(QRect(60, 350, 141, 41));
        EngineFailureButton = new QPushButton(centralwidget);
        EngineFailureButton->setObjectName(QString::fromUtf8("EngineFailureButton"));
        EngineFailureButton->setGeometry(QRect(60, 400, 141, 41));
        BrakeFailureStatusLight = new QGraphicsView(centralwidget);
        BrakeFailureStatusLight->setObjectName(QString::fromUtf8("BrakeFailureStatusLight"));
        BrakeFailureStatusLight->setGeometry(QRect(280, 310, 20, 21));
        BrakeFailureStatusLight->setStyleSheet(QString::fromUtf8("color:red;"));
        EngineFailureStatusLight = new QGraphicsView(centralwidget);
        EngineFailureStatusLight->setObjectName(QString::fromUtf8("EngineFailureStatusLight"));
        EngineFailureStatusLight->setGeometry(QRect(280, 410, 20, 21));
        EngineFailureStatusLight->setStyleSheet(QString::fromUtf8("color:red;"));
        SignalPickupFailureStatusLight = new QGraphicsView(centralwidget);
        SignalPickupFailureStatusLight->setObjectName(QString::fromUtf8("SignalPickupFailureStatusLight"));
        SignalPickupFailureStatusLight->setGeometry(QRect(280, 360, 20, 21));
        SignalPickupFailureStatusLight->setStyleSheet(QString::fromUtf8("color:red;"));
        EmergencyBrakeStatusLight = new QGraphicsView(centralwidget);
        EmergencyBrakeStatusLight->setObjectName(QString::fromUtf8("EmergencyBrakeStatusLight"));
        EmergencyBrakeStatusLight->setGeometry(QRect(280, 480, 20, 21));
        EmergencyBrakeStatusLight->setStyleSheet(QString::fromUtf8("color:red;"));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(270, 270, 51, 16));
        QFont font;
        font.setPointSize(18);
        font.setBold(false);
        font.setItalic(false);
        label_12->setFont(font);
        label_12->setStyleSheet(QString::fromUtf8("font: 18pt \"Times New Roman\";"));
        formLayoutWidget_2 = new QWidget(centralwidget);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(40, 10, 202, 290));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setHorizontalSpacing(30);
        formLayout_2->setVerticalSpacing(20);
        formLayout_2->setContentsMargins(10, 10, 10, 10);
        label_14 = new QLabel(formLayoutWidget_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFrameShape(QFrame::WinPanel);
        label_14->setMargin(4);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_14);

        label_15 = new QLabel(formLayoutWidget_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFrameShape(QFrame::WinPanel);
        label_15->setMargin(4);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_15);

        label_16 = new QLabel(formLayoutWidget_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFrameShape(QFrame::WinPanel);
        label_16->setMargin(4);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_16);

        destinationLabel = new QLabel(formLayoutWidget_2);
        destinationLabel->setObjectName(QString::fromUtf8("destinationLabel"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, destinationLabel);

        currentBlockLabel = new QLabel(formLayoutWidget_2);
        currentBlockLabel->setObjectName(QString::fromUtf8("currentBlockLabel"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, currentBlockLabel);

        nextBlockLabel = new QLabel(formLayoutWidget_2);
        nextBlockLabel->setObjectName(QString::fromUtf8("nextBlockLabel"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, nextBlockLabel);

        label_17 = new QLabel(formLayoutWidget_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setFrameShape(QFrame::WinPanel);
        label_17->setMargin(5);

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_17);

        powerLabel = new QLabel(formLayoutWidget_2);
        powerLabel->setObjectName(QString::fromUtf8("powerLabel"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, powerLabel);

        label_19 = new QLabel(formLayoutWidget_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setFrameShape(QFrame::WinPanel);
        label_19->setMargin(4);

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_19);

        label_20 = new QLabel(formLayoutWidget_2);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setFrameShape(QFrame::WinPanel);
        label_20->setMargin(4);

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label_20);

        velocityLabel = new QLabel(formLayoutWidget_2);
        velocityLabel->setObjectName(QString::fromUtf8("velocityLabel"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, velocityLabel);

        accelerationLabel = new QLabel(formLayoutWidget_2);
        accelerationLabel->setObjectName(QString::fromUtf8("accelerationLabel"));

        formLayout_2->setWidget(5, QFormLayout::FieldRole, accelerationLabel);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Number of Cars", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Length", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Width", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Height", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Passengers", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Crew Count", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Weight", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Left Doors", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Right Doors", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Lights", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Temperature", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Intercom", nullptr));
        numCarsLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lengthLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        widthLabel->setText(QCoreApplication::translate("MainWindow", "3.42", nullptr));
        heightLabel->setText(QCoreApplication::translate("MainWindow", "2.65", nullptr));
        passengerCountLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        crewCountLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        weightLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        leftDoorsLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lightsLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        rightDoorsLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        temperatureLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        intercomLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        EmergencyBrakeButton->setText(QCoreApplication::translate("MainWindow", "EMERGENCY BRAKE", nullptr));
        BrakeFailureButton->setText(QCoreApplication::translate("MainWindow", "Brake Failure", nullptr));
        SignalPickupFailureButton->setText(QCoreApplication::translate("MainWindow", "Signal Pickup Failure", nullptr));
        EngineFailureButton->setText(QCoreApplication::translate("MainWindow", "Engine Failure", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Status", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Destination", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Current Block", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Next Block", nullptr));
        destinationLabel->setText(QCoreApplication::translate("MainWindow", "Dormont", nullptr));
        currentBlockLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        nextBlockLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Power", nullptr));
        powerLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Velocity", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Acceleration", nullptr));
        velocityLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        accelerationLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAINMODELUI_H
