/********************************************************************************
** Form generated from reading UI file 'ctc_openclosetrack.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTC_OPENCLOSETRACK_H
#define UI_CTC_OPENCLOSETRACK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CTC_OpenCloseTrack
{
public:
    QComboBox *LineNameBox;
    QComboBox *BlockNumberBox;
    QLabel *LineLabel;
    QLabel *BlockNumLabel;
    QPushButton *ChangeTrackButton;
    QComboBox *OpenCloseBox;
    QLabel *label;

    void setupUi(QDialog *CTC_OpenCloseTrack)
    {
        if (CTC_OpenCloseTrack->objectName().isEmpty())
            CTC_OpenCloseTrack->setObjectName(QString::fromUtf8("CTC_OpenCloseTrack"));
        CTC_OpenCloseTrack->resize(400, 374);
        LineNameBox = new QComboBox(CTC_OpenCloseTrack);
        LineNameBox->addItem(QString());
        LineNameBox->addItem(QString());
        LineNameBox->setObjectName(QString::fromUtf8("LineNameBox"));
        LineNameBox->setGeometry(QRect(40, 110, 80, 26));
        BlockNumberBox = new QComboBox(CTC_OpenCloseTrack);
        BlockNumberBox->setObjectName(QString::fromUtf8("BlockNumberBox"));
        BlockNumberBox->setGeometry(QRect(150, 110, 80, 26));
        LineLabel = new QLabel(CTC_OpenCloseTrack);
        LineLabel->setObjectName(QString::fromUtf8("LineLabel"));
        LineLabel->setGeometry(QRect(40, 90, 63, 20));
        BlockNumLabel = new QLabel(CTC_OpenCloseTrack);
        BlockNumLabel->setObjectName(QString::fromUtf8("BlockNumLabel"));
        BlockNumLabel->setGeometry(QRect(150, 90, 101, 20));
        ChangeTrackButton = new QPushButton(CTC_OpenCloseTrack);
        ChangeTrackButton->setObjectName(QString::fromUtf8("ChangeTrackButton"));
        ChangeTrackButton->setGeometry(QRect(130, 220, 121, 29));
        OpenCloseBox = new QComboBox(CTC_OpenCloseTrack);
        OpenCloseBox->addItem(QString());
        OpenCloseBox->addItem(QString());
        OpenCloseBox->setObjectName(QString::fromUtf8("OpenCloseBox"));
        OpenCloseBox->setGeometry(QRect(290, 110, 80, 26));
        label = new QLabel(CTC_OpenCloseTrack);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(290, 90, 81, 20));

        retranslateUi(CTC_OpenCloseTrack);

        QMetaObject::connectSlotsByName(CTC_OpenCloseTrack);
    } // setupUi

    void retranslateUi(QDialog *CTC_OpenCloseTrack)
    {
        CTC_OpenCloseTrack->setWindowTitle(QCoreApplication::translate("CTC_OpenCloseTrack", "Open or Close Track", nullptr));
        LineNameBox->setItemText(0, QCoreApplication::translate("CTC_OpenCloseTrack", "Red", nullptr));
        LineNameBox->setItemText(1, QCoreApplication::translate("CTC_OpenCloseTrack", "Green", nullptr));

        LineLabel->setText(QCoreApplication::translate("CTC_OpenCloseTrack", "Line", nullptr));
        BlockNumLabel->setText(QCoreApplication::translate("CTC_OpenCloseTrack", "Block Number", nullptr));
        ChangeTrackButton->setText(QCoreApplication::translate("CTC_OpenCloseTrack", "Change Track", nullptr));
        OpenCloseBox->setItemText(0, QCoreApplication::translate("CTC_OpenCloseTrack", "Open", nullptr));
        OpenCloseBox->setItemText(1, QCoreApplication::translate("CTC_OpenCloseTrack", "Closed", nullptr));

        label->setText(QCoreApplication::translate("CTC_OpenCloseTrack", "New status", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CTC_OpenCloseTrack: public Ui_CTC_OpenCloseTrack {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTC_OPENCLOSETRACK_H
