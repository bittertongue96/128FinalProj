/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *centralWidget;
    QFrame *frame;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLineEdit *lineEdit_Password;
    QLineEdit *lineEdit_Username;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_login;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->setWindowModality(Qt::NonModal);
        Login->setEnabled(true);
        Login->resize(632, 349);
        QFont font;
        font.setFamily(QStringLiteral("Eras Bold ITC"));
        Login->setFont(font);
        Login->setLayoutDirection(Qt::LeftToRight);
        Login->setAutoFillBackground(true);
        Login->setStyleSheet(QStringLiteral(""));
        Login->setToolButtonStyle(Qt::ToolButtonIconOnly);
        centralWidget = new QWidget(Login);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 631, 351));
        frame->setStyleSheet(QLatin1String(" \n"
"background-image: url(:/img/images/another.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(350, 230, 141, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Eras Bold ITC"));
        font1.setPointSize(22);
        font1.setBold(false);
        font1.setWeight(50);
        font1.setKerning(true);
        pushButton_2->setFont(font1);
        pushButton_2->setFocusPolicy(Qt::NoFocus);
        pushButton_2->setLayoutDirection(Qt::LeftToRight);
        pushButton_2->setAutoFillBackground(false);
        pushButton_2->setStyleSheet(QLatin1String(" \n"
"background-image: url(:/img/images/buttoner.png);"));
        pushButton_2->setAutoDefault(false);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 230, 121, 41));
        QFont font2;
        font2.setFamily(QStringLiteral("Eras Bold ITC"));
        font2.setPointSize(22);
        pushButton->setFont(font2);
        pushButton->setLayoutDirection(Qt::LeftToRight);
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QLatin1String(" \n"
"background-image: url(:/img/images/buttoner.png); "));
        lineEdit_Password = new QLineEdit(frame);
        lineEdit_Password->setObjectName(QStringLiteral("lineEdit_Password"));
        lineEdit_Password->setGeometry(QRect(120, 120, 181, 20));
        lineEdit_Password->setStyleSheet(QLatin1String(" \n"
"background-image: url(:/img/images/usernameradsdas.png);"));
        lineEdit_Password->setEchoMode(QLineEdit::Password);
        lineEdit_Username = new QLineEdit(frame);
        lineEdit_Username->setObjectName(QStringLiteral("lineEdit_Username"));
        lineEdit_Username->setGeometry(QRect(120, 80, 181, 21));
        lineEdit_Username->setStyleSheet(QLatin1String(" \n"
"background-image: url(:/img/images/usernameradsdas.png);"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 120, 81, 21));
        QPalette palette;
        QBrush brush(QColor(64, 198, 1, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_3->setPalette(palette);
        QFont font3;
        font3.setFamily(QStringLiteral("Eras Bold ITC"));
        font3.setPointSize(11);
        label_3->setFont(font3);
        label_3->setStyleSheet(QStringLiteral(""));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 80, 81, 21));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        label_2->setPalette(palette1);
        label_2->setFont(font3);
        label_2->setAutoFillBackground(false);
        label_2->setStyleSheet(QStringLiteral(""));
        label_login = new QLabel(frame);
        label_login->setObjectName(QStringLiteral("label_login"));
        label_login->setGeometry(QRect(300, -10, 341, 51));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush3(QColor(129, 129, 129, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        label_login->setPalette(palette2);
        QFont font4;
        font4.setFamily(QStringLiteral("Impact"));
        font4.setPointSize(14);
        label_login->setFont(font4);
        label_login->setLayoutDirection(Qt::LeftToRight);
        label_login->setAutoFillBackground(false);
        label_login->setStyleSheet(QStringLiteral(""));
        label_login->setFrameShadow(QFrame::Raised);
        pushButton_2->raise();
        pushButton->raise();
        label_login->raise();
        label_2->raise();
        label_3->raise();
        lineEdit_Password->raise();
        lineEdit_Username->raise();
        Login->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Login);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Login->setStatusBar(statusBar);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QMainWindow *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Login", nullptr));
        pushButton_2->setText(QApplication::translate("Login", "Sign Up ", nullptr));
        pushButton->setText(QApplication::translate("Login", "Log In", nullptr));
        label_3->setText(QApplication::translate("Login", "Password", nullptr));
        label_2->setText(QApplication::translate("Login", "Username", nullptr));
        label_login->setText(QApplication::translate("Login", "       (+)Status", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
