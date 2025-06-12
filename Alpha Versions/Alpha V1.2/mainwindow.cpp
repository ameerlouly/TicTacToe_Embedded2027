#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "AItest.h"
#include "main.h"

using namespace std;
std::string username;
std::string passcode;
std::string passcodeConf;
QPushButton * GridButtons[9];
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    GridButtons[0] = ui->grid0;
    GridButtons[1] = ui->grid1;
    GridButtons[2] = ui->grid2;
    GridButtons[3] = ui->grid3;
    GridButtons[4] = ui->grid4;
    GridButtons[5] = ui->grid5;
    GridButtons[6] = ui->grid6;
    GridButtons[7] = ui->grid7;
    GridButtons[8] = ui->grid8;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initializeButtons(){

    ui->grid0->hide();
    ui->grid1->hide();
    ui->grid2->hide();
    ui->grid3->hide();
    ui->grid4->hide();
    ui->grid5->hide();
    ui->grid6->hide();
    ui->grid7->hide();
    ui->grid8->hide();

    ui->showHistory->hide();
    ui->rematch->hide();
    ui->gameResut->hide();

    ui->PvAI_Button_easy->hide();
    ui->PvAI_Button_Normal->hide();
    ui->PvAI_Button_hard->hide();
    ui->normal_Button->hide();
    ui->infinite_Button->hide();
}

void  MainWindow::ShowGrid(){
    for(int i=0; i<9; i++){
        GridButtons[i]->show();
        GridButtons[i]->setText("");
        GridButtons[i]->setEnabled(true);
    }
}

void MainWindow::on_PvP_Button_clicked()
{
    ui->PvP_Button->hide();
    ui->PvAI_Button->hide();
    ui->ShowResults->hide();
    ui->normal_Button->show();
    ui->infinite_Button->show();
}

void MainWindow::on_PvAI_Button_clicked()
{
    ui->PvP_Button->hide();
    ui->PvAI_Button->hide();
    ui->ShowResults->hide();
    ui->PvAI_Button_Normal->show();
    ui->PvAI_Button_easy->show();
    ui->PvAI_Button_hard->show();
    mode=3;
}

void MainWindow::on_normal_Button_clicked()
{
    ui->normal_Button->hide();
    ui->infinite_Button->hide();
    mode=1;
    ShowGrid();
}


void MainWindow::on_infinite_Button_clicked()
{
    ui->normal_Button->hide();
    ui->infinite_Button->hide();
    mode=2;
    ShowGrid();
}


void MainWindow::on_PvAI_Button_easy_clicked()
{
    ui->PvAI_Button_Normal->hide();
    ui->PvAI_Button_easy->hide();
    ui->PvAI_Button_hard->hide();
    levelMode=static_cast<Difficulty>(1);
    ShowGrid();
}


void MainWindow::on_PvAI_Button_Normal_clicked()
{
    ui->PvAI_Button_Normal->hide();
    ui->PvAI_Button_easy->hide();
    ui->PvAI_Button_hard->hide();
    levelMode=static_cast<Difficulty>(2);
    ShowGrid();
}


void MainWindow::on_PvAI_Button_hard_clicked()
{
    ui->PvAI_Button_Normal->hide();
    ui->PvAI_Button_easy->hide();
    ui->PvAI_Button_hard->hide();
    levelMode=static_cast<Difficulty>(3);
    ShowGrid();
}


void MainWindow::on_ShowResults_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
    viewGameHistory(db, ui->tableWidget_history);
}


void MainWindow::on_grid0_clicked()
{
    onButtonClicked(&NextPlayer , ui->grid0,0,&MoveNum ,db,GridButtons,ui->rematch,ui->showHistory,ui->gameResut);
}
void MainWindow::on_grid1_clicked()
{
    onButtonClicked(&NextPlayer , ui->grid1,1,&MoveNum ,db,GridButtons,ui->rematch,ui->showHistory,ui->gameResut);
}
void MainWindow::on_grid2_clicked()
{
    onButtonClicked(&NextPlayer , ui->grid2,2,&MoveNum ,db,GridButtons,ui->rematch,ui->showHistory,ui->gameResut);
}
void MainWindow::on_grid3_clicked()
{
    onButtonClicked(&NextPlayer , ui->grid3,3,&MoveNum ,db,GridButtons,ui->rematch,ui->showHistory,ui->gameResut);
}
void MainWindow::on_grid4_clicked()
{
    onButtonClicked(&NextPlayer , ui->grid4,4,&MoveNum ,db,GridButtons,ui->rematch,ui->showHistory,ui->gameResut);
}
void MainWindow::on_grid5_clicked()
{
    onButtonClicked(&NextPlayer , ui->grid5,5,&MoveNum ,db,GridButtons,ui->rematch,ui->showHistory,ui->gameResut);
}
void MainWindow::on_grid6_clicked()
{
    onButtonClicked(&NextPlayer , ui->grid6,6,&MoveNum ,db,GridButtons,ui->rematch,ui->showHistory,ui->gameResut);
}
void MainWindow::on_grid7_clicked()
{
    onButtonClicked(&NextPlayer , ui->grid7,7,&MoveNum ,db,GridButtons,ui->rematch,ui->showHistory,ui->gameResut);
}
void MainWindow::on_grid8_clicked()
{
    onButtonClicked(&NextPlayer , ui->grid8,8,&MoveNum ,db,GridButtons,ui->rematch,ui->showHistory,ui->gameResut);
}


void MainWindow::on_rematch_clicked()
{
    ui->rematch->hide();
    ui->showHistory->hide();
    ReMatch();
    ShowGrid();
}


void MainWindow::on_showHistory_clicked()
{
    ShowGrid();
    for (int i = 0; i < 9; i++) {
        int delay = 500 + i * 500;
        QTimer::singleShot(delay, GameWindow, [=]() {nextHistorymove(HistoryRecorder[i], GridButtons);});
    }

}

