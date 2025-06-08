/*
 * ----------------------------------------------------
 *
 *  this script holds the game logic for the PvP mode (normal and infinite)
 *
 *  contains:
 *  some UI handel functions
 *  game history viewer
 *  game reset (to restart the game after it finishes)
 *  check winning patterns
 *
 * ----------------------------------------------------
 */

#include <QApplication>
#include <QPushButton>
#include <QVBoxLayout>
#include <QWidget>
#include <QMessageBox>
#include <QTimer>
#include "queue.h"


///functions and variables for gameplay
void onButtonClicked(int *x , QPushButton *button , int num , int clicked[9] , int *MoveNum);
void CheckWin(int clicked[9]);
int GridToNum(QPushButton *Button);
QPushButton *Grid[9];
queue<QPushButton* ,3> PlayerXQ;
queue<QPushButton* ,3> PlayerOQ;


///functions and variables for detailed history
void nextHistorymove(int x,QPushButton *Button[9]);
void showhistory(QPushButton *Button[9] , int hitory[9] ,  QWidget *window);
int MoveNum =0;
int HistoryRecorder[9] ={0};
QPushButton *ShowHistory;


///to restart the game
void ReMatch(QPushButton* Grid[9],int HistoryRecorder[9],int clicked[9],int *x);
QPushButton *ReMatchButton;


///to handle the mainmenu UI
void PvP();
void PvAI();
void normalPvP();
void infinitePvP();
QPushButton *PvPButton;
QPushButton *PvAIButton;
QPushButton *NormalPvPButton;
QPushButton *InfinitePvPButton;
int mode = 0;


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QWidget window;
    window.setWindowTitle("Window 1");

    int clicked[9] = {0};

    int x=1;  // who can start the game (X -> 1  O -> 2)

    for (int i = 0; i < 9; ++i)
    {
        Grid[i] = new QPushButton("",&window);
    }

    ShowHistory = new QPushButton("review game", &window);
    ReMatchButton = new QPushButton("Re-match", &window);

    PvPButton = new QPushButton("PvP", &window);
    PvAIButton = new QPushButton("PvAI", &window);
    NormalPvPButton = new QPushButton("Normal", &window);
    InfinitePvPButton = new QPushButton("Infinite", &window);


    ShowHistory->hide();
    ReMatchButton->hide();
    for (int i = 0; i < 9; ++i)
    {
        Grid[i]->hide();
    }
    NormalPvPButton->hide();
    InfinitePvPButton->hide();



    // here we define the grid buttons and their positions and fonts and sizes

    Grid[0]->setFixedSize(100, 100);
    Grid[1]->setFixedSize(100, 100);
    Grid[2]->setFixedSize(100, 100);
    Grid[3]->setFixedSize(100, 100);
    Grid[4]->setFixedSize(100, 100);
    Grid[5]->setFixedSize(100, 100);
    Grid[6]->setFixedSize(100, 100);
    Grid[7]->setFixedSize(100, 100);
    Grid[8]->setFixedSize(100, 100);

    ShowHistory->setFixedSize(200, 100);
    ReMatchButton->setFixedSize(100, 100);

    PvPButton->setFixedSize(200, 100);
    PvAIButton->setFixedSize(200, 100);

    NormalPvPButton->setFixedSize(200, 100);
    InfinitePvPButton->setFixedSize(200, 100);

    Grid[0]->move(100, 50);
    Grid[1]->move(200, 50);
    Grid[2]->move(300, 50);
    Grid[3]->move(100, 150);
    Grid[4]->move(200, 150);
    Grid[5]->move(300, 150);
    Grid[6]->move(100, 250);
    Grid[7]->move(200, 250);
    Grid[8]->move(300, 250);

    ShowHistory->move(100, 350);
    ReMatchButton->move(300,350);

    PvPButton->move(150,50);
    PvAIButton->move(150, 150);

    NormalPvPButton->move(150, 50);
    InfinitePvPButton->move(150, 150);

    QFont font;
    font.setPointSize(30);

    Grid[0]->setFont(font);
    Grid[1]->setFont(font);
    Grid[2]->setFont(font);
    Grid[3]->setFont(font);
    Grid[4]->setFont(font);
    Grid[5]->setFont(font);
    Grid[6]->setFont(font);
    Grid[7]->setFont(font);
    Grid[8]->setFont(font);


    QVBoxLayout *layout = new QVBoxLayout();



    // here we connect each button to a function

    QObject::connect(Grid[0], &QPushButton::clicked, [&]() {onButtonClicked(&x , Grid[0],0, clicked,&MoveNum); });
    QObject::connect(Grid[1], &QPushButton::clicked, [&]() {onButtonClicked(&x , Grid[1],1, clicked,&MoveNum); });
    QObject::connect(Grid[2], &QPushButton::clicked, [&]() {onButtonClicked(&x , Grid[2],2, clicked,&MoveNum); });
    QObject::connect(Grid[3], &QPushButton::clicked, [&]() {onButtonClicked(&x , Grid[3],3, clicked,&MoveNum); });
    QObject::connect(Grid[4], &QPushButton::clicked, [&]() {onButtonClicked(&x , Grid[4],4, clicked,&MoveNum); });
    QObject::connect(Grid[5], &QPushButton::clicked, [&]() {onButtonClicked(&x , Grid[5],5, clicked,&MoveNum); });
    QObject::connect(Grid[6], &QPushButton::clicked, [&]() {onButtonClicked(&x , Grid[6],6, clicked,&MoveNum); });
    QObject::connect(Grid[7], &QPushButton::clicked, [&]() {onButtonClicked(&x , Grid[7],7, clicked,&MoveNum); });
    QObject::connect(Grid[8], &QPushButton::clicked, [&]() {onButtonClicked(&x , Grid[8],8, clicked,&MoveNum); });

    QObject::connect(ShowHistory, &QPushButton::clicked,[&]() {showhistory(Grid,HistoryRecorder,&window); });
    QObject::connect(ReMatchButton, &QPushButton::clicked,[&]() {ReMatch(Grid,HistoryRecorder,clicked,&x); });

    QObject::connect(PvPButton, &QPushButton::clicked,[&]() {PvP();});
    QObject::connect(PvAIButton, &QPushButton::clicked,[&]() {PvAI(); });
    QObject::connect(NormalPvPButton, &QPushButton::clicked,[&]() {normalPvP(); });
    QObject::connect(InfinitePvPButton, &QPushButton::clicked,[&]() {infinitePvP(); });


    window.setLayout(layout);
    window.resize(500, 500);
    window.show();

    return app.exec();
}

