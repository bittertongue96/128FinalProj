/********************************************************************************
** Form generated from reading UI file 'reservation.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESERVATION_H
#define UI_RESERVATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Reservation
{
public:
    QLabel *label_reserve;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLCDNumber *lcdNumber;
    QLCDNumber *lcdNumber_2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *Reservation)
    {
        if (Reservation->objectName().isEmpty())
            Reservation->setObjectName(QStringLiteral("Reservation"));
        Reservation->resize(400, 287);
        Reservation->setStyleSheet(QStringLiteral("background-image: url(:/img/images/blak.jpg);"));
        label_reserve = new QLabel(Reservation);
        label_reserve->setObjectName(QStringLiteral("label_reserve"));
        label_reserve->setGeometry(QRect(20, 270, 47, 13));
        layoutWidget = new QWidget(Reservation);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 60, 251, 101));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lcdNumber = new QLCDNumber(layoutWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setStyleSheet(QStringLiteral("background-image: url(:/img/images/whiteyellow.png);"));

        horizontalLayout->addWidget(lcdNumber);

        lcdNumber_2 = new QLCDNumber(layoutWidget);
        lcdNumber_2->setObjectName(QStringLiteral("lcdNumber_2"));
        lcdNumber_2->setStyleSheet(QStringLiteral("background-image: url(:/img/images/whiteyellow.png);"));

        horizontalLayout->addWidget(lcdNumber_2);

        layoutWidget1 = new QWidget(Reservation);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(40, 200, 301, 61));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(28, 167, 3, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QLinearGradient gradient(0, 0, 1, 0);
        gradient.setSpread(QGradient::PadSpread);
        gradient.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient.setColorAt(0, QColor(255, 178, 102, 255));
        gradient.setColorAt(0.55, QColor(235, 148, 61, 255));
        gradient.setColorAt(0.98, QColor(0, 0, 0, 255));
        gradient.setColorAt(1, QColor(0, 0, 0, 0));
        QBrush brush1(gradient);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient1(0, 0, 1, 0);
        gradient1.setSpread(QGradient::PadSpread);
        gradient1.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient1.setColorAt(0, QColor(255, 178, 102, 255));
        gradient1.setColorAt(0.55, QColor(235, 148, 61, 255));
        gradient1.setColorAt(0.98, QColor(0, 0, 0, 255));
        gradient1.setColorAt(1, QColor(0, 0, 0, 0));
        QBrush brush2(gradient1);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush2);
        QBrush brush3(QColor(120, 120, 120, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        QLinearGradient gradient2(0, 0, 1, 0);
        gradient2.setSpread(QGradient::PadSpread);
        gradient2.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient2.setColorAt(0, QColor(255, 178, 102, 255));
        gradient2.setColorAt(0.55, QColor(235, 148, 61, 255));
        gradient2.setColorAt(0.98, QColor(0, 0, 0, 255));
        gradient2.setColorAt(1, QColor(0, 0, 0, 0));
        QBrush brush4(gradient2);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush4);
        pushButton_2->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("Rockwell Extra Bold"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QStringLiteral("selection-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));"));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        QPalette palette1;
        QBrush brush5(QColor(18, 129, 1, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        pushButton->setPalette(palette1);
        pushButton->setFont(font);

        horizontalLayout_2->addWidget(pushButton);

        layoutWidget->raise();
        layoutWidget->raise();
        label_reserve->raise();

        retranslateUi(Reservation);

        QMetaObject::connectSlotsByName(Reservation);
    } // setupUi

    void retranslateUi(QDialog *Reservation)
    {
        Reservation->setWindowTitle(QApplication::translate("Reservation", "Dialog", nullptr));
        label_reserve->setText(QApplication::translate("Reservation", "Status +-", nullptr));
        pushButton_2->setText(QApplication::translate("Reservation", "CANCEL", nullptr));
        pushButton->setText(QApplication::translate("Reservation", "GO", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Reservation: public Ui_Reservation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESERVATION_H
