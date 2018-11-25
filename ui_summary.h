/********************************************************************************
** Form generated from reading UI file 'summary.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUMMARY_H
#define UI_SUMMARY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Summary
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *Summary)
    {
        if (Summary->objectName().isEmpty())
            Summary->setObjectName(QStringLiteral("Summary"));
        Summary->resize(400, 300);
        pushButton = new QPushButton(Summary);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(50, 90, 271, 131));

        retranslateUi(Summary);

        QMetaObject::connectSlotsByName(Summary);
    } // setupUi

    void retranslateUi(QDialog *Summary)
    {
        Summary->setWindowTitle(QApplication::translate("Summary", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("Summary", "RECEIPT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Summary: public Ui_Summary {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUMMARY_H
