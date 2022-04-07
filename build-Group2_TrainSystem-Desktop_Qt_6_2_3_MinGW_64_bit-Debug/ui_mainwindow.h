/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *Upload_PLC;
    QLabel *label;
    QLCDNumber *currentBlockVal;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_6;
    QLCDNumber *lcdNumber_2;
    QLabel *label_7;
    QLCDNumber *lcdNumber_3;
    QLabel *label_8;
    QLCDNumber *lcdNumber_4;
    QLabel *label_9;
    QLCDNumber *lcdNumber_5;
    QLabel *label_10;
    QLCDNumber *lcdNumber_6;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_4;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QMenuBar *menubar;
    QMenu *menuWayside_Controller;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        QFont font;
        font.setBold(false);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Upload_PLC = new QPushButton(centralwidget);
        Upload_PLC->setObjectName(QString::fromUtf8("Upload_PLC"));
        Upload_PLC->setGeometry(QRect(70, 280, 80, 24));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(360, 230, 81, 16));
        label->setFont(font);
        currentBlockVal = new QLCDNumber(centralwidget);
        currentBlockVal->setObjectName(QString::fromUtf8("currentBlockVal"));
        currentBlockVal->setGeometry(QRect(530, 230, 51, 21));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(208, 208, 208, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        QBrush brush2(QColor(64, 65, 66, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        QBrush brush3(QColor(164, 166, 168, 96));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        currentBlockVal->setPalette(palette);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Source Serif Pro Black")});
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(true);
        currentBlockVal->setFont(font1);
        currentBlockVal->setAutoFillBackground(false);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 70, 91, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(200, 70, 141, 16));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 110, 71, 16));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(360, 30, 91, 16));
        lcdNumber_2 = new QLCDNumber(centralwidget);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));
        lcdNumber_2->setGeometry(QRect(530, 30, 51, 21));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(360, 70, 81, 16));
        lcdNumber_3 = new QLCDNumber(centralwidget);
        lcdNumber_3->setObjectName(QString::fromUtf8("lcdNumber_3"));
        lcdNumber_3->setGeometry(QRect(530, 70, 51, 21));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(370, 110, 71, 16));
        lcdNumber_4 = new QLCDNumber(centralwidget);
        lcdNumber_4->setObjectName(QString::fromUtf8("lcdNumber_4"));
        lcdNumber_4->setGeometry(QRect(530, 110, 51, 21));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(370, 150, 61, 16));
        lcdNumber_5 = new QLCDNumber(centralwidget);
        lcdNumber_5->setObjectName(QString::fromUtf8("lcdNumber_5"));
        lcdNumber_5->setGeometry(QRect(530, 150, 51, 21));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(350, 190, 111, 16));
        lcdNumber_6 = new QLCDNumber(centralwidget);
        lcdNumber_6->setObjectName(QString::fromUtf8("lcdNumber_6"));
        lcdNumber_6->setGeometry(QRect(530, 190, 51, 21));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(40, 30, 101, 16));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(40, 150, 81, 16));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(200, 150, 49, 16));
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(30, 190, 111, 16));
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(200, 190, 49, 20));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 230, 71, 20));
        label_16 = new QLabel(centralwidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(200, 230, 49, 20));
        label_17 = new QLabel(centralwidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(200, 110, 81, 16));
        label_18 = new QLabel(centralwidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(200, 30, 49, 16));
        MainWindow->setCentralWidget(centralwidget);
        Upload_PLC->raise();
        label->raise();
        currentBlockVal->raise();
        label_2->raise();
        label_3->raise();
        label_5->raise();
        label_6->raise();
        lcdNumber_2->raise();
        label_7->raise();
        lcdNumber_3->raise();
        label_8->raise();
        label_9->raise();
        lcdNumber_4->raise();
        lcdNumber_5->raise();
        label_10->raise();
        lcdNumber_6->raise();
        label_11->raise();
        label_12->raise();
        label_13->raise();
        label_14->raise();
        label_15->raise();
        label_4->raise();
        label_16->raise();
        label_17->raise();
        label_18->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuWayside_Controller = new QMenu(menubar);
        menuWayside_Controller->setObjectName(QString::fromUtf8("menuWayside_Controller"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuWayside_Controller->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Upload_PLC->setText(QCoreApplication::translate("MainWindow", "Upload_PLC", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Current_block", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Switch_poistion", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Track status", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Suggested speed", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Train_presence", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Speed Limit", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Authority", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Commanded speed", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Railway_crossbar", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Failure mode", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "OFF", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Maintenance mode", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "OFF", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Track signal", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "OFF", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Good", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        menuWayside_Controller->setTitle(QCoreApplication::translate("MainWindow", "Wayside Controller", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
