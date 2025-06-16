#include "secdialog.h"
#include "ui_secdialog.h"
#include "main.h"
#include "AItest.h"


QPushButton* GridButtons[9];
bool inHistory;

QTimer *myTimer[10]= {nullptr};

int ToBePlayed[10]={0};


SecDialog::SecDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SecDialog)
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

    ui->Rematch->hide();
    ui->GameReview->hide();
    ui->label->hide();

    ui->stackedWidget->setCurrentIndex(0);
    ui->ShureExit->setText("");

    isGuest();
    inHistory=false;
}

SecDialog::~SecDialog()
{
    delete ui;
}


void SecDialog::isGuest(){
    if(REG_Mode==GUSET){
        ui->history->setEnabled(false);
        ui->HistoryWarning->show();
        ui->HistoryWarning->setText("You Are In Guset Mode");
        ui->UsenameTag->setText("Welcome , Pls Sign In First");
        ui->Log_out->setText("Regstier Now");
    }else{
        ui->history->setEnabled(true);
        ui->UsenameTag->setText("Welcome " + QString::fromStdString(G_UserName));
        ui->Log_out->setText("LogOut");
        ui->HistoryWarning->hide();
    }
}

void SecDialog::OldGameHistory(int his[9]){
    ShowGrid();
    //ui->tableWidget_history->hide();
    ui->stackedWidget->setCurrentIndex(4);



    for(int i=0; i<9; i++){
        if(myTimer[i] != nullptr){
            if (myTimer[i]->isActive()) {
                myTimer[i]->stop();
                myTimer[i]->deleteLater();
            }
        }
        myTimer[i] =nullptr;
        myTimer[i] = new QTimer(Gamewindow2);
    }

    for (int i = 0; i < 9; i++) {
        ToBePlayed[i] = his[i];
        qDebug() << "resceved:" << ToBePlayed[i];
        clicked[i]=3;
        int delay = 500 + i * 500;
        //QTimer::singleShot(delay, Gamewindow2, [=]() {nextHistorymove(his[i], GridButtons);});
        myTimer[i]->setSingleShot(true);       // Fires only once (like QTimer::singleShot)
        myTimer[i]->setInterval(delay);         // Delay in milliseconds
        connect(myTimer[i], &QTimer::timeout, Gamewindow2, [=]() {nextHistorymove(ToBePlayed[i], GridButtons);});
        myTimer[i]->start();
    }
}

void  SecDialog::ShowGrid(){
    for(int i=0; i<9; i++){
        ToBePlayed[i]=0;
        GridButtons[i]->show();
        GridButtons[i]->setText("");
        GridButtons[i]->setEnabled(true);
    }
}


void SecDialog::on_startgame_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}



void SecDialog::on_PVP_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void SecDialog::on_PVE_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
    mode=3;
}


void SecDialog::on_normal_clicked()
{
      ui->stackedWidget->setCurrentIndex(4);
        mode=1;
      ReMatch();
      ShowGrid();
}


void SecDialog::on_infinite_clicked()
{
      ui->stackedWidget->setCurrentIndex(4);
        mode=2;
      ReMatch();
      ShowGrid();
}


void SecDialog::on_easy_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
    levelMode=static_cast<Difficulty>(1);
    ReMatch();
    ShowGrid();
}


void SecDialog::on_medium_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
    levelMode=static_cast<Difficulty>(2);
    ReMatch();
    ShowGrid();
}


void SecDialog::on_hard_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
    levelMode=static_cast<Difficulty>(3);
    ReMatch();
    ShowGrid();
}


void SecDialog::on_back_clicked()
{
      ui->stackedWidget->setCurrentIndex(1);
}


void SecDialog::on_back_2_clicked()
{
      ui->stackedWidget->setCurrentIndex(1);
}


void SecDialog::on_back_3_clicked()
{
      ui->stackedWidget->setCurrentIndex(0);
}

void SecDialog::on_tableWidget_itemClicked(QTableWidgetItem *item)
{
    if (item->row() == 2 && item->column() == 2) {
        ui->stackedWidget->setCurrentIndex(4);
    }
}

void SecDialog::on_back_4_clicked()
{
    if(ui->ShureExit->text()=="" && !ui->label->isVisible()){
        ui->ShureExit->setText("Are you sure you want to exit the game?");
    }
    else{
        ui->ShureExit->setText("");
        if(inHistory){
            ui->stackedWidget->setCurrentIndex(5);
        }
        else if(3 == mode){
            ui->stackedWidget->setCurrentIndex(3);
        }
        else if(1 == mode || 2 == mode ){
            ui->stackedWidget->setCurrentIndex(2);
        }

        ui->GameReview->hide();
        ui->Rematch->hide();
        ui->label->hide();

        ReMatch();
        ShowGrid();
    }


}

