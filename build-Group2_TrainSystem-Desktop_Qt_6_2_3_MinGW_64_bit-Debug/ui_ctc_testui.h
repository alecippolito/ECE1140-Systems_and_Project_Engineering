/********************************************************************************
** Form generated from reading UI file 'ctc_testui.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTC_TESTUI_H
#define UI_CTC_TESTUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CTC_TestUI
{
public:
    QLabel *LocationLabel;
    QPushButton *minusButton;
    QPushButton *plusButton;
    QPushButton *newOccupancyButton;

    void setupUi(QDialog *CTC_TestUI)
    {
        if (CTC_TestUI->objectName().isEmpty())
            CTC_TestUI->setObjectName(QString::fromUtf8("CTC_TestUI"));
        CTC_TestUI->resize(424, 374);
        LocationLabel = new QLabel(CTC_TestUI);
        LocationLabel->setObjectName(QString::fromUtf8("LocationLabel"));
        LocationLabel->setGeometry(QRect(120, 70, 181, 20));
        minusButton = new QPushButton(CTC_TestUI);
        minusButton->setObjectName(QString::fromUtf8("minusButton"));
        minusButton->setGeometry(QRect(100, 100, 93, 29));
        plusButton = new QPushButton(CTC_TestUI);
        plusButton->setObjectName(QString::fromUtf8("plusButton"));
        plusButton->setGeometry(QRect(220, 100, 93, 29));
        newOccupancyButton = new QPushButton(CTC_TestUI);
        newOccupancyButton->setObjectName(QString::fromUtf8("newOccupancyButton"));
        newOccupancyButton->setGeometry(QRect(130, 140, 161, 29));

        retranslateUi(CTC_TestUI);

        QMetaObject::connectSlotsByName(CTC_TestUI);
    } // setupUi

    void retranslateUi(QDialog *CTC_TestUI)
    {
        CTC_TestUI->setWindowTitle(QCoreApplication::translate("CTC_TestUI", "CTC Test UI", nullptr));
        LocationLabel->setText(QCoreApplication::translate("CTC_TestUI", "New train location = ", nullptr));
        minusButton->setText(QCoreApplication::translate("CTC_TestUI", "-", nullptr));
        plusButton->setText(QCoreApplication::translate("CTC_TestUI", "+", nullptr));
        newOccupancyButton->setText(QCoreApplication::translate("CTC_TestUI", "Send new occupancy", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CTC_TestUI: public Ui_CTC_TestUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTC_TESTUI_H