/// internal function (don't attach it to any thing)
int GridToNum(QPushButton *Button){

    for(int i=0; i<9; i++){
        if(Button == Grid[i]){
            return i;
        }
    }
    return 404;
}


/// this function must be attached to each button in the game grid
void onButtonClicked(int *x , QPushButton *button , int num , int clicked[9],int *MoveNum) {

    if(clicked[num]<1){ // checks if this button is available and wasn't clicked before
        if(*x ==1){
            button ->setText("X");
            clicked[num]=1;

            if(mode!=2){
                HistoryRecorder[*MoveNum]= (10*(*x)) + num;
            }

            if(mode==2){

                if(PlayerOQ.isfull()){ // if the another player has already 3 moves on the grid we need to warn him which move will be removed next time he playes
                    QPushButton *dash =PlayerOQ.peak();
                    dash->setEnabled(false);
                }

               QPushButton *remove = PlayerXQ.push(Grid[num]);
                if(remove!= nullptr){
                    remove->setEnabled(true);
                    // remove->setText(QString("%1").arg(GridToNum(remove)+1));  // used for debuging
                    remove->setText("");
                    clicked[GridToNum(remove)] = 0;
                }
            }

            *x=2;
        }

        else if(*x ==2){
            button ->setText("O");
            clicked[num]=2;

            if(mode!=2){
                HistoryRecorder[*MoveNum]= (10*(*x)) + num;
            }

            if(mode==2){

                if(PlayerXQ.isfull()){
                    QPushButton *dash =PlayerXQ.peak();
                    dash->setEnabled(false);
                }

                QPushButton *remove = PlayerOQ.push(Grid[num]);
                if(remove!= nullptr){
                    remove->setEnabled(true);
                    //remove->setText(QString("%1").arg(GridToNum(remove)+1));  // used for debuging
                    remove->setText("");
                    clicked[GridToNum(remove)] = 0;
                }
            }

            *x=1;
        }

        (*MoveNum)++;
    }




    CheckWin(clicked);

    return;
}



