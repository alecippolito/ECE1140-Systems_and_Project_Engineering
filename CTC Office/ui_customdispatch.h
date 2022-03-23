/********************************************************************************
** Form generated from reading UI file 'customdispatch.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMDISPATCH_H
#define UI_CUSTOMDISPATCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CustomDispatch
{
public:
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QDateTimeEdit *dateTimeEdit;
    QListWidget *listWidget;
    QDateTimeEdit *dateTimeEdit_2;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_3;
    QLabel *label_2;

    void setupUi(QDialog *CustomDispatch)
    {
        if (CustomDispatch->objectName().isEmpty())
            CustomDispatch->setObjectName(QString::fromUtf8("CustomDispatch"));
        CustomDispatch->resize(432, 494);
        checkBox = new QCheckBox(CustomDispatch);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(50, 70, 141, 24));
        checkBox->setChecked(true);
        checkBox_2 = new QCheckBox(CustomDispatch);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(240, 70, 111, 24));
        checkBox_2->setChecked(true);
        dateTimeEdit = new QDateTimeEdit(CustomDispatch);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(40, 100, 161, 26));
        dateTimeEdit->setMouseTracking(true);
        listWidget = new QListWidget(CustomDispatch);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(90, 170, 256, 191));
        listWidget->setViewMode(QListView::ListMode);
        dateTimeEdit_2 = new QDateTimeEdit(CustomDispatch);
        dateTimeEdit_2->setObjectName(QString::fromUtf8("dateTimeEdit_2"));
        dateTimeEdit_2->setGeometry(QRect(230, 100, 161, 26));
        dateTimeEdit_2->setMouseTracking(true);
        dateTimeEdit_2->setCalendarPopup(false);
        dateTimeEdit_2->setCurrentSectionIndex(0);
        label = new QLabel(CustomDispatch);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 370, 251, 20));
        pushButton = new QPushButton(CustomDispatch);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 420, 93, 29));
        label_3 = new QLabel(CustomDispatch);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(230, 130, 141, 21));
        label_3->setMouseTracking(false);
        label_2 = new QLabel(CustomDispatch);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 130, 161, 20));

        retranslateUi(CustomDispatch);

        listWidget->setCurrentRow(-1);


        QMetaObject::connectSlotsByName(CustomDispatch);
    } // setupUi

    void retranslateUi(QDialog *CustomDispatch)
    {
        CustomDispatch->setWindowTitle(QCoreApplication::translate("CustomDispatch", "Custom Dispatch", nullptr));
        checkBox->setText(QCoreApplication::translate("CustomDispatch", "Departure Time", nullptr));
        checkBox_2->setText(QCoreApplication::translate("CustomDispatch", "Arrival Time", nullptr));
        label->setText(QCoreApplication::translate("CustomDispatch", "Nothing is selected", nullptr));
        pushButton->setText(QCoreApplication::translate("CustomDispatch", "Dispatch", nullptr));
        label_3->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CustomDispatch: public Ui_CustomDispatch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMDISPATCH_H
