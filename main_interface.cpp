#include "main_interface.h"
#include "ui_main_interface.h"
#include "parking.h"

main_interface::main_interface(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::main_interface)
{
    ui->setupUi(this);
}

main_interface::~main_interface()
{
    delete ui;
}

void main_interface::on_pushButton_clicked()
{
    //PUT QUERIES FOR 26 SPOTS HERE
    //SPOT ID SHOULD BE 0 - 26
    //SPOT Name would form of ID
    //USER IN SPOT IS NULL
    hide();
    parking one;
    one.setModal(true);
    one.setWindowTitle("PARKING SPOT");
    one.exec();
}
