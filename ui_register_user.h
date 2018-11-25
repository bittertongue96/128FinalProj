/********************************************************************************
** Form generated from reading UI file 'register_user.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_USER_H
#define UI_REGISTER_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_register_user
{
public:
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *lineEdit_Username;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_Plate_Number;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *lineEdit_Name;
    QPushButton *pushButton;
    QLabel *label_reg;

    void setupUi(QDialog *register_user)
    {
        if (register_user->objectName().isEmpty())
            register_user->setObjectName(QStringLiteral("register_user"));
        register_user->resize(413, 274);
        register_user->setStyleSheet(QLatin1String(" \n"
"background-image: url(:/img/images/blak.jpg);"));
        groupBox = new QGroupBox(register_user);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(60, 30, 301, 231));
        groupBox->setStyleSheet(QStringLiteral("background-image: url(:/img/images/reg.png);"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font;
        font.setFamily(QStringLiteral("HP Simplified"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(label_3);

        lineEdit_Username = new QLineEdit(groupBox);
        lineEdit_Username->setObjectName(QStringLiteral("lineEdit_Username"));
        lineEdit_Username->setStyleSheet(QLatin1String(" \n"
"background-image: url(:/img/images/whiteyellow.png);"));

        horizontalLayout->addWidget(lineEdit_Username);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QLatin1String(" \n"
"background-image: url(:/img/images/dudu2.png);"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_Plate_Number = new QLineEdit(groupBox);
        lineEdit_Plate_Number->setObjectName(QStringLiteral("lineEdit_Plate_Number"));
        lineEdit_Plate_Number->setStyleSheet(QLatin1String(" \n"
"background-image: url(:/img/images/whiteyellow.png);"));

        horizontalLayout_2->addWidget(lineEdit_Plate_Number);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);
        label->setStyleSheet(QLatin1String(" \n"
"background-image: url(:/img/images/dudu.png);"));

        horizontalLayout_3->addWidget(label);

        lineEdit_Name = new QLineEdit(groupBox);
        lineEdit_Name->setObjectName(QStringLiteral("lineEdit_Name"));
        lineEdit_Name->setStyleSheet(QLatin1String(" \n"
"background-image: url(:/img/images/whiteyellow.png);"));

        horizontalLayout_3->addWidget(lineEdit_Name);


        verticalLayout->addLayout(horizontalLayout_3);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QFont font1;
        font1.setFamily(QStringLiteral("HP Simplified"));
        font1.setPointSize(22);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QLatin1String(" \n"
"background-image: url(:/img/images/buttoner.png);"));

        verticalLayout->addWidget(pushButton);

        label_reg = new QLabel(register_user);
        label_reg->setObjectName(QStringLiteral("label_reg"));
        label_reg->setGeometry(QRect(170, 270, 71, 16));
        label_reg->raise();
        groupBox->raise();

        retranslateUi(register_user);

        QMetaObject::connectSlotsByName(register_user);
    } // setupUi

    void retranslateUi(QDialog *register_user)
    {
        register_user->setWindowTitle(QApplication::translate("register_user", "Dialog", nullptr));
        groupBox->setTitle(QString());
        label_3->setText(QApplication::translate("register_user", "Username", nullptr));
        label_2->setText(QApplication::translate("register_user", "Plate Number", nullptr));
        label->setText(QApplication::translate("register_user", "Name", nullptr));
        pushButton->setText(QApplication::translate("register_user", "Register", nullptr));
        label_reg->setText(QApplication::translate("register_user", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class register_user: public Ui_register_user {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_USER_H
