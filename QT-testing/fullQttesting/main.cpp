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

#include"mainwindow.h"
#include "GameSettings.h"

#include <QApplication>
#include <QPushButton>
#include <QVBoxLayout>
#include <QWidget>
#include <QMessageBox>
#include <QTimer>
#include "queue.h"
#include "AItest.h"
#include "sqlite3.h"

///functions and variables for gameplay
void onButtonClicked(int *x , QPushButton *button , int num , int clicked[9] , int *MoveNum);
void CheckWin(int clicked[9]);
int GridToNum(QPushButton *Button);
//QPushButton *Grid[9];
queue<QPushButton* ,3> PlayerXQ;
queue<QPushButton* ,3> PlayerOQ;


///functions and variables for detailed history
void nextHistorymove(int x,QPushButton *Button[9]);
void showhistory(QPushButton *Button[9] , int hitory[9] ,  QWidget *window);
int MoveNum =0;
int HistoryRecorder[9] ={0};

///to restart the game
void ReMatch(QPushButton* Grid[9],int HistoryRecorder[9],int clicked[9],int *x);
//QPushButton *ReMatchButton;

///to handle the mainmenu UI
void normalPvP();
void infinitePvP();
void SetMode2AI();
void Setdiff2easy();
void Setdiff2Hard();
void Setdiff2Normal();
int mode = 0;

unsigned short int DiffModeForAI=0;
Difficulty levelMode;
short int REG_Mode=0;

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow window;

    window.initializeButtons();

    int clicked[9] = {0};

    int x=1;  // who can start the game (X -> 1  O -> 2)
    //
    sqlite3 *db;
    sqlite3_open("game_data.db", &db);
    createTables(db);
    //
    ShowHistory->hide();
    ReMatchButton->hide();
    for (int i = 0; i < 9; ++i)
    {
        Grid[i]->hide();
        Grid[i]->setText("");
    }
    NormalPvPButton->hide();
    InfinitePvPButton->hide();
    AiEasyMode->hide();
    AiNormalMode->hide();
    AiHardMode->hide();
    WrongLogin->hide();
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

    QObject::connect(NormalPvPButton, &QPushButton::clicked,[&]() {normalPvP(); });
    QObject::connect(AIbottom, &QPushButton::clicked,[&]() {SetMode2AI(); });
    QObject::connect(AiEasyMode, &QPushButton::clicked,[&]() {Setdiff2easy(); });
    QObject::connect(AiNormalMode, &QPushButton::clicked,[&]() {Setdiff2Normal(); });
    QObject::connect(AiHardMode, &QPushButton::clicked,[&]() {Setdiff2Hard(); });
    QObject::connect(InfinitePvPButton, &QPushButton::clicked,[&]() {infinitePvP(); });
    QObject::connect(LoginCheck, &QPushButton::clicked,[&]() {Check_data_forLogin(db); });


    window.setLayout(layout);
    window.resize(1000, 500);
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
            if (mode == 3) {
                // Create a 2D grid from clicked[]
                int grid[3][3];
                for (int i = 0; i < 9; ++i) {
                    if (clicked[i] == 1) grid[i / 3][i % 3] = 1;
                    else if (clicked[i] == 2) grid[i / 3][i % 3] = 2;
                    else grid[i / 3][i % 3] = 0;
                }

                // Call AI
                pair<int, int> aiMove = findBestMove(grid, levelMode);
                int aiIndex = aiMove.first * 3 + aiMove.second;

                // Update UI
                if (clicked[aiIndex] == 0) {
                    clicked[aiIndex] = 2;
                    Grid[aiIndex]->setText("O");
                    Grid[aiIndex]->setEnabled(false);  // Optional
                    (*MoveNum)++;

                    if (mode != 2) {
                        HistoryRecorder[*MoveNum] = (10 * 2) + aiIndex;
                    }
                }
            *x=1;
                CheckWin(clicked);
            }
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

        Button[i]->setText("");
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




void normalPvP(){
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
void grid_INIT(){
    for (int i = 0; i < 9; ++i)
    {
        Grid[i]->show();
    }
}

void SetMode2AI(){
    mode=3;
}

void Setdiff2easy(){
    levelMode=static_cast<Difficulty>(1);
    grid_INIT();
}
void Setdiff2Hard(){
    levelMode=static_cast<Difficulty>(3);
    grid_INIT();
}
void Setdiff2Normal(){
    levelMode=static_cast<Difficulty>(2);
    grid_INIT();
}

void Check_data_forLogin(sqlite3 *db){
    bool loginFound=false;
    short int ret=0;
    if(REG_Mode==SIGNUP){
        SIGN_UP(db, passcode , username);
        loginFound=true;
    }
    else if(REG_Mode==LOGIN){
        while(!loginFound && ret++<3){
            loginFound=LOG_IN(db , passcode , username);
            if(!loginFound)
                WrongLogin->show();
        }
    }
    if(!loginFound){
        exit(1);
    }
    else
        pagemover->setCurrentIndex(2);
}
