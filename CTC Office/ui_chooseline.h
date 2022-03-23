/********************************************************************************
** Form generated from reading UI file 'chooseline.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSELINE_H
#define UI_CHOOSELINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ChooseLine
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *ChooseLine)
    {
        if (ChooseLine->objectName().isEmpty())
            ChooseLine->setObjectName(QString::fromUtf8("ChooseLine"));
        ChooseLine->resize(293, 304);
        verticalLayout = new QVBoxLayout(ChooseLine);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton = new QPushButton(ChooseLine);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(ChooseLine);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);


        retranslateUi(ChooseLine);

        QMetaObject::connectSlotsByName(ChooseLine);
    } // setupUi

    void retranslateUi(QDialog *ChooseLine)
    {
        ChooseLine->setWindowTitle(QCoreApplication::translate("ChooseLine", "Choose which line to dispatch", nullptr));
        pushButton->setText(QCoreApplication::translate("ChooseLine", "Red Line", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ChooseLine", "Green Line", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChooseLine: public Ui_ChooseLine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSELINE_H
