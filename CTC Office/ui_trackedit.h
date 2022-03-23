/********************************************************************************
** Form generated from reading UI file 'trackedit.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRACKEDIT_H
#define UI_TRACKEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TrackEdit
{
public:
    QLabel *label;
    QListWidget *listWidget;
    QPushButton *pushButton;

    void setupUi(QDialog *TrackEdit)
    {
        if (TrackEdit->objectName().isEmpty())
            TrackEdit->setObjectName(QString::fromUtf8("TrackEdit"));
        TrackEdit->resize(439, 392);
        label = new QLabel(TrackEdit);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 50, 171, 20));
        listWidget = new QListWidget(TrackEdit);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(100, 90, 256, 192));
        pushButton = new QPushButton(TrackEdit);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(140, 300, 161, 29));

        retranslateUi(TrackEdit);

        QMetaObject::connectSlotsByName(TrackEdit);
    } // setupUi

    void retranslateUi(QDialog *TrackEdit)
    {
        TrackEdit->setWindowTitle(QCoreApplication::translate("TrackEdit", "Edit Tracks", nullptr));
        label->setText(QCoreApplication::translate("TrackEdit", "Select Track Block to Edit", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("TrackEdit", "Track A1              status: open", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("TrackEdit", "Track A2              status: open", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("TrackEdit", "Track A3              status: closed", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("TrackEdit", "Track B1              status: open", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("TrackEdit", "Track B2              status: closed", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        pushButton->setText(QCoreApplication::translate("TrackEdit", "Switch Track Status....", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TrackEdit: public Ui_TrackEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRACKEDIT_H
