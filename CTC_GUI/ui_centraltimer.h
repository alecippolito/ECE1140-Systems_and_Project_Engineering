/********************************************************************************
** Form generated from reading UI file 'centraltimer.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CENTRALTIMER_H
#define UI_CENTRALTIMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_CentralTimer
{
public:

    void setupUi(QDialog *CentralTimer)
    {
        if (CentralTimer->objectName().isEmpty())
            CentralTimer->setObjectName(QString::fromUtf8("CentralTimer"));
        CentralTimer->resize(725, 561);

        retranslateUi(CentralTimer);

        QMetaObject::connectSlotsByName(CentralTimer);
    } // setupUi

    void retranslateUi(QDialog *CentralTimer)
    {
        CentralTimer->setWindowTitle(QCoreApplication::translate("CentralTimer", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CentralTimer: public Ui_CentralTimer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CENTRALTIMER_H