void SecDialog::on_history_clicked()
{
    inHistory=true;
    ui->stackedWidget->setCurrentIndex(5);
    viewGameHistory(db, ui->historyTable);
    ui->wins->setText(QString::number(TotalWins));
    ui->losses->setText(QString::number(TotalLoses));
    ui->draws->setText(QString::number(TotalDraws));

}


void SecDialog::on_settings_clicked()
{
    inHistory=false;
   ui->stackedWidget->setCurrentIndex(6);
}


void SecDialog::on_profile_clicked()
{
    inHistory=false;
    ui->stackedWidget->setCurrentIndex(7);
    ui->UsenameTag->show();
    ui->Log_out->show();
    isGuest();

}

void SecDialog::on_grid0_clicked()
{
    onButtonClicked(&NextPlayer , ui->grid0,0,&MoveNum ,db,GridButtons, ui->Rematch, ui->GameReview,ui->label);
    ui->ShureExit->setText("");
}

void SecDialog::on_grid1_clicked()
{
 onButtonClicked(&NextPlayer , ui->grid1,1,&MoveNum ,db,GridButtons, ui->Rematch, ui->GameReview,ui->label);
    ui->ShureExit->setText("");
}

void SecDialog::on_grid2_clicked()
{
 onButtonClicked(&NextPlayer , ui->grid2,2,&MoveNum ,db,GridButtons, ui->Rematch, ui->GameReview,ui->label);
    ui->ShureExit->setText("");
}


void SecDialog::on_grid3_clicked()
{
 onButtonClicked(&NextPlayer , ui->grid3,3,&MoveNum ,db,GridButtons, ui->Rematch, ui->GameReview,ui->label);
    ui->ShureExit->setText("");
}


void SecDialog::on_grid4_clicked()
{
 onButtonClicked(&NextPlayer , ui->grid4,4,&MoveNum ,db,GridButtons, ui->Rematch, ui->GameReview,ui->label);
    ui->ShureExit->setText("");
}


void SecDialog::on_grid5_clicked()
{
 onButtonClicked(&NextPlayer , ui->grid5,5,&MoveNum ,db,GridButtons, ui->Rematch, ui->GameReview,ui->label);
    ui->ShureExit->setText("");
}


void SecDialog::on_grid6_clicked()
{
 onButtonClicked(&NextPlayer , ui->grid6,6,&MoveNum ,db,GridButtons, ui->Rematch, ui->GameReview,ui->label);
    ui->ShureExit->setText("");
}


void SecDialog::on_grid7_clicked()
{
 onButtonClicked(&NextPlayer , ui->grid7,7,&MoveNum ,db,GridButtons, ui->Rematch, ui->GameReview,ui->label);
    ui->ShureExit->setText("");
}


void SecDialog::on_grid8_clicked()
{
 onButtonClicked(&NextPlayer , ui->grid8,8,&MoveNum ,db,GridButtons, ui->Rematch, ui->GameReview,ui->label);
    ui->ShureExit->setText("");
}


void SecDialog::on_Rematch_clicked()
{
    ui->Rematch->hide();
    ui->GameReview->hide();
    ui->label->hide();
    ReMatch();
    ShowGrid();
}


void SecDialog::on_GameReview_clicked()
{
    ShowGrid();
    for (int i = 0; i < 9; i++) {
        int delay = 500 + i * 500;
        QTimer::singleShot(delay, Gamewindow2, [=]() {nextHistorymove(HistoryRecorder[i], GridButtons);});
    }
}


void SecDialog::on_Log_out_clicked()
{
    logout(db);
    Gamewindow2->close();
    LoginWindow->show();
    //ui->NameInProfile->hide();

    if (QFile::exists(AuthPath)) {
        if (QFile::remove(AuthPath)) {
            qDebug() << "File deleted:" << AuthPath;
        } else {
            qDebug() << "Failed to delete file:" << AuthPath;
        }
    } else {
        qDebug() << "File does not exist:" << AuthPath;
    }
}

void SecDialog::returnBacktoPage0InGame(){
    ui->stackedWidget->setCurrentIndex(0);
}

void SecDialog::on_home_clicked()
{
    inHistory=false;
    ui->stackedWidget->setCurrentIndex(0);
}

