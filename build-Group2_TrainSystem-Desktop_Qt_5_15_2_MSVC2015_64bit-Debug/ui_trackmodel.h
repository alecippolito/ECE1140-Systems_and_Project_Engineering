/********************************************************************************
** Form generated from reading UI file 'trackmodel.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRACKMODEL_H
#define UI_TRACKMODEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_TrackModel
{
public:
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *TrackModel)
    {
        if (TrackModel->objectName().isEmpty())
            TrackModel->setObjectName(QString::fromUtf8("TrackModel"));
        TrackModel->resize(400, 300);
        label = new QLabel(TrackModel);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 100, 111, 21));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_2 = new QLabel(TrackModel);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(120, 160, 161, 20));

        retranslateUi(TrackModel);

        QMetaObject::connectSlotsByName(TrackModel);
    } // setupUi

    void retranslateUi(QDialog *TrackModel)
    {
        TrackModel->setWindowTitle(QCoreApplication::translate("TrackModel", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("TrackModel", "Track Model UI", nullptr));
        label_2->setText(QCoreApplication::translate("TrackModel", "This should not appear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TrackModel: public Ui_TrackModel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRACKMODEL_H
