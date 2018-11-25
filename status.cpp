#include "status.h"
#include "ui_status.h"
#include <summary.h>
#include <QTimer>
#include <math.h>
#include <QMessageBox>
#include <QString>

Status::Status(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Status)
{
    ui->setupUi(this);
    QString one = "lcdNumber";
    QString two = "lcdNumber_2";
    QString three = "lcdNumber_3";
    QString four = "lcdNumber_4";

    lCDNum1 = Status::findChild<QLCDNumber *>(one);
    lCDNum2 = Status::findChild<QLCDNumber *>(two);
    lCDNum3 = Status::findChild<QLCDNumber *>(three);
    lCDNum4 = Status::findChild<QLCDNumber *>(four);

    timer = new QTimer(this);

    initial_1();

    connect(timer, SIGNAL(timeout()), this, SLOT(update_1()));

}

Status::~Status()
{
    delete ui;
}

void Status::summary(){
    total = ((hr*60) + (sec/60) + min);
    //INSERT INTO ORDER TABLE
    QString s =  QString::number(total);
    QString p =  QString::number(pay);

    hide();

    QMessageBox msgBox;
    msgBox.setText("TOTAL : "+p);
    msgBox.exec();

    Summary a;
    a.setModal(true);
    a.setWindowTitle("Profile Page");
    a.exec();
}

void Status::initial_1()
{
   timer->start(10);
   hr = 0;
   min = 0;
   sec = 0;
   pay = 10;
   count = 0;

   lCDNum1->display(pay);
   lCDNum2->display(hr);
   lCDNum3->display(min);
   lCDNum4->display(sec);
}

void Status::update_1()
{
    sec++;
    if(count == 5){
        pay = pay + 10;
        count = 0;
    }
    if(sec > 59) {
        sec = 0;
        min++;
        count++;
    }
    if(min > 59) {
        min = 0;
        hr++;
    }
    if(hr == 24 && min == 0 && sec == 0){
        summary();
    }

    lCDNum1->display(pay);
    lCDNum2->display(hr);
    lCDNum3->display(min);
    lCDNum4->display(sec);
}

void Status::on_pushButton_clicked()
{
    summary();
}