/// internal function (don't attach it to any thing)
void CheckWin(int clicked[9]){

    int WhoWon =0;  // 0-> game still running ,  1-> X Win  , 2 -> O Win , 3-> Draw

    if (clicked[0] == clicked[1] && clicked[1] == clicked[2] && clicked[0] != 0) {
        WhoWon = clicked[0];
    }

    else if (clicked[3] == clicked[4] && clicked[4] == clicked[5] && clicked[3] != 0) {
        WhoWon = clicked[3];
    }

    else if (clicked[6] == clicked[7] && clicked[7] == clicked[8] && clicked[6] != 0) {
        WhoWon = clicked[6];
    }

    else if (clicked[0] == clicked[3] && clicked[3] == clicked[6] && clicked[0] != 0) {
        WhoWon = clicked[0];
    }

    else if (clicked[1] == clicked[4] && clicked[4] == clicked[7] && clicked[1] != 0) {
        WhoWon = clicked[1];
    }

    else if (clicked[2] == clicked[5] && clicked[5] == clicked[8] && clicked[2] != 0) {
        WhoWon = clicked[2];
    }

    else if (clicked[0] == clicked[4] && clicked[4] == clicked[8] && clicked[0] != 0) {
        WhoWon = clicked[0];
    }

    else if (clicked[2] == clicked[4] && clicked[4] == clicked[6] && clicked[2] != 0) {
        WhoWon = clicked[2];
    }
    else{
        bool draw = (clicked[0] != 0);

        for(int i=1; i<9; i++){
            draw &= (clicked[i]!=0);
        }

        if(draw){
            WhoWon=3;
        }
    }

    if(WhoWon != 0){ //if someone wins we now need to diable the grid and show some buttons (we don't disable buttons we just don't accept new input)

        //TODO: save status in the database

        for(int i=0; i<9; i++){  // this loop will modify all buttons values disabling the players from editing the grid (again: we don't disable buttons)
            clicked[i]=3;
        }

        if(mode!=2){
            ShowHistory->show();
        }

        ReMatchButton->show();
    }

    return;
}



/// this function must be attached to the "Show History" button
void showhistory(QPushButton *Button[9] , int hitory[9] ,  QWidget *window){

    for(int i = 0; i<9; i++){

        Button[i]->setText(QString("%1").arg(i+1));
    }

    for (int i = 0; i < 9; i++) {
        int delay = 500 + i * 500;
        QTimer::singleShot(delay, window, [=]() {
            nextHistorymove(hitory[i], Button);
        });
    }

    return;
}



/// internal function (don't attach it to any thing)
void nextHistorymove(int x,QPushButton *Button[9]){

    if(x>=20)
        Button[x-20] ->setText("O");
    else if(x<20 && 9<x)
        Button[x-10] ->setText("X");
    return;
}



/// this function must be attached to the "Re-Match" button
void ReMatch(QPushButton* Grid[9],int HistoryRecorder[9],int clicked[9],int *x){

    for(int i = 0; i<9; i++){
       // Grid[i]->setText(QString("%1").arg(i+1));  // to restore numbers on the grid for debugging
        Grid[i]->setText("");
        HistoryRecorder[i]= 0;  // to reset the history
        clicked[i]=0;  // to enable the grid again
        MoveNum=0;  // to reset the number of moves
        Grid[i]->setEnabled(true);
    }

    PlayerXQ.clean();
    PlayerOQ.clean();
    *x=1;  // to restart with player x playing the first move
    ShowHistory->hide();
    ReMatchButton->hide();
}



void PvP(){
    PvPButton-> hide();
    PvAIButton-> hide();
    NormalPvPButton->show();
    InfinitePvPButton->show();
}

void PvAI(){
    PvPButton-> hide();
    PvAIButton-> hide();
}

void normalPvP(){
    NormalPvPButton->hide();
    InfinitePvPButton->hide();
    mode=1;
    for (int i = 0; i < 9; ++i)
    {
        Grid[i]->show();
    }
}

void infinitePvP(){
    NormalPvPButton->hide();
    InfinitePvPButton->hide();
    mode=2;
    for (int i = 0; i < 9; ++i)
    {
        Grid[i]->show();
    }
}



