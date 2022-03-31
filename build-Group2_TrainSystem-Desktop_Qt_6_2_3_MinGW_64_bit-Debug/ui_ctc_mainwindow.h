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
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_CTC_MainWindow
{
public:

    void setupUi(QDialog *CTC_MainWindow)
    {
        if (CTC_MainWindow->objectName().isEmpty())
            CTC_MainWindow->setObjectName(QString::fromUtf8("CTC_MainWindow"));
        CTC_MainWindow->resize(400, 300);

        retranslateUi(CTC_MainWindow);

        QMetaObject::connectSlotsByName(CTC_MainWindow);
    } // setupUi

    void retranslateUi(QDialog *CTC_MainWindow)
    {
        CTC_MainWindow->setWindowTitle(QCoreApplication::translate("CTC_MainWindow", "CTC", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CTC_MainWindow: public Ui_CTC_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTC_MAINWINDOW_H
