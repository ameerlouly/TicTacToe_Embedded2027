#include "mainwindow1.h"
#include "ui_mainwindow1.h"
#include "GameSettings.h"
#include "AItest.h"
#include <QMessageBox>

MainWindow1::MainWindow1(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow1)
{
    ui->setupUi(this);
}

MainWindow1::~MainWindow1()
{
    delete ui;
}

void MainWindow1::initializeButtons()
{
    GuestButton=ui->Guest_Button;
    WrongLogin=ui->WrongWarning;
    LoginCheck= ui->Login_User_Button;
    //pagemover=ui->stackedWidget;
}

void MainWindow1::on_Signup_Button_clicked()
{
    REG_Mode=SIGNUP;
    ui->stackedWidget->setCurrentIndex(1);
    ui->Login_User_Button->setText("Sign Up");
}


void MainWindow1::on_Guest_Button_clicked()
{
   REG_Mode=GUSET;
   close();
   // SecDialog secdialog;
  // secdialog.setModal(true);
  //  secdialog.exec();
   //secDialog = new SecDialog(this);
   //secDialog->show();
  // delete ui;
}


void MainWindow1::on_Login_Button_clicked()
{
    REG_Mode=LOGIN;
    ui->stackedWidget->setCurrentIndex(1);
    ui->Login_User_Button->setText("Log In");
}


void MainWindow1::on_BackLogin_button_clicked()
{
    ui->WrongWarning->hide();
    ui->username->clear();
    ui->password->clear();
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow1::on_Login_User_Button_clicked()
{
    QString Qusername = ui->username->text();
    QString Qpassword = ui->password->text();;
    username = Qusername.toStdString();
    passcode = Qpassword.toStdString();
}


