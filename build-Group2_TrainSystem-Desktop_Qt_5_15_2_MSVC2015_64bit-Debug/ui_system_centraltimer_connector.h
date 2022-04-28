/********************************************************************************
** Form generated from reading UI file 'system_centraltimer_connector.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSTEM_CENTRALTIMER_CONNECTOR_H
#define UI_SYSTEM_CENTRALTIMER_CONNECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_System_CentralTimer_Connector
{
public:
    QWidget *centralwidget;
    QPushButton *OneTimesSpeed;
    QPushButton *TenTimesSpeed;
    QLabel *label;
    QLabel *label_2;
    QLabel *TimeDisplay;
    QLabel *DayDisplay;
    QPushButton *HundredTimesSpeed;
    QPushButton *SixtyTimesSpeed;
    QPushButton *MonButton;
    QPushButton *TuesButton;
    QPushButton *WedButton;
    QPushButton *ThursButton;
    QPushButton *FriButton;
    QPushButton *SatButton;
    QPushButton *SunButton;
    QPushButton *ThousandTimesSpeed;
    QPushButton *TimeButton_1pm;
    QPushButton *TimeButton_2pm;
    QPushButton *pausePlayButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *System_CentralTimer_Connector)
    {
        if (System_CentralTimer_Connector->objectName().isEmpty())
            System_CentralTimer_Connector->setObjectName(QString::fromUtf8("System_CentralTimer_Connector"));
        System_CentralTimer_Connector->resize(800, 600);
        centralwidget = new QWidget(System_CentralTimer_Connector);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        OneTimesSpeed = new QPushButton(centralwidget);
        OneTimesSpeed->setObjectName(QString::fromUtf8("OneTimesSpeed"));
        OneTimesSpeed->setGeometry(QRect(100, 220, 201, 31));
        TenTimesSpeed = new QPushButton(centralwidget);
        TenTimesSpeed->setObjectName(QString::fromUtf8("TenTimesSpeed"));
        TenTimesSpeed->setGeometry(QRect(490, 220, 201, 29));
        TenTimesSpeed->setAutoDefault(false);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 110, 63, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 160, 63, 20));
        TimeDisplay = new QLabel(centralwidget);
        TimeDisplay->setObjectName(QString::fromUtf8("TimeDisplay"));
        TimeDisplay->setGeometry(QRect(200, 160, 111, 20));
        DayDisplay = new QLabel(centralwidget);
        DayDisplay->setObjectName(QString::fromUtf8("DayDisplay"));
        DayDisplay->setGeometry(QRect(200, 110, 111, 20));
        HundredTimesSpeed = new QPushButton(centralwidget);
        HundredTimesSpeed->setObjectName(QString::fromUtf8("HundredTimesSpeed"));
        HundredTimesSpeed->setGeometry(QRect(490, 260, 201, 29));
        SixtyTimesSpeed = new QPushButton(centralwidget);
        SixtyTimesSpeed->setObjectName(QString::fromUtf8("SixtyTimesSpeed"));
        SixtyTimesSpeed->setGeometry(QRect(100, 260, 201, 29));
        MonButton = new QPushButton(centralwidget);
        MonButton->setObjectName(QString::fromUtf8("MonButton"));
        MonButton->setGeometry(QRect(30, 360, 93, 29));
        TuesButton = new QPushButton(centralwidget);
        TuesButton->setObjectName(QString::fromUtf8("TuesButton"));
        TuesButton->setGeometry(QRect(130, 360, 93, 31));
        WedButton = new QPushButton(centralwidget);
        WedButton->setObjectName(QString::fromUtf8("WedButton"));
        WedButton->setGeometry(QRect(240, 360, 93, 29));
        ThursButton = new QPushButton(centralwidget);
        ThursButton->setObjectName(QString::fromUtf8("ThursButton"));
        ThursButton->setGeometry(QRect(350, 360, 93, 29));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        QBrush brush2(QColor(227, 227, 227, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        QBrush brush3(QColor(160, 160, 160, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush3);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        QBrush brush4(QColor(240, 240, 240, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush4);
        QBrush brush5(QColor(105, 105, 105, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush5);
        QBrush brush6(QColor(0, 120, 215, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush1);
        QBrush brush7(QColor(0, 0, 255, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Link, brush7);
        QBrush brush8(QColor(255, 0, 255, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::LinkVisited, brush8);
        QBrush brush9(QColor(245, 245, 245, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush9);
        palette.setBrush(QPalette::Active, QPalette::NoRole, brush);
        QBrush brush10(QColor(255, 255, 220, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush10);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush11(QColor(0, 0, 0, 128));
        brush11.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush11);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Link, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush9);
        QBrush brush12(QColor(0, 0, 0, 255));
        brush12.setStyle(Qt::NoBrush);
        palette.setBrush(QPalette::Inactive, QPalette::NoRole, brush12);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush11);
#endif
        QBrush brush13(QColor(120, 120, 120, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush13);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        QBrush brush14(QColor(247, 247, 247, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush14);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush13);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush13);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Link, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        QBrush brush15(QColor(0, 0, 0, 255));
        brush15.setStyle(Qt::NoBrush);
        palette.setBrush(QPalette::Disabled, QPalette::NoRole, brush15);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush11);
#endif
        ThursButton->setPalette(palette);
        FriButton = new QPushButton(centralwidget);
        FriButton->setObjectName(QString::fromUtf8("FriButton"));
        FriButton->setGeometry(QRect(460, 360, 93, 29));
        SatButton = new QPushButton(centralwidget);
        SatButton->setObjectName(QString::fromUtf8("SatButton"));
        SatButton->setGeometry(QRect(570, 360, 93, 29));
        SunButton = new QPushButton(centralwidget);
        SunButton->setObjectName(QString::fromUtf8("SunButton"));
        SunButton->setGeometry(QRect(680, 360, 93, 29));
        ThousandTimesSpeed = new QPushButton(centralwidget);
        ThousandTimesSpeed->setObjectName(QString::fromUtf8("ThousandTimesSpeed"));
        ThousandTimesSpeed->setGeometry(QRect(100, 300, 201, 29));
        TimeButton_1pm = new QPushButton(centralwidget);
        TimeButton_1pm->setObjectName(QString::fromUtf8("TimeButton_1pm"));
        TimeButton_1pm->setGeometry(QRect(330, 410, 61, 29));
        TimeButton_2pm = new QPushButton(centralwidget);
        TimeButton_2pm->setObjectName(QString::fromUtf8("TimeButton_2pm"));
        TimeButton_2pm->setGeometry(QRect(410, 410, 61, 29));
        pausePlayButton = new QPushButton(centralwidget);
        pausePlayButton->setObjectName(QString::fromUtf8("pausePlayButton"));
        pausePlayButton->setGeometry(QRect(340, 250, 111, 41));
        pausePlayButton->setAutoDefault(false);
        System_CentralTimer_Connector->setCentralWidget(centralwidget);
        menubar = new QMenuBar(System_CentralTimer_Connector);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        System_CentralTimer_Connector->setMenuBar(menubar);
        statusbar = new QStatusBar(System_CentralTimer_Connector);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        System_CentralTimer_Connector->setStatusBar(statusbar);

        retranslateUi(System_CentralTimer_Connector);

        QMetaObject::connectSlotsByName(System_CentralTimer_Connector);
    } // setupUi

    void retranslateUi(QMainWindow *System_CentralTimer_Connector)
    {
        System_CentralTimer_Connector->setWindowTitle(QCoreApplication::translate("System_CentralTimer_Connector", "Central Timer", nullptr));
        OneTimesSpeed->setText(QCoreApplication::translate("System_CentralTimer_Connector", "1x speed", nullptr));
        TenTimesSpeed->setText(QCoreApplication::translate("System_CentralTimer_Connector", "10x speed", nullptr));
        label->setText(QCoreApplication::translate("System_CentralTimer_Connector", "Date", nullptr));
        label_2->setText(QCoreApplication::translate("System_CentralTimer_Connector", "Time", nullptr));
        TimeDisplay->setText(QString());
        DayDisplay->setText(QString());
        HundredTimesSpeed->setText(QCoreApplication::translate("System_CentralTimer_Connector", "100x speed", nullptr));
        SixtyTimesSpeed->setText(QCoreApplication::translate("System_CentralTimer_Connector", "60x speed", nullptr));
        MonButton->setText(QCoreApplication::translate("System_CentralTimer_Connector", "Monday", nullptr));
        TuesButton->setText(QCoreApplication::translate("System_CentralTimer_Connector", "Tuesday", nullptr));
        WedButton->setText(QCoreApplication::translate("System_CentralTimer_Connector", "Wednesday", nullptr));
        ThursButton->setText(QCoreApplication::translate("System_CentralTimer_Connector", "Thursday", nullptr));
        FriButton->setText(QCoreApplication::translate("System_CentralTimer_Connector", "Friday", nullptr));
        SatButton->setText(QCoreApplication::translate("System_CentralTimer_Connector", "Saturday", nullptr));
        SunButton->setText(QCoreApplication::translate("System_CentralTimer_Connector", "Sunday", nullptr));
        ThousandTimesSpeed->setText(QCoreApplication::translate("System_CentralTimer_Connector", "1000x speed", nullptr));
        TimeButton_1pm->setText(QCoreApplication::translate("System_CentralTimer_Connector", "1:00pm", nullptr));
        TimeButton_2pm->setText(QCoreApplication::translate("System_CentralTimer_Connector", "2:00pm", nullptr));
        pausePlayButton->setText(QCoreApplication::translate("System_CentralTimer_Connector", "Pause", nullptr));
    } // retranslateUi

};

namespace Ui {
    class System_CentralTimer_Connector: public Ui_System_CentralTimer_Connector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSTEM_CENTRALTIMER_CONNECTOR_H
