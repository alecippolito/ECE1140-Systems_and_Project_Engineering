/********************************************************************************
** Form generated from reading UI file 'system_centraltimer_connector.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSTEM_CENTRALTIMER_CONNECTOR_H
#define UI_SYSTEM_CENTRALTIMER_CONNECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_System_CentralTimer_Connector
{
public:
    QWidget *centralwidget;
    QPushButton *OneTimesSpeed;
    QPushButton *TenTimesSpeed;
    QLabel *label;
    QLabel *label_2;
    QLabel *TimeDisplay;
    QLabel *DayDisplay;
    QPushButton *HundredTimesSpeed;
    QPushButton *SixtyTimesSpeed;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *System_CentralTimer_Connector)
    {
        if (System_CentralTimer_Connector->objectName().isEmpty())
            System_CentralTimer_Connector->setObjectName(QString::fromUtf8("System_CentralTimer_Connector"));
        System_CentralTimer_Connector->resize(800, 600);
        centralwidget = new QWidget(System_CentralTimer_Connector);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        OneTimesSpeed = new QPushButton(centralwidget);
        OneTimesSpeed->setObjectName(QString::fromUtf8("OneTimesSpeed"));
        OneTimesSpeed->setGeometry(QRect(90, 300, 201, 31));
        TenTimesSpeed = new QPushButton(centralwidget);
        TenTimesSpeed->setObjectName(QString::fromUtf8("TenTimesSpeed"));
        TenTimesSpeed->setGeometry(QRect(480, 300, 201, 29));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 110, 63, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 160, 63, 20));
        TimeDisplay = new QLabel(centralwidget);
        TimeDisplay->setObjectName(QString::fromUtf8("TimeDisplay"));
        TimeDisplay->setGeometry(QRect(200, 160, 111, 20));
        DayDisplay = new QLabel(centralwidget);
        DayDisplay->setObjectName(QString::fromUtf8("DayDisplay"));
        DayDisplay->setGeometry(QRect(200, 110, 111, 20));
        HundredTimesSpeed = new QPushButton(centralwidget);
        HundredTimesSpeed->setObjectName(QString::fromUtf8("HundredTimesSpeed"));
        HundredTimesSpeed->setGeometry(QRect(480, 390, 191, 29));
        SixtyTimesSpeed = new QPushButton(centralwidget);
        SixtyTimesSpeed->setObjectName(QString::fromUtf8("SixtyTimesSpeed"));
        SixtyTimesSpeed->setGeometry(QRect(90, 390, 201, 29));
        System_CentralTimer_Connector->setCentralWidget(centralwidget);
        menubar = new QMenuBar(System_CentralTimer_Connector);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        System_CentralTimer_Connector->setMenuBar(menubar);
        statusbar = new QStatusBar(System_CentralTimer_Connector);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        System_CentralTimer_Connector->setStatusBar(statusbar);

        retranslateUi(System_CentralTimer_Connector);

        QMetaObject::connectSlotsByName(System_CentralTimer_Connector);
    } // setupUi

    void retranslateUi(QMainWindow *System_CentralTimer_Connector)
    {
        System_CentralTimer_Connector->setWindowTitle(QCoreApplication::translate("System_CentralTimer_Connector", "Central Timer", nullptr));
        OneTimesSpeed->setText(QCoreApplication::translate("System_CentralTimer_Connector", "1x speed", nullptr));
        TenTimesSpeed->setText(QCoreApplication::translate("System_CentralTimer_Connector", "10x speed", nullptr));
        label->setText(QCoreApplication::translate("System_CentralTimer_Connector", "Date", nullptr));
        label_2->setText(QCoreApplication::translate("System_CentralTimer_Connector", "Time", nullptr));
        TimeDisplay->setText(QString());
        DayDisplay->setText(QString());
        HundredTimesSpeed->setText(QCoreApplication::translate("System_CentralTimer_Connector", "100x speed", nullptr));
        SixtyTimesSpeed->setText(QCoreApplication::translate("System_CentralTimer_Connector", "60x speed", nullptr));
    } // retranslateUi

};

namespace Ui {
    class System_CentralTimer_Connector: public Ui_System_CentralTimer_Connector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSTEM_CENTRALTIMER_CONNECTOR_H
