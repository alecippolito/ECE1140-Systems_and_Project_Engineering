/********************************************************************************
** Form generated from reading UI file 'ctc_mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTC_MAINWINDOW_H
#define UI_CTC_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CTC_MainWindow
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CTC_MainWindow)
    {
        if (CTC_MainWindow->objectName().isEmpty())
            CTC_MainWindow->setObjectName(QString::fromUtf8("CTC_MainWindow"));
        CTC_MainWindow->resize(800, 600);
        menubar = new QMenuBar(CTC_MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        CTC_MainWindow->setMenuBar(menubar);
        centralwidget = new QWidget(CTC_MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        CTC_MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(CTC_MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        CTC_MainWindow->setStatusBar(statusbar);

        retranslateUi(CTC_MainWindow);

        QMetaObject::connectSlotsByName(CTC_MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *CTC_MainWindow)
    {
        CTC_MainWindow->setWindowTitle(QCoreApplication::translate("CTC_MainWindow", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CTC_MainWindow: public Ui_CTC_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTC_MAINWINDOW_H
