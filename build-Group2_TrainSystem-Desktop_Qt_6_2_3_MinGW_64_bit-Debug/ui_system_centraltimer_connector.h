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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_System_CentralTimer_Connector
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *System_CentralTimer_Connector)
    {
        if (System_CentralTimer_Connector->objectName().isEmpty())
            System_CentralTimer_Connector->setObjectName(QString::fromUtf8("System_CentralTimer_Connector"));
        System_CentralTimer_Connector->resize(800, 600);
        centralwidget = new QWidget(System_CentralTimer_Connector);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
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
    } // retranslateUi

};

namespace Ui {
    class System_CentralTimer_Connector: public Ui_System_CentralTimer_Connector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSTEM_CENTRALTIMER_CONNECTOR_H
