#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_LOGIN_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_Signup_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_continueasaguest_clicked()
{
   hide();
   // SecDialog secdialog;
  // secdialog.setModal(true);
  //  secdialog.exec();
   secDialog=new SecDialog(this);
   secDialog->show();
}

