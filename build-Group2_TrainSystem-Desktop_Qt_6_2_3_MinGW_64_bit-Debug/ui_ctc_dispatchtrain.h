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
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_CTC_DispatchTrain
{
public:

    void setupUi(QDialog *CTC_DispatchTrain)
    {
        if (CTC_DispatchTrain->objectName().isEmpty())
            CTC_DispatchTrain->setObjectName(QString::fromUtf8("CTC_DispatchTrain"));
        CTC_DispatchTrain->resize(400, 300);

        retranslateUi(CTC_DispatchTrain);

        QMetaObject::connectSlotsByName(CTC_DispatchTrain);
    } // setupUi

    void retranslateUi(QDialog *CTC_DispatchTrain)
    {
        CTC_DispatchTrain->setWindowTitle(QCoreApplication::translate("CTC_DispatchTrain", "Dispatch Train", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CTC_DispatchTrain: public Ui_CTC_DispatchTrain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTC_DISPATCHTRAIN_H
