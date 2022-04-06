/********************************************************************************
** Form generated from reading UI file 'ctc_choosetrackline.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTC_CHOOSETRACKLINE_H
#define UI_CTC_CHOOSETRACKLINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CTC_ChooseTrackLine
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *RedLineButton;
    QPushButton *GreenLineButton;

    void setupUi(QDialog *CTC_ChooseTrackLine)
    {
        if (CTC_ChooseTrackLine->objectName().isEmpty())
            CTC_ChooseTrackLine->setObjectName(QString::fromUtf8("CTC_ChooseTrackLine"));
        CTC_ChooseTrackLine->resize(400, 300);
        widget = new QWidget(CTC_ChooseTrackLine);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(90, 60, 231, 161));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        RedLineButton = new QPushButton(widget);
        RedLineButton->setObjectName(QString::fromUtf8("RedLineButton"));

        verticalLayout->addWidget(RedLineButton);

        GreenLineButton = new QPushButton(widget);
        GreenLineButton->setObjectName(QString::fromUtf8("GreenLineButton"));

        verticalLayout->addWidget(GreenLineButton);


        retranslateUi(CTC_ChooseTrackLine);

        QMetaObject::connectSlotsByName(CTC_ChooseTrackLine);
    } // setupUi

    void retranslateUi(QDialog *CTC_ChooseTrackLine)
    {
        CTC_ChooseTrackLine->setWindowTitle(QCoreApplication::translate("CTC_ChooseTrackLine", "Choose Line", nullptr));
        RedLineButton->setText(QCoreApplication::translate("CTC_ChooseTrackLine", "Red Line", nullptr));
        GreenLineButton->setText(QCoreApplication::translate("CTC_ChooseTrackLine", "Green Line", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CTC_ChooseTrackLine: public Ui_CTC_ChooseTrackLine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTC_CHOOSETRACKLINE_H
