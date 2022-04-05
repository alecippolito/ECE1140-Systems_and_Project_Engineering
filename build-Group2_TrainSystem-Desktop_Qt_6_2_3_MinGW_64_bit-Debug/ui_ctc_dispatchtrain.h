/********************************************************************************
** Form generated from reading UI file 'ctc_dispatchtrain.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTC_DISPATCHTRAIN_H
#define UI_CTC_DISPATCHTRAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>

QT_BEGIN_NAMESPACE

class Ui_CTC_DispatchTrain
{
public:
    QLabel *DepartureTime;
    QLabel *ArriveTime;
    QTimeEdit *DepartTime;
    QTimeEdit *ArrivalTime;
    QCheckBox *DepartureCheck;
    QCheckBox *ArrivalCheck;
    QComboBox *DepartDate;
    QComboBox *ArriveDate;
    QListWidget *StationList;
    QPushButton *DispatchButton;

    void setupUi(QDialog *CTC_DispatchTrain)
    {
        if (CTC_DispatchTrain->objectName().isEmpty())
            CTC_DispatchTrain->setObjectName(QString::fromUtf8("CTC_DispatchTrain"));
        CTC_DispatchTrain->resize(475, 526);
        DepartureTime = new QLabel(CTC_DispatchTrain);
        DepartureTime->setObjectName(QString::fromUtf8("DepartureTime"));
        DepartureTime->setGeometry(QRect(80, 80, 111, 20));
        ArriveTime = new QLabel(CTC_DispatchTrain);
        ArriveTime->setObjectName(QString::fromUtf8("ArriveTime"));
        ArriveTime->setGeometry(QRect(290, 80, 121, 20));
        DepartTime = new QTimeEdit(CTC_DispatchTrain);
        DepartTime->setObjectName(QString::fromUtf8("DepartTime"));
        DepartTime->setGeometry(QRect(70, 140, 118, 26));
        ArrivalTime = new QTimeEdit(CTC_DispatchTrain);
        ArrivalTime->setObjectName(QString::fromUtf8("ArrivalTime"));
        ArrivalTime->setGeometry(QRect(270, 140, 118, 26));
        DepartureCheck = new QCheckBox(CTC_DispatchTrain);
        DepartureCheck->setObjectName(QString::fromUtf8("DepartureCheck"));
        DepartureCheck->setGeometry(QRect(50, 80, 21, 24));
        ArrivalCheck = new QCheckBox(CTC_DispatchTrain);
        ArrivalCheck->setObjectName(QString::fromUtf8("ArrivalCheck"));
        ArrivalCheck->setGeometry(QRect(260, 80, 21, 24));
        DepartDate = new QComboBox(CTC_DispatchTrain);
        DepartDate->addItem(QString());
        DepartDate->addItem(QString());
        DepartDate->addItem(QString());
        DepartDate->addItem(QString());
        DepartDate->addItem(QString());
        DepartDate->addItem(QString());
        DepartDate->addItem(QString());
        DepartDate->setObjectName(QString::fromUtf8("DepartDate"));
        DepartDate->setGeometry(QRect(70, 110, 111, 26));
        ArriveDate = new QComboBox(CTC_DispatchTrain);
        ArriveDate->addItem(QString());
        ArriveDate->addItem(QString());
        ArriveDate->addItem(QString());
        ArriveDate->addItem(QString());
        ArriveDate->addItem(QString());
        ArriveDate->addItem(QString());
        ArriveDate->addItem(QString());
        ArriveDate->setObjectName(QString::fromUtf8("ArriveDate"));
        ArriveDate->setGeometry(QRect(270, 110, 111, 26));
        StationList = new QListWidget(CTC_DispatchTrain);
        StationList->setObjectName(QString::fromUtf8("StationList"));
        StationList->setGeometry(QRect(100, 210, 256, 192));
        DispatchButton = new QPushButton(CTC_DispatchTrain);
        DispatchButton->setObjectName(QString::fromUtf8("DispatchButton"));
        DispatchButton->setGeometry(QRect(180, 430, 93, 29));

        retranslateUi(CTC_DispatchTrain);

        QMetaObject::connectSlotsByName(CTC_DispatchTrain);
    } // setupUi

    void retranslateUi(QDialog *CTC_DispatchTrain)
    {
        CTC_DispatchTrain->setWindowTitle(QCoreApplication::translate("CTC_DispatchTrain", "Dispatch Train", nullptr));
        DepartureTime->setText(QCoreApplication::translate("CTC_DispatchTrain", "Departure Time", nullptr));
        ArriveTime->setText(QCoreApplication::translate("CTC_DispatchTrain", "Arrival Time", nullptr));
        DepartureCheck->setText(QString());
        ArrivalCheck->setText(QString());
        DepartDate->setItemText(0, QCoreApplication::translate("CTC_DispatchTrain", "Monday", nullptr));
        DepartDate->setItemText(1, QCoreApplication::translate("CTC_DispatchTrain", "Tuesday", nullptr));
        DepartDate->setItemText(2, QCoreApplication::translate("CTC_DispatchTrain", "Wednesday", nullptr));
        DepartDate->setItemText(3, QCoreApplication::translate("CTC_DispatchTrain", "Thursday", nullptr));
        DepartDate->setItemText(4, QCoreApplication::translate("CTC_DispatchTrain", "Friday", nullptr));
        DepartDate->setItemText(5, QCoreApplication::translate("CTC_DispatchTrain", "Saturday", nullptr));
        DepartDate->setItemText(6, QCoreApplication::translate("CTC_DispatchTrain", "Sunday", nullptr));

        ArriveDate->setItemText(0, QCoreApplication::translate("CTC_DispatchTrain", "Monday", nullptr));
        ArriveDate->setItemText(1, QCoreApplication::translate("CTC_DispatchTrain", "Tuesday", nullptr));
        ArriveDate->setItemText(2, QCoreApplication::translate("CTC_DispatchTrain", "Wednesday", nullptr));
        ArriveDate->setItemText(3, QCoreApplication::translate("CTC_DispatchTrain", "Thursday", nullptr));
        ArriveDate->setItemText(4, QCoreApplication::translate("CTC_DispatchTrain", "Friday", nullptr));
        ArriveDate->setItemText(5, QCoreApplication::translate("CTC_DispatchTrain", "Saturday", nullptr));
        ArriveDate->setItemText(6, QCoreApplication::translate("CTC_DispatchTrain", "Sunday", nullptr));

        DispatchButton->setText(QCoreApplication::translate("CTC_DispatchTrain", "Dispatch", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CTC_DispatchTrain: public Ui_CTC_DispatchTrain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTC_DISPATCHTRAIN_H
