/********************************************************************************
** Form generated from reading UI file 'updateschedule.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATESCHEDULE_H
#define UI_UPDATESCHEDULE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_UpdateSchedule
{
public:
    QListWidget *listWidget;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *UpdateSchedule)
    {
        if (UpdateSchedule->objectName().isEmpty())
            UpdateSchedule->setObjectName(QString::fromUtf8("UpdateSchedule"));
        UpdateSchedule->resize(755, 527);
        listWidget = new QListWidget(UpdateSchedule);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(40, 70, 651, 301));
        label = new QLabel(UpdateSchedule);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 40, 63, 20));
        pushButton = new QPushButton(UpdateSchedule);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(130, 380, 471, 29));
        pushButton_2 = new QPushButton(UpdateSchedule);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(320, 480, 93, 29));

        retranslateUi(UpdateSchedule);

        QMetaObject::connectSlotsByName(UpdateSchedule);
    } // setupUi

    void retranslateUi(QDialog *UpdateSchedule)
    {
        UpdateSchedule->setWindowTitle(QCoreApplication::translate("UpdateSchedule", "UpdateSchedule", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("UpdateSchedule", "Train1; Depart at 3:00pm, Arrive at 6:00pm, Authority = 2 Km, Suggested Speed = 40 Km/Hr", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("UpdateSchedule", "Train2; Depart at 4:00pm, Arrive at 11:30pm, Authority = 12 Km, Suggested Speed = 34.2 Km/Hr", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        label->setText(QCoreApplication::translate("UpdateSchedule", "Schedule:", nullptr));
        pushButton->setText(QCoreApplication::translate("UpdateSchedule", "Add Train....", nullptr));
        pushButton_2->setText(QCoreApplication::translate("UpdateSchedule", "Update", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpdateSchedule: public Ui_UpdateSchedule {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATESCHEDULE_H
