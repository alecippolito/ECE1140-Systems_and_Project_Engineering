/********************************************************************************
** Form generated from reading UI file 'ctc_mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTC_MAINWINDOW_H
#define UI_CTC_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CTC_MainWindow
{
public:
    QAction *actionOpen_Close_Track;
    QAction *actionManual;
    QAction *actionAutomatic;
    QAction *actionDispatch_Train;
    QAction *actionView_Green_Line_Statuses;
    QAction *actionView_Red_Line_Statuses;
    QAction *actionView_Train_Statuses;
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *previousButton;
    QPushButton *NextButton;
    QLabel *TimeStatement;
    QLabel *DayLabel;
    QLabel *TimeLabel;
    QMenuBar *menubar;
    QMenu *menuEdit_Track;
    QMenu *menuDispatch;
    QMenu *menuView;
    QMenu *menuSchedule;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CTC_MainWindow)
    {
        if (CTC_MainWindow->objectName().isEmpty())
            CTC_MainWindow->setObjectName(QString::fromUtf8("CTC_MainWindow"));
        CTC_MainWindow->resize(821, 656);
        actionOpen_Close_Track = new QAction(CTC_MainWindow);
        actionOpen_Close_Track->setObjectName(QString::fromUtf8("actionOpen_Close_Track"));
        actionManual = new QAction(CTC_MainWindow);
        actionManual->setObjectName(QString::fromUtf8("actionManual"));
        actionAutomatic = new QAction(CTC_MainWindow);
        actionAutomatic->setObjectName(QString::fromUtf8("actionAutomatic"));
        actionDispatch_Train = new QAction(CTC_MainWindow);
        actionDispatch_Train->setObjectName(QString::fromUtf8("actionDispatch_Train"));
        actionView_Green_Line_Statuses = new QAction(CTC_MainWindow);
        actionView_Green_Line_Statuses->setObjectName(QString::fromUtf8("actionView_Green_Line_Statuses"));
        actionView_Red_Line_Statuses = new QAction(CTC_MainWindow);
        actionView_Red_Line_Statuses->setObjectName(QString::fromUtf8("actionView_Red_Line_Statuses"));
        actionView_Train_Statuses = new QAction(CTC_MainWindow);
        actionView_Train_Statuses->setObjectName(QString::fromUtf8("actionView_Train_Statuses"));
        centralwidget = new QWidget(CTC_MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 70, 211, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 100, 751, 431));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        previousButton = new QPushButton(centralwidget);
        previousButton->setObjectName(QString::fromUtf8("previousButton"));
        previousButton->setGeometry(QRect(10, 570, 93, 29));
        NextButton = new QPushButton(centralwidget);
        NextButton->setObjectName(QString::fromUtf8("NextButton"));
        NextButton->setGeometry(QRect(710, 570, 93, 29));
        TimeStatement = new QLabel(centralwidget);
        TimeStatement->setObjectName(QString::fromUtf8("TimeStatement"));
        TimeStatement->setGeometry(QRect(640, 10, 101, 20));
        DayLabel = new QLabel(centralwidget);
        DayLabel->setObjectName(QString::fromUtf8("DayLabel"));
        DayLabel->setGeometry(QRect(640, 30, 101, 20));
        TimeLabel = new QLabel(centralwidget);
        TimeLabel->setObjectName(QString::fromUtf8("TimeLabel"));
        TimeLabel->setGeometry(QRect(640, 50, 63, 20));
        CTC_MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CTC_MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 821, 26));
        menuEdit_Track = new QMenu(menubar);
        menuEdit_Track->setObjectName(QString::fromUtf8("menuEdit_Track"));
        menuDispatch = new QMenu(menubar);
        menuDispatch->setObjectName(QString::fromUtf8("menuDispatch"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuSchedule = new QMenu(menubar);
        menuSchedule->setObjectName(QString::fromUtf8("menuSchedule"));
        CTC_MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(CTC_MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        CTC_MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuEdit_Track->menuAction());
        menubar->addAction(menuDispatch->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuSchedule->menuAction());
        menuEdit_Track->addAction(actionOpen_Close_Track);
        menuDispatch->addAction(actionDispatch_Train);
        menuView->addAction(actionView_Green_Line_Statuses);
        menuView->addAction(actionView_Red_Line_Statuses);
        menuView->addAction(actionView_Train_Statuses);
        menuSchedule->addAction(actionManual);
        menuSchedule->addAction(actionAutomatic);

        retranslateUi(CTC_MainWindow);

        QMetaObject::connectSlotsByName(CTC_MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *CTC_MainWindow)
    {
        CTC_MainWindow->setWindowTitle(QCoreApplication::translate("CTC_MainWindow", "CTC main window", nullptr));
        actionOpen_Close_Track->setText(QCoreApplication::translate("CTC_MainWindow", "Open/ Close Track", nullptr));
        actionManual->setText(QCoreApplication::translate("CTC_MainWindow", "Manual", nullptr));
        actionAutomatic->setText(QCoreApplication::translate("CTC_MainWindow", "Automatic", nullptr));
        actionDispatch_Train->setText(QCoreApplication::translate("CTC_MainWindow", "Dispatch Train", nullptr));
        actionView_Green_Line_Statuses->setText(QCoreApplication::translate("CTC_MainWindow", "View Green Line Statuses", nullptr));
        actionView_Red_Line_Statuses->setText(QCoreApplication::translate("CTC_MainWindow", "View Red Line Statuses", nullptr));
        actionView_Train_Statuses->setText(QCoreApplication::translate("CTC_MainWindow", "View Train Statuses", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        previousButton->setText(QCoreApplication::translate("CTC_MainWindow", "<-- Previous", nullptr));
        NextButton->setText(QCoreApplication::translate("CTC_MainWindow", "Next -->", nullptr));
        TimeStatement->setText(QCoreApplication::translate("CTC_MainWindow", "Current Time:", nullptr));
        DayLabel->setText(QString());
        TimeLabel->setText(QString());
        menuEdit_Track->setTitle(QCoreApplication::translate("CTC_MainWindow", "Edit Track", nullptr));
        menuDispatch->setTitle(QCoreApplication::translate("CTC_MainWindow", "Dispatch", nullptr));
        menuView->setTitle(QCoreApplication::translate("CTC_MainWindow", "View", nullptr));
        menuSchedule->setTitle(QCoreApplication::translate("CTC_MainWindow", "Schedule", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CTC_MainWindow: public Ui_CTC_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTC_MAINWINDOW_H
