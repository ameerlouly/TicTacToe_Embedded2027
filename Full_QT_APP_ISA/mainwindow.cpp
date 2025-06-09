#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "GameSettings.h"
#include "AItest.h"
using namespace std;
std::string username;
std::string passcode;
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

void MainWindow::initializeButtons(){

    Grid[0] = ui->grid0;
    Grid[1] = ui->grid1;
    Grid[2] = ui->grid2;
    Grid[3] = ui->grid3;
    Grid[4] = ui->grid4;
    Grid[5] = ui->grid5;
    Grid[6] = ui->grid6;
    Grid[7] = ui->grid7;
    Grid[8] = ui->grid8;

    ShowHistory=ui->showHistory;
    ReMatchButton=ui->rematch;
    WrongLogin=ui->wronginput;
    NormalPvPButton = ui->normal_Button;
    InfinitePvPButton = ui->infinite_Button;
    AiEasyMode = ui->PvAI_Button_easy;
    AiNormalMode = ui->PvAI_Button_Normal;
    AiHardMode = ui->PvAI_Button_hard;
    AIbottom = ui->PvAI_Button;
    LoginCheck= ui->Login_PushBottom;
    pagemover=ui->stackedWidget;
}

void MainWindow::on_PvP_Button_clicked()
{
    ui->PvP_Button->hide();
    ui->PvAI_Button->hide();
    ui->normal_Button->show();
    ui->infinite_Button->show();
}

void MainWindow::on_PvAI_Button_clicked()
{
    ui->PvP_Button->hide();
    ui->PvAI_Button->hide();
    ui->PvAI_Button_Normal->show();
    ui->PvAI_Button_easy->show();
    ui->PvAI_Button_hard->show();
}

void MainWindow::on_normal_Button_clicked()
{
    ui->normal_Button->hide();
    ui->infinite_Button->hide();
}


void MainWindow::on_infinite_Button_clicked()
{
    ui->normal_Button->hide();
    ui->infinite_Button->hide();
}


void MainWindow::on_PvAI_Button_easy_clicked()
{
    ui->PvAI_Button_Normal->hide();
    ui->PvAI_Button_easy->hide();
    ui->PvAI_Button_hard->hide();
}


void MainWindow::on_PvAI_Button_Normal_clicked()
{
    ui->PvAI_Button_Normal->hide();
    ui->PvAI_Button_easy->hide();
    ui->PvAI_Button_hard->hide();
}


void MainWindow::on_PvAI_Button_hard_clicked()
{
    ui->PvAI_Button_Normal->hide();
    ui->PvAI_Button_easy->hide();
    ui->PvAI_Button_hard->hide();
}


void MainWindow::on_gusetModeSelect_clicked()
{
    REG_Mode=GUSET;
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_SignupModeSelect_clicked()
{
    REG_Mode=SIGNUP;
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_loginModeselect_clicked()
{
    REG_Mode=LOGIN;
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_Login_PushBottom_clicked()
{
    QString Qusername = ui->username_input->text();
    QString Qpassword = ui->passcode_input->text();;
    username = Qusername.toStdString();
    passcode = Qpassword.toStdString();
}

