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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QTimeEdit>

QT_BEGIN_NAMESPACE

class Ui_System_CentralTimer
{
public:
    QLabel *label;
    QListWidget *listWidget;
    QLabel *label_2;
    QLabel *label_3;
    QTimeEdit *timeEdit;

    void setupUi(QDialog *System_CentralTimer)
    {
        if (System_CentralTimer->objectName().isEmpty())
            System_CentralTimer->setObjectName(QString::fromUtf8("System_CentralTimer"));
        System_CentralTimer->resize(684, 579);
        label = new QLabel(System_CentralTimer);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 90, 121, 20));
        listWidget = new QListWidget(System_CentralTimer);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(215, 220, 201, 71));
        label_2 = new QLabel(System_CentralTimer);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(220, 190, 111, 20));
        label_3 = new QLabel(System_CentralTimer);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(220, 330, 151, 20));
        timeEdit = new QTimeEdit(System_CentralTimer);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setGeometry(QRect(220, 360, 118, 26));

        retranslateUi(System_CentralTimer);

        QMetaObject::connectSlotsByName(System_CentralTimer);
    } // setupUi

    void retranslateUi(QDialog *System_CentralTimer)
    {
        System_CentralTimer->setWindowTitle(QCoreApplication::translate("System_CentralTimer", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("System_CentralTimer", "TextLabel", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("System_CentralTimer", "1x speed", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("System_CentralTimer", "10x speed", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("System_CentralTimer", "100x speed", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        label_2->setText(QCoreApplication::translate("System_CentralTimer", "Time Dialation", nullptr));
        label_3->setText(QCoreApplication::translate("System_CentralTimer", "Current System Time:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class System_CentralTimer: public Ui_System_CentralTimer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSTEM_CENTRALTIMER_H
