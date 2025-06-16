/*
    mainwindow1.cpp
    Description: Contains Defintions to UI Slots for Login Window
*/

#include "mainwindow1.h"
#include "ui_mainwindow1.h"
#include "main.h"
#include "AItest.h"
#include <QMessageBox>

using namespace std;

std::string username;
std::string passcode;
std::string passcodeConf;
std::string PhoneNumber;

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
    ui->WarningReset_Label->hide();
}

void MainWindow1::on_Signup_Button_clicked()
{
    REG_Mode = SIGNUP;
    Gamewindow2->isGuest();

        /* UI Adjustments */
    ui->Reset_buttom->hide();
    ui->phone_number_label->show();
    ui->phone_number->show();
    ui->PhoneNumber_Spacer->changeSize(20, 20, QSizePolicy::Expanding, QSizePolicy::Fixed);
    ui->ConfirmPassword_Spacer->changeSize(20, 20, QSizePolicy::Expanding, QSizePolicy::Fixed);
    ui->stackedWidget->setCurrentIndex(1);
    ui->Login_User_Button->setText("Sign Up");

    ui->PasswordAndForget_Layout->setAlignment(ui->password_label, Qt::AlignCenter);
    // ui->password_label->setAlignment(Qt::AlignCenter);

    for (int i = 0; i < ui->verticalLayout_5->count(); ++i)
    {
        QLayoutItem* item = ui->verticalLayout_5->itemAt(i);
        if (item->widget())
        {
            item->widget()->show();
        }
    }
    for (int i = 0; i < ui->confContainer->count(); ++i)
    {
        QLayoutItem* item = ui->confContainer->itemAt(i);
        if (item->widget())
        {
            item->widget()->show();
        }
    }
}


void MainWindow1::on_Guest_Button_clicked()
{
   REG_Mode = GUEST;
   close();
   Check_data_forLogin(db,Gamewindow2,LoginWindow);
   Gamewindow2->isGuest();
   //GameWindow->show();
}


void MainWindow1::on_Login_Button_clicked()
{
    REG_Mode = LOGIN;   // Change Register Mode
    Gamewindow2->isGuest(); // Check if Guest or not

    /*UI Adjustments*/
    ui->phone_number_label->hide();
    ui->phone_number->hide();
    ui->PhoneNumber_Spacer->changeSize(0, 0, QSizePolicy::Fixed, QSizePolicy::Fixed);
    ui->ConfirmPassword_Spacer->changeSize(0, 0, QSizePolicy::Fixed, QSizePolicy::Fixed);

    ui->Reset_buttom->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
    ui->Reset_buttom->update();
    ui->Reset_buttom->show();
    ui->stackedWidget->setCurrentIndex(1);
    ui->Login_User_Button->setText("Log In");

    ui->PasswordAndForget_Layout->setAlignment(ui->password_label, Qt::AlignRight);
    // ui->password_label->setAlignment(Qt::AlignRight);

    for (int i = 0; i < ui->verticalLayout_5->count(); ++i)
    {
        QLayoutItem* item = ui->verticalLayout_5->itemAt(i);
        if (item->widget())
        {
            item->widget()->hide();
        }
    }
    for (int i = 0; i < ui->confContainer->count(); ++i)
    {
        QLayoutItem* item = ui->confContainer->itemAt(i);
        if (item->widget())
        {
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
        else
        {
            if(passcode != passcodeConf)
            {
                ui->WrongWarning->show();
                ui->WrongWarning->setText("Please confirm your password");
            }
            else
            {
                Check_data_forLogin(db,Gamewindow2,LoginWindow);
                ui->username->clear();
                ui->password->clear();
                ui->password_3->clear();
                ui->phone_number->clear();
            }
        }
    }
    else
    {

        Check_data_forLogin(db,Gamewindow2,LoginWindow);
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
    } // End of If Statement

    Gamewindow2->isGuest();
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
        ui->WarningReset_Label->show();
        ui->WarningReset_Label->setText("You Should enter all fields");
    }
    else if(!resetPassword(db,username,PhoneNumber,passcode)){
        ui->WarningReset_Label->show();
        ui->WarningReset_Label->setText("Check username or Phone number");
    }
    else {
        ui->WarningReset_Label->show();
        ui->WarningReset_Label->setText("Done , Now Login to cont");
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


void MainWindow1::on_BackLogin_button_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

