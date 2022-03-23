/********************************************************************************
** Form generated from reading UI file 'trainedit.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRAINEDIT_H
#define UI_TRAINEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TrainEdit
{
public:
    QLabel *label;
    QListWidget *listWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *TrainEdit)
    {
        if (TrainEdit->objectName().isEmpty())
            TrainEdit->setObjectName(QString::fromUtf8("TrainEdit"));
        TrainEdit->resize(590, 406);
        label = new QLabel(TrainEdit);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 60, 81, 20));
        listWidget = new QListWidget(TrainEdit);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(80, 90, 431, 192));
        pushButton = new QPushButton(TrainEdit);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(80, 300, 93, 29));
        pushButton_2 = new QPushButton(TrainEdit);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(220, 300, 131, 29));
        pushButton_3 = new QPushButton(TrainEdit);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(390, 300, 111, 29));

        retranslateUi(TrainEdit);

        QMetaObject::connectSlotsByName(TrainEdit);
    } // setupUi

    void retranslateUi(QDialog *TrainEdit)
    {
        TrainEdit->setWindowTitle(QCoreApplication::translate("TrainEdit", "Train Edit", nullptr));
        label->setText(QCoreApplication::translate("TrainEdit", "Select Train", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("TrainEdit", "Train 1:             Locaton: Red W70           status: moving", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("TrainEdit", "Train 2:             Location: Green A2          status: moving", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("TrainEdit", "Train 3:             Location: Overbrook Station        status: stopped", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("TrainEdit", "Train 4:             Location: Green Z150       status: stopped", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        pushButton->setText(QCoreApplication::translate("TrainEdit", "Halt Train", nullptr));
        pushButton_2->setText(QCoreApplication::translate("TrainEdit", "Let Train Proceed", nullptr));
        pushButton_3->setText(QCoreApplication::translate("TrainEdit", "Reroute Train", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TrainEdit: public Ui_TrainEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAINEDIT_H
