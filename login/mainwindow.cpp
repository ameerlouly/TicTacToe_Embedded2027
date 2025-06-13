#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "main.h"
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


void MainWindow::on_Signup_Button_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    ui->Login_User_Button->setText("Sign Up");

    ui->Warning_Label->hide();
    ui->ConfirmPassword->show();    // Show TextEdit
    ui->ConfirmPassword_Label->show();
}


void MainWindow::on_Guest_Button_clicked()
{
    close();
   // SecDialog secdialog;
  // secdialog.setModal(true);
  //  secdialog.exec();
   //secDialog = new SecDialog(this);
   //secDialog->show();
    GameWindow->show();

}


void MainWindow::on_Login_Button_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    ui->Login_User_Button->setText("Log In");

    ui->Warning_Label->hide();
    ui->ConfirmPassword->hide();
    ui->ConfirmPassword_Label->hide();
}


void MainWindow::on_BackLogin_button_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_Login_User_Button_clicked()
{
    if(!(ui->ConfirmPassword->isHidden()) &&    // Temp condition for UI, Use actual state variable for implementation
        (ui->password->text() != ui->ConfirmPassword->text()))
    {
        ui->Warning_Label->setText("Password doesn't Match");
        ui->Warning_Label->show();
    }
}


