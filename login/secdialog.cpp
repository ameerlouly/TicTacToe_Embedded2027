#include "secdialog.h"
#include "ui_secdialog.h"

SecDialog::SecDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SecDialog)
{
    ui->setupUi(this);
}

SecDialog::~SecDialog()
{
    delete ui;
}

void SecDialog::on_startgame_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}



<<<<<<< HEAD
=======
void SecDialog::on_PVP_clicked()
{
     ui->stackedWidget->setCurrentIndex(3);
}


void SecDialog::on_PVE_clicked()
{
     ui->stackedWidget->setCurrentIndex(4);
}


void SecDialog::on_normal_clicked()
{
      ui->stackedWidget->setCurrentIndex(5);
}


void SecDialog::on_infinite_clicked()
{
      ui->stackedWidget->setCurrentIndex(5);
}


void SecDialog::on_easy_clicked()
{
      ui->stackedWidget->setCurrentIndex(5);
}


void SecDialog::on_medium_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);

}


void SecDialog::on_hard_clicked()
{
      ui->stackedWidget->setCurrentIndex(5);
}


void SecDialog::on_back_clicked()
{
      ui->stackedWidget->setCurrentIndex(2);
}


void SecDialog::on_back_2_clicked()
{
      ui->stackedWidget->setCurrentIndex(2);
}


void SecDialog::on_back_3_clicked()
{
      ui->stackedWidget->setCurrentIndex(1);
}
>>>>>>> 3be898beb9055143cd2ee29797275d6934137c0e

