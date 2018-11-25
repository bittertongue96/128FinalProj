#include "login.h"
#include "reservation.h"
#include "ui_reservation.h"
#include <QMessageBox>
#include <status.h>
#include <main_interface.h>

Reservation::Reservation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Reservation)
{
    ui->setupUi(this);

    QString one = "lcdNumber";
    QString two = "lcdNumber_2";

    lCDNumber2 = Reservation::findChild<QLCDNumber *>(one);
    lCDNumber3 = Reservation::findChild<QLCDNumber *>(two);

    updatetimer = new QTimer(this);
    initial();

    connect(updatetimer, SIGNAL(timeout()), this, SLOT(update()));
}

Reservation::~Reservation()
{
    delete ui;
}

void Reservation::profile(){
    hide();
    main_interface a;
    a.setModal(true);
    a.setWindowTitle("Profile Page");
    a.exec();
}

void Reservation::initial()
{
   updatetimer->start(1000);
   mcount = 19;
   scount = 59;
   lCDNumber2->display(mcount);
   lCDNumber3->display(scount);
}

void Reservation::update()
{
    scount--;
    if(scount<0) {
        scount = 59;
        mcount--;
    }
    if(mcount<0) {
        mcount = 59;
    }
    if(scount == 0 && mcount == 0){
        profile();
    }

    lCDNumber2->display(mcount);
    lCDNumber3->display(scount);
}

void Reservation::on_pushButton_clicked() //GO
{
    hide();
    Status b;
    b.setModal(true);
    b.setWindowTitle("Profile Page");
    b.exec();
}

void Reservation::on_pushButton_2_clicked() //CANCEL
{
    profile();
}
