/********************************************************************************
** Form generated from reading UI file 'ctc_choosetrackline.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTC_CHOOSETRACKLINE_H
#define UI_CTC_CHOOSETRACKLINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_CTC_ChooseTrackLine
{
public:

    void setupUi(QDialog *CTC_ChooseTrackLine)
    {
        if (CTC_ChooseTrackLine->objectName().isEmpty())
            CTC_ChooseTrackLine->setObjectName(QString::fromUtf8("CTC_ChooseTrackLine"));
        CTC_ChooseTrackLine->resize(400, 300);

        retranslateUi(CTC_ChooseTrackLine);

        QMetaObject::connectSlotsByName(CTC_ChooseTrackLine);
    } // setupUi

    void retranslateUi(QDialog *CTC_ChooseTrackLine)
    {
        CTC_ChooseTrackLine->setWindowTitle(QCoreApplication::translate("CTC_ChooseTrackLine", "Choose Line", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CTC_ChooseTrackLine: public Ui_CTC_ChooseTrackLine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTC_CHOOSETRACKLINE_H
