/********************************************************************************
** Form generated from reading UI file 'main_interface.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_INTERFACE_H
#define UI_MAIN_INTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_main_interface
{
public:
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    QPushButton *pushButton;
    QLabel *label_5;

    void setupUi(QDialog *main_interface)
    {
        if (main_interface->objectName().isEmpty())
            main_interface->setObjectName(QStringLiteral("main_interface"));
        main_interface->resize(429, 259);
        main_interface->setStyleSheet(QStringLiteral("background-image: url(:/img/images/blak.jpg);"));
        label = new QLabel(main_interface);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 30, 161, 161));
        label->setStyleSheet(QLatin1String("#label{\n"
"background-color: transparent;\n"
"border-image: url(:images/prof.jpg);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}"));
        label_3 = new QLabel(main_interface);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(230, 210, 161, 31));
        QPalette palette;
        QBrush brush(QColor(2, 109, 20, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_3->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("Tw Cen MT"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral("background-image: url(:/img/images/white.png);"));
        label_2 = new QLabel(main_interface);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 210, 161, 31));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_2->setPalette(palette1);
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("background-image: url(:/img/images/white.png);"));
        pushButton = new QPushButton(main_interface);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(220, 80, 181, 61));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMaximumSize(QSize(382, 16777215));
        QPalette palette2;
        pushButton->setPalette(palette2);
        QFont font1;
        font1.setFamily(QStringLiteral("Eras Bold ITC"));
        font1.setPointSize(12);
        pushButton->setFont(font1);
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QLatin1String(" \n"
"background-image: url(:/img/images/buttoner.png);"));
        label_5 = new QLabel(main_interface);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 50, 101, 101));
        label_5->setStyleSheet(QStringLiteral("image: url(:/img/images/anon.png);"));
        label->raise();
        pushButton->raise();
        label_3->raise();
        label_2->raise();
        label_5->raise();

        retranslateUi(main_interface);

        QMetaObject::connectSlotsByName(main_interface);
    } // setupUi

    void retranslateUi(QDialog *main_interface)
    {
        main_interface->setWindowTitle(QApplication::translate("main_interface", "Dialog", nullptr));
        label->setText(QString());
#ifndef QT_NO_TOOLTIP
        label_3->setToolTip(QApplication::translate("main_interface", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("main_interface", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt;\">ABCD-1234</span></p></body></html>", nullptr));
#ifndef QT_NO_TOOLTIP
        label_2->setToolTip(QApplication::translate("main_interface", "<html><head/><body><p><img src=\":/img/images/page1 button.png\"/></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        label_2->setWhatsThis(QApplication::translate("main_interface", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
        label_2->setText(QApplication::translate("main_interface", "Anon Dela Non Non", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pushButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        pushButton->setText(QApplication::translate("main_interface", "RESERVE P100", nullptr));
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class main_interface: public Ui_main_interface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_INTERFACE_H
