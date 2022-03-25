/********************************************************************************
** Form generated from reading UI file 'choosedispatch.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSEDISPATCH_H
#define UI_CHOOSEDISPATCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChooseDispatch
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *ChooseDispatch)
    {
        if (ChooseDispatch->objectName().isEmpty())
            ChooseDispatch->setObjectName(QString::fromUtf8("ChooseDispatch"));
        ChooseDispatch->resize(289, 239);
        label = new QLabel(ChooseDispatch);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 50, 63, 20));
        layoutWidget = new QWidget(ChooseDispatch);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 50, 171, 141));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);


        retranslateUi(ChooseDispatch);

        QMetaObject::connectSlotsByName(ChooseDispatch);
    } // setupUi

    void retranslateUi(QDialog *ChooseDispatch)
    {
        ChooseDispatch->setWindowTitle(QCoreApplication::translate("ChooseDispatch", "Choose How to Dispatch Train", nullptr));
        label->setText(QString());
        pushButton->setText(QCoreApplication::translate("ChooseDispatch", "Recommended Route", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ChooseDispatch", "Previous Route", nullptr));
        pushButton_3->setText(QCoreApplication::translate("ChooseDispatch", "Custom Route", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChooseDispatch: public Ui_ChooseDispatch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSEDISPATCH_H
