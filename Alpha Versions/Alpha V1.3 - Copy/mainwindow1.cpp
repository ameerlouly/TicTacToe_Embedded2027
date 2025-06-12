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
    reset_pointer=ui->stackedWidget;
    ui->WrongWarning->hide();
}

void MainWindow1::on_Signup_Button_clicked()
{
    REG_Mode=SIGNUP;
    ui->Reset_buttom->hide();
    ui->phone_number_label->show();
    ui->phone_number->show();
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
    ui->phone_number_label->hide();
    ui->phone_number->hide();
    ui->Reset_buttom->show();
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
    QString QPhoneNumber = ui->phone_number->text();
    username = Qusername.toStdString();
    passcode = Qpassword.toStdString();
    passcodeConf = QpasswordConf.toStdString();
    PhoneNumber = QPhoneNumber.toStdString();

    if(REG_Mode == SIGNUP){
        if(passcode == "" || username == "" || PhoneNumber == ""){
            ui->WrongWarning->show();
            ui->WrongWarning->setText("You Should enter all fields");
        }
        else{
            if(passcode != passcodeConf){
                ui->WrongWarning->show();
                ui->WrongWarning->setText("Please confirm your password");
            }else{
                Check_data_forLogin(db,GameWindow,LoginWindow);
                ui->username->clear();
                ui->password->clear();
                ui->password_3->clear();
                ui->phone_number->clear();
            }
        }
    }
    else{

        Check_data_forLogin(db,GameWindow,LoginWindow);
        ui->username->clear();
        ui->password->clear();
        ui->password_3->clear();
        ui->phone_number->clear();
        if(AccountNotFound){
            ui->WrongWarning->setText("Wrong Username or Password");
            ui->WrongWarning->show();
            ui->username->clear();
            ui->password->clear();
            ui->password_3->clear();
            ui->phone_number->clear();
        }
    }
}



void MainWindow1::on_Confirm_reset_clicked()
{
    bool ret=false;
    QString Qusername = ui->username_reset->text();
    QString Qpassword = ui->pass_reset->text();
    QString QPhoneNumber = ui->Phone_reset->text();
    username = Qusername.toStdString();
    passcode = Qpassword.toStdString();
    PhoneNumber = QPhoneNumber.toStdString();

    if(passcode == "" || username == "" || PhoneNumber == ""){
        ui->wrong_input_reset->show();
        ui->wrong_input_reset->setText("You Should enter all fields");
    }
    else if(!resetPassword(db,username,PhoneNumber,passcode)){
        ui->wrong_input_reset->show();
        ui->wrong_input_reset->setText("Check username or Phone number");
    }
    else {
        ui->wrong_input_reset->show();
        ui->wrong_input_reset->setText("Done , Now Login to cont");
        ret=true;
    }

    ui->Phone_reset->clear();
    ui->pass_reset->clear();
    ui->username_reset->clear();
    if(ret)
        ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow1::on_Reset_buttom_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

