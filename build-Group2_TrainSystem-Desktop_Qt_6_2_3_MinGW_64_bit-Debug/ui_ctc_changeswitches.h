/********************************************************************************
** Form generated from reading UI file 'ctc_changeswitches.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTC_CHANGESWITCHES_H
#define UI_CTC_CHANGESWITCHES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CTC_ChangeSwitches
{
public:
    QComboBox *LineBox;
    QLabel *LineLabel;
    QComboBox *SwitchLocationBox;
    QLabel *SwitchLabel;
    QComboBox *DestinationBox;
    QLabel *DestinationLabel;
    QPushButton *SwitchStateButton;

    void setupUi(QDialog *CTC_ChangeSwitches)
    {
        if (CTC_ChangeSwitches->objectName().isEmpty())
            CTC_ChangeSwitches->setObjectName(QString::fromUtf8("CTC_ChangeSwitches"));
        CTC_ChangeSwitches->resize(440, 324);
        LineBox = new QComboBox(CTC_ChangeSwitches);
        LineBox->addItem(QString());
        LineBox->addItem(QString());
        LineBox->setObjectName(QString::fromUtf8("LineBox"));
        LineBox->setGeometry(QRect(40, 110, 80, 26));
        LineLabel = new QLabel(CTC_ChangeSwitches);
        LineLabel->setObjectName(QString::fromUtf8("LineLabel"));
        LineLabel->setGeometry(QRect(40, 90, 63, 20));
        SwitchLocationBox = new QComboBox(CTC_ChangeSwitches);
        SwitchLocationBox->setObjectName(QString::fromUtf8("SwitchLocationBox"));
        SwitchLocationBox->setGeometry(QRect(140, 110, 80, 26));
        SwitchLabel = new QLabel(CTC_ChangeSwitches);
        SwitchLabel->setObjectName(QString::fromUtf8("SwitchLabel"));
        SwitchLabel->setGeometry(QRect(140, 90, 111, 20));
        DestinationBox = new QComboBox(CTC_ChangeSwitches);
        DestinationBox->setObjectName(QString::fromUtf8("DestinationBox"));
        DestinationBox->setGeometry(QRect(270, 110, 80, 26));
        DestinationLabel = new QLabel(CTC_ChangeSwitches);
        DestinationLabel->setObjectName(QString::fromUtf8("DestinationLabel"));
        DestinationLabel->setGeometry(QRect(270, 90, 131, 20));
        SwitchStateButton = new QPushButton(CTC_ChangeSwitches);
        SwitchStateButton->setObjectName(QString::fromUtf8("SwitchStateButton"));
        SwitchStateButton->setGeometry(QRect(130, 210, 151, 29));

        retranslateUi(CTC_ChangeSwitches);

        QMetaObject::connectSlotsByName(CTC_ChangeSwitches);
    } // setupUi

    void retranslateUi(QDialog *CTC_ChangeSwitches)
    {
        CTC_ChangeSwitches->setWindowTitle(QCoreApplication::translate("CTC_ChangeSwitches", "Change Switches", nullptr));
        LineBox->setItemText(0, QCoreApplication::translate("CTC_ChangeSwitches", "Red", nullptr));
        LineBox->setItemText(1, QCoreApplication::translate("CTC_ChangeSwitches", "Green", nullptr));

        LineLabel->setText(QCoreApplication::translate("CTC_ChangeSwitches", "Line", nullptr));
        SwitchLabel->setText(QCoreApplication::translate("CTC_ChangeSwitches", "Switch Location", nullptr));
        DestinationLabel->setText(QCoreApplication::translate("CTC_ChangeSwitches", "Switch Destination", nullptr));
        SwitchStateButton->setText(QCoreApplication::translate("CTC_ChangeSwitches", "Change Switch State", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CTC_ChangeSwitches: public Ui_CTC_ChangeSwitches {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTC_CHANGESWITCHES_H
