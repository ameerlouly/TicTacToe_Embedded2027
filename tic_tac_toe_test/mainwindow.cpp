#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <string>
#include "play_mode.h"

using namespace std;

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
string username,password;

void MainWindow::on_name_text_cursorPositionChanged(int arg1, int arg2)
{

}


void MainWindow::on_pass_text_cursorPositionChanged(int arg1, int arg2)
{

}

void MainWindow::on_name_BTN_clicked()
{
    username = "ui->name_text" ;
    password = "ui->pass_text" ;
    this->hide();  // Hide the current MainWindow
    play_mode pm;
    pm.setModal(true);
    pm.exec();

}
