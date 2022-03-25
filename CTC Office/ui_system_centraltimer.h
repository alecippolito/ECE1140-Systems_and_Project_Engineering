/********************************************************************************
** Form generated from reading UI file 'system_centraltimer.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSTEM_CENTRALTIMER_H
#define UI_SYSTEM_CENTRALTIMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_System_CentralTimer
{
public:
    QLabel *label;

    void setupUi(QDialog *System_CentralTimer)
    {
        if (System_CentralTimer->objectName().isEmpty())
            System_CentralTimer->setObjectName(QString::fromUtf8("System_CentralTimer"));
        System_CentralTimer->resize(400, 300);
        label = new QLabel(System_CentralTimer);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 150, 121, 20));

        retranslateUi(System_CentralTimer);

        QMetaObject::connectSlotsByName(System_CentralTimer);
    } // setupUi

    void retranslateUi(QDialog *System_CentralTimer)
    {
        System_CentralTimer->setWindowTitle(QCoreApplication::translate("System_CentralTimer", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("System_CentralTimer", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class System_CentralTimer: public Ui_System_CentralTimer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSTEM_CENTRALTIMER_H
