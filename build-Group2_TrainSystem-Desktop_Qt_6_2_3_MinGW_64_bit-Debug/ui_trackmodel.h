/********************************************************************************
** Form generated from reading UI file 'trackmodel.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRACKMODEL_H
#define UI_TRACKMODEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_TrackModel
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QSpinBox *blockNumberSpinBox;
    QLabel *label_3;
    QTableWidget *tableWidget;
    QGraphicsView *greenLineStatusLight;
    QGraphicsView *redLineStatusLight;

    void setupUi(QDialog *TrackModel)
    {
        if (TrackModel->objectName().isEmpty())
            TrackModel->setObjectName(QString::fromUtf8("TrackModel"));
        TrackModel->resize(510, 468);
        pushButton = new QPushButton(TrackModel);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(110, 40, 100, 41));
        label = new QLabel(TrackModel);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 20, 61, 16));
        label_2 = new QLabel(TrackModel);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(230, 20, 51, 16));
        blockNumberSpinBox = new QSpinBox(TrackModel);
        blockNumberSpinBox->setObjectName(QString::fromUtf8("blockNumberSpinBox"));
        blockNumberSpinBox->setGeometry(QRect(410, 50, 42, 22));
        blockNumberSpinBox->setMinimum(1);
        blockNumberSpinBox->setMaximum(152);
        label_3 = new QLabel(TrackModel);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(400, 20, 91, 16));
        tableWidget = new QTableWidget(TrackModel);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        if (tableWidget->rowCount() < 12)
            tableWidget->setRowCount(12);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(8, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(9, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(10, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(11, __qtablewidgetitem12);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(130, 90, 251, 361));
        tableWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableWidget->setShowGrid(true);
        tableWidget->horizontalHeader()->setVisible(false);
        greenLineStatusLight = new QGraphicsView(TrackModel);
        greenLineStatusLight->setObjectName(QString::fromUtf8("greenLineStatusLight"));
        greenLineStatusLight->setGeometry(QRect(60, 50, 21, 21));
        redLineStatusLight = new QGraphicsView(TrackModel);
        redLineStatusLight->setObjectName(QString::fromUtf8("redLineStatusLight"));
        redLineStatusLight->setGeometry(QRect(240, 50, 21, 21));

        retranslateUi(TrackModel);

        QMetaObject::connectSlotsByName(TrackModel);
    } // setupUi

    void retranslateUi(QDialog *TrackModel)
    {
        TrackModel->setWindowTitle(QCoreApplication::translate("TrackModel", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("TrackModel", "Toggle Line", nullptr));
        label->setText(QCoreApplication::translate("TrackModel", "Green line", nullptr));
        label_2->setText(QCoreApplication::translate("TrackModel", "Red line", nullptr));
        label_3->setText(QCoreApplication::translate("TrackModel", "Block Number", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("TrackModel", "Value", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("TrackModel", "Line", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("TrackModel", "Section", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("TrackModel", "Block Number", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("TrackModel", "Block Length", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("TrackModel", "Block Grade", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("TrackModel", "Speed Limit", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("TrackModel", "Infrastructure", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("TrackModel", "Station Side Doors", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(8);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("TrackModel", "Elevation", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(9);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("TrackModel", "Cum. Elevation", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->verticalHeaderItem(10);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("TrackModel", "Seconds to Traverse Block", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->verticalHeaderItem(11);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("TrackModel", "Occupancy", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TrackModel: public Ui_TrackModel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRACKMODEL_H
