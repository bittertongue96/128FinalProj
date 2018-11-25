/********************************************************************************
** Form generated from reading UI file 'status.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATUS_H
#define UI_STATUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Status
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_4;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *label_5;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLCDNumber *lcdNumber;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_4;
    QLCDNumber *lcdNumber_2;
    QLCDNumber *lcdNumber_3;
    QLCDNumber *lcdNumber_4;
    QPushButton *pushButton;

    void setupUi(QDialog *Status)
    {
        if (Status->objectName().isEmpty())
            Status->setObjectName(QStringLiteral("Status"));
        Status->resize(410, 285);
        Status->setStyleSheet(QStringLiteral("background-image: url(:/img/images/blak.jpg);"));
        layoutWidget = new QWidget(Status);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 0, 161, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QPalette palette;
        QBrush brush(QColor(28, 167, 3, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("Rockwell"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("background-image: url(:/img/images/white.png);"));

        horizontalLayout->addWidget(label);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_4->setPalette(palette1);
        QFont font1;
        font1.setFamily(QStringLiteral("Rockwell Condensed"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_4->setFont(font1);
        label_4->setStyleSheet(QLatin1String(" \n"
" \n"
"background-image: url(:/img/images/white.png);"));

        horizontalLayout->addWidget(label_4);

        layoutWidget1 = new QWidget(Status);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(120, 30, 161, 31));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_2->setPalette(palette2);
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("background-image: url(:/img/images/white.png);"));

        horizontalLayout_2->addWidget(label_2);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QStringLiteral("label_5"));
        QPalette palette3;
        QBrush brush2(QColor(220, 0, 3, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_5->setPalette(palette3);
        label_5->setFont(font1);
        label_5->setStyleSheet(QStringLiteral("background-image: url(:/img/images/white.png);"));

        horizontalLayout_2->addWidget(label_5);

        layoutWidget2 = new QWidget(Status);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 220, 181, 51));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QStringLiteral("label_3"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_3->setPalette(palette4);
        label_3->setFont(font);
        label_3->setStyleSheet(QLatin1String(" \n"
"background-image: url(:/img/images/white.png);"));

        horizontalLayout_3->addWidget(label_3);

        lcdNumber = new QLCDNumber(layoutWidget2);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setStyleSheet(QStringLiteral("background-image: url(:/img/images/whiteyellow.png);"));

        horizontalLayout_3->addWidget(lcdNumber);

        layoutWidget3 = new QWidget(Status);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(60, 80, 271, 81));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        lcdNumber_2 = new QLCDNumber(layoutWidget3);
        lcdNumber_2->setObjectName(QStringLiteral("lcdNumber_2"));
        QFont font2;
        font2.setFamily(QStringLiteral("Small Fonts"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        lcdNumber_2->setFont(font2);
        lcdNumber_2->setStyleSheet(QStringLiteral("background-image: url(:/img/images/whiteyellow.png);"));

        horizontalLayout_4->addWidget(lcdNumber_2);

        lcdNumber_3 = new QLCDNumber(layoutWidget3);
        lcdNumber_3->setObjectName(QStringLiteral("lcdNumber_3"));
        lcdNumber_3->setStyleSheet(QStringLiteral("background-image:url(:/img/images/whiteyellow.png);"));

        horizontalLayout_4->addWidget(lcdNumber_3);

        lcdNumber_4 = new QLCDNumber(layoutWidget3);
        lcdNumber_4->setObjectName(QStringLiteral("lcdNumber_4"));
        lcdNumber_4->setStyleSheet(QLatin1String("background-image: url(:/img/images/whiteyellow.png);\n"
" "));

        horizontalLayout_4->addWidget(lcdNumber_4);

        pushButton = new QPushButton(Status);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(260, 210, 121, 71));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pushButton->setPalette(palette5);
        QFont font3;
        font3.setFamily(QStringLiteral("Rockwell Extra Bold"));
        font3.setPointSize(18);
        font3.setBold(true);
        font3.setWeight(75);
        pushButton->setFont(font3);

        retranslateUi(Status);

        QMetaObject::connectSlotsByName(Status);
    } // setupUi

    void retranslateUi(QDialog *Status)
    {
        Status->setWindowTitle(QApplication::translate("Status", "Dialog", nullptr));
        label->setText(QApplication::translate("Status", "<html><head/><body><p><span style=\" font-size:11pt;\">Name:</span></p></body></html>", nullptr));
        label_4->setText(QApplication::translate("Status", "<html><head/><body><p><span style=\" font-size:12pt;\">ANON</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("Status", "<html><head/><body><p><span style=\" font-size:11pt;\">Spot #:</span></p></body></html>", nullptr));
        label_5->setText(QApplication::translate("Status", "<html><head/><body><p><span style=\" font-size:12pt;\">0</span></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("Status", "<html><head/><body><p><span style=\" font-size:11pt;\">Amount Due:</span></p></body></html>", nullptr));
        pushButton->setText(QApplication::translate("Status", "DONE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Status: public Ui_Status {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATUS_H
