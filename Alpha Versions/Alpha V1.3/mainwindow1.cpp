#include "mainwindow1.h"
#include"mainwindow.h"
#include "ui_mainwindow1.h"
#include "main.h"
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
    ui->WrongWarning->hide();
}

void MainWindow1::on_Signup_Button_clicked()
{
    REG_Mode=SIGNUP;
    ui->stackedWidget->setCurrentIndex(1);
    ui->Login_User_Button->setText("Sign Up");

    for (int i = 0; i < ui->confirmPasswordPar->count(); ++i) {
        QLayoutItem* item = ui->confirmPasswordPar->itemAt(i);
        if (item->widget()) {
            item->widget()->show();
        }
    }
    for (int i = 0; i < ui->confContainer->count(); ++i) {
        QLayoutItem* item = ui->confContainer->itemAt(i);
        if (item->widget()) {
            item->widget()->show();
        }
    }
}


void MainWindow1::on_Guest_Button_clicked()
{
   REG_Mode=GUSET;
   close();
   GameWindow->show();
}


void MainWindow1::on_Login_Button_clicked()
{
    REG_Mode=LOGIN;
    ui->stackedWidget->setCurrentIndex(1);
    ui->Login_User_Button->setText("Log In");

    for (int i = 0; i < ui->confirmPasswordPar->count(); ++i) {
        QLayoutItem* item = ui->confirmPasswordPar->itemAt(i);
        if (item->widget()) {
            item->widget()->hide();
        }
    }
    for (int i = 0; i < ui->confContainer->count(); ++i) {
        QLayoutItem* item = ui->confContainer->itemAt(i);
        if (item->widget()) {
            item->widget()->hide();
        }
    }
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
    QString Qpassword = ui->password->text();
    QString QpasswordConf = ui->password_3->text();
    username = Qusername.toStdString();
    passcode = Qpassword.toStdString();
    passcodeConf = QpasswordConf.toStdString();

    if(REG_Mode == SIGNUP){
        if(passcode == "" || username == ""){
            ui->WrongWarning->show();
            ui->WrongWarning->setText("Username or Password can't be empty");
        }
        else{
            if(passcode != passcodeConf){
                ui->WrongWarning->show();
                ui->WrongWarning->setText("Please confirm your password");
            }else{
                Check_data_forLogin(db,GameWindow,LoginWindow);
                ui->username->clear();
                ui->password->clear();
            }
        }
    }
    else{

        Check_data_forLogin(db,GameWindow,LoginWindow);

        if(AccountNotFound){
            ui->WrongWarning->setText("Wrong Username or Password");
            ui->WrongWarning->show();
        }
    }
}


