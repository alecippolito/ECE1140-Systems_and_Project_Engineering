/********************************************************************************
** Form generated from reading UI file 'ctc_changeschedule.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTC_CHANGESCHEDULE_H
#define UI_CTC_CHANGESCHEDULE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_CTC_ChangeSchedule
{
public:
    QTableWidget *tableWidget;

    void setupUi(QDialog *CTC_ChangeSchedule)
    {
        if (CTC_ChangeSchedule->objectName().isEmpty())
            CTC_ChangeSchedule->setObjectName(QString::fromUtf8("CTC_ChangeSchedule"));
        CTC_ChangeSchedule->resize(809, 564);
        tableWidget = new QTableWidget(CTC_ChangeSchedule);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (tableWidget->rowCount() < 1)
            tableWidget->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem3);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(170, 140, 451, 192));

        retranslateUi(CTC_ChangeSchedule);

        QMetaObject::connectSlotsByName(CTC_ChangeSchedule);
    } // setupUi

    void retranslateUi(QDialog *CTC_ChangeSchedule)
    {
        CTC_ChangeSchedule->setWindowTitle(QCoreApplication::translate("CTC_ChangeSchedule", "Change Schedule", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("CTC_ChangeSchedule", "Departure", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("CTC_ChangeSchedule", "Arrival", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("CTC_ChangeSchedule", "Destination", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("CTC_ChangeSchedule", "Train #1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CTC_ChangeSchedule: public Ui_CTC_ChangeSchedule {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTC_CHANGESCHEDULE_H
