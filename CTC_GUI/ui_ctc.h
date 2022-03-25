/********************************************************************************
** Form generated from reading UI file 'ctc.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTC_H
#define UI_CTC_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CTC
{
public:
    QAction *actionView_Train_Statuses;
    QAction *actionDispatch_Train;
    QAction *actionOpen_Close_Track;
    QAction *actionView_Red_Line_Status;
    QAction *actionClear;
    QAction *actionView_Green_Line_Status;
    QAction *actionManual;
    QAction *actionAutomatic;
    QAction *actionView;
    QAction *actionUpdate;
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *previousButton;
    QPushButton *nextButton;
    QMenuBar *menubar;
    QMenu *menuTrack;
    QMenu *menuSet_Authority;
    QMenu *menuView;
    QMenu *menuMode;
    QMenu *menuSchedule;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CTC)
    {
        if (CTC->objectName().isEmpty())
            CTC->setObjectName(QString::fromUtf8("CTC"));
        CTC->resize(1012, 633);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CTC->sizePolicy().hasHeightForWidth());
        CTC->setSizePolicy(sizePolicy);
        actionView_Train_Statuses = new QAction(CTC);
        actionView_Train_Statuses->setObjectName(QString::fromUtf8("actionView_Train_Statuses"));
        actionDispatch_Train = new QAction(CTC);
        actionDispatch_Train->setObjectName(QString::fromUtf8("actionDispatch_Train"));
        actionOpen_Close_Track = new QAction(CTC);
        actionOpen_Close_Track->setObjectName(QString::fromUtf8("actionOpen_Close_Track"));
        actionView_Red_Line_Status = new QAction(CTC);
        actionView_Red_Line_Status->setObjectName(QString::fromUtf8("actionView_Red_Line_Status"));
        actionClear = new QAction(CTC);
        actionClear->setObjectName(QString::fromUtf8("actionClear"));
        actionView_Green_Line_Status = new QAction(CTC);
        actionView_Green_Line_Status->setObjectName(QString::fromUtf8("actionView_Green_Line_Status"));
        actionManual = new QAction(CTC);
        actionManual->setObjectName(QString::fromUtf8("actionManual"));
        actionManual->setCheckable(true);
        actionManual->setChecked(true);
        actionAutomatic = new QAction(CTC);
        actionAutomatic->setObjectName(QString::fromUtf8("actionAutomatic"));
        actionAutomatic->setCheckable(true);
        actionView = new QAction(CTC);
        actionView->setObjectName(QString::fromUtf8("actionView"));
        actionUpdate = new QAction(CTC);
        actionUpdate->setObjectName(QString::fromUtf8("actionUpdate"));
        centralwidget = new QWidget(CTC);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 60, 351, 21));
        QFont font;
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(11, 86, 981, 411));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        previousButton = new QPushButton(centralwidget);
        previousButton->setObjectName(QString::fromUtf8("previousButton"));
        previousButton->setGeometry(QRect(10, 520, 93, 29));
        nextButton = new QPushButton(centralwidget);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));
        nextButton->setGeometry(QRect(890, 510, 93, 29));
        CTC->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CTC);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1012, 26));
        menuTrack = new QMenu(menubar);
        menuTrack->setObjectName(QString::fromUtf8("menuTrack"));
        menuSet_Authority = new QMenu(menubar);
        menuSet_Authority->setObjectName(QString::fromUtf8("menuSet_Authority"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuMode = new QMenu(menubar);
        menuMode->setObjectName(QString::fromUtf8("menuMode"));
        menuSchedule = new QMenu(menubar);
        menuSchedule->setObjectName(QString::fromUtf8("menuSchedule"));
        CTC->setMenuBar(menubar);
        statusbar = new QStatusBar(CTC);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        CTC->setStatusBar(statusbar);

        menubar->addAction(menuTrack->menuAction());
        menubar->addAction(menuSet_Authority->menuAction());
        menubar->addAction(menuMode->menuAction());
        menubar->addAction(menuSchedule->menuAction());
        menubar->addAction(menuView->menuAction());
        menuTrack->addAction(actionOpen_Close_Track);
        menuSet_Authority->addAction(actionDispatch_Train);
        menuView->addAction(actionView_Train_Statuses);
        menuView->addAction(actionView_Red_Line_Status);
        menuView->addAction(actionView_Green_Line_Status);
        menuView->addAction(actionClear);
        menuMode->addAction(actionManual);
        menuMode->addAction(actionAutomatic);
        menuSchedule->addAction(actionView);
        menuSchedule->addAction(actionUpdate);

        retranslateUi(CTC);

        QMetaObject::connectSlotsByName(CTC);
    } // setupUi

    void retranslateUi(QMainWindow *CTC)
    {
        CTC->setWindowTitle(QCoreApplication::translate("CTC", "CTC", nullptr));
        actionView_Train_Statuses->setText(QCoreApplication::translate("CTC", "View Train Statuses", nullptr));
        actionDispatch_Train->setText(QCoreApplication::translate("CTC", "Dispatch Train", nullptr));
        actionOpen_Close_Track->setText(QCoreApplication::translate("CTC", "Open/ Close Track", nullptr));
        actionView_Red_Line_Status->setText(QCoreApplication::translate("CTC", "View Red Line Status", nullptr));
        actionClear->setText(QCoreApplication::translate("CTC", "Clear", nullptr));
        actionView_Green_Line_Status->setText(QCoreApplication::translate("CTC", "View Green Line Status", nullptr));
        actionManual->setText(QCoreApplication::translate("CTC", "Manual", nullptr));
        actionAutomatic->setText(QCoreApplication::translate("CTC", "Automatic", nullptr));
        actionView->setText(QCoreApplication::translate("CTC", "View", nullptr));
        actionUpdate->setText(QCoreApplication::translate("CTC", "Update", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        previousButton->setText(QCoreApplication::translate("CTC", "<-- Previous", nullptr));
        nextButton->setText(QCoreApplication::translate("CTC", "Next -->", nullptr));
        menuTrack->setTitle(QCoreApplication::translate("CTC", "Track Controls", nullptr));
        menuSet_Authority->setTitle(QCoreApplication::translate("CTC", "Set Authority", nullptr));
        menuView->setTitle(QCoreApplication::translate("CTC", "View", nullptr));
        menuMode->setTitle(QCoreApplication::translate("CTC", "Mode", nullptr));
        menuSchedule->setTitle(QCoreApplication::translate("CTC", "Schedule", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CTC: public Ui_CTC {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTC_H
