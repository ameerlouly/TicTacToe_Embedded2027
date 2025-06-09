#include "Login.h"
#include "ui_Login.h"

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

void MainWindow::on_pushButton_clicked()
{

}


void MainWindow::on_RegisterLabel_linkActivated(const QString &link)
{

}

