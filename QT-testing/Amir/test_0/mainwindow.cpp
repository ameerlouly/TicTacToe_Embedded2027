#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "GameSettings.h"

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

    NormalPvPButton = ui->normal_Button;
    InfinitePvPButton = ui->infinite_Button;
}

void MainWindow::on_PvP_Button_clicked()
{
    ui->PvP_Button->hide();
    ui->PvAI_Button->hide();
    ui->normal_Button->show();
    ui->infinite_Button->show();
}


void MainWindow::on_PvP_Button_2_clicked()
{
    ui->PvP_Button->hide();
    ui->PvAI_Button->hide();
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

