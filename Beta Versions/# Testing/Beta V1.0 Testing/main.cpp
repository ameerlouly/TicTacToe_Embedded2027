/*
 * ----------------------------------------------------
 *
 *  this script holds the game logic
 *
 *  contains:
 *  Grid Buttons actions
 *  game history viewer
 *  game reset (to restart the game after it finishes)
 *  check winning patterns
 *
 * ----------------------------------------------------
 */

#include"main.h"
#include <QStackedWidget>
#include <QDir>
#include <QCoreApplication>
#include <QDebug>
#include <QFileInfo>
#include <QStandardPaths>
#include <sqlite3.h>

#include "secdialog.h"

#include "gametest.h"

QStackedWidget* reset_pointer=nullptr;
int NextPlayer=1;  // who can start the game (X -> 1  O -> 2)
int MoveNum =0;
int HistoryRecorder[9] ={0};
int clicked[9] = {0};
int mode = 0;

unsigned short int DiffModeForAI=0;
short int REG_Mode=0;

sqlite3 *db;

queue<QPushButton* ,3> PlayerXQ;
queue<QPushButton* ,3> PlayerOQ;

Difficulty levelMode;
bool AccountNotFound = false;


MainWindow* GameWindow =nullptr;
MainWindow1* LoginWindow=nullptr;
SecDialog* Gamewindow2= nullptr;

SecDialog* win=nullptr;


int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    GameWindow = new MainWindow();
    LoginWindow = new MainWindow1();
    Gamewindow2 = new SecDialog();

    QString dbDir = QCoreApplication::applicationDirPath() + "/db";
        QDir().mkpath(dbDir);

        QString dbPath = dbDir + "/DATA.db";
        int rc = sqlite3_open(dbPath.toStdString().c_str(), &db);

        if (rc != SQLITE_OK) {
            qDebug() << "Failed to open database:" << sqlite3_errmsg(db);
            return -1;
        }

        createTables(db);

    GameTest test;
    test.Testdb =db;

    return QTest::qExec(&test, argc, argv);
}


// int main(int argc, char *argv[])
// {
//     QApplication app(argc, argv);
//     GameWindow = new MainWindow();
//     LoginWindow= new MainWindow1();
//     Gamewindow2 = new SecDialog();

//     // SecDialog* test= new SecDialog();
//     Gamewindow2->show();

//     QString dbDir = QCoreApplication::applicationDirPath() + "/db";
//     QDir().mkpath(dbDir);

//     QString dbPath = dbDir + "/DATA.db";
//     int rc = sqlite3_open(dbPath.toStdString().c_str(), &db);

//     if (rc != SQLITE_OK) {
//         qDebug() << "Failed to open database:" << sqlite3_errmsg(db);
//         return -1;
//     }

//     createTables(db);

//     if(getCurrentUser(db,username)){
//         G_UserName = username;
//         if(G_UserName == "Guest"){
//             REG_Mode=GUSET;
//         }
//         GameWindow->isGuest();
//         Gamewindow2->isGuest();
//         GameWindow->show();
//     }else{
//         LoginWindow->show();
//     }

//     GameWindow->isGuest();
//     GameWindow->initializeButtons();
//     LoginWindow->initializeButtons();

//     QVBoxLayout *layout = new QVBoxLayout();

//     GameWindow->setLayout(layout);
//     LoginWindow->setLayout(layout);
//     GameWindow->resize(1000, 500);

//     return app.exec();
// }

int GridToNum(QPushButton *Button,QPushButton * Grid[9]){

    for(int i=0; i<9; i++){
        if(Button == Grid[i]){
            return i;
        }
    }
    return 404;
}

bool waitAI =false;
int WhoWon = 0;  // 0 -> game ongoing, 1 -> X wins, 2 -> O wins, 3 -> draw

void onButtonClicked(int *x , QPushButton *button , int num, int *MoveNum, sqlite3 *db ,QPushButton * Grid[9],QPushButton* Rematch,QPushButton* ReView,QLabel* GameResultLabel) {

    if(clicked[num]<1 && !waitAI){
        if(*x == 1) {  // Human (X)
            button->setText("X");
            clicked[num] = 1;

            if (mode != 2) {
                HistoryRecorder[*MoveNum] = (10 * (*x)) + num;
            }

            if (mode == 2){
                if (PlayerOQ.isfull()) {
                    QPushButton *dash = PlayerOQ.peak();
                    dash->setEnabled(false);
                }

                QPushButton *remove = PlayerXQ.push(Grid[num]);
                if (remove != nullptr) {
                    remove->setEnabled(true);
                    remove->setText("");
                    clicked[GridToNum(remove,Grid)] = 0;
                }
            }

            (*MoveNum)++;
            *x = 2;

            CheckWin(clicked, db,Rematch,ReView,GameResultLabel);

            if (mode == 3 && WhoWon ==0) {
                waitAI=true;
                QTimer::singleShot(200, Gamewindow2, [=]() {AIPlay(MoveNum ,x,Grid,Rematch,ReView,GameResultLabel);});
            }

        } else if (*x == 2) {  // O turn (e.g., in 2-player mode)
            button->setText("O");
            clicked[num] = 2;

            if (mode != 2) {
                HistoryRecorder[*MoveNum] = (10 * (*x)) + num;
            }

            if (mode == 2) {
                if (PlayerXQ.isfull()) {
                    QPushButton *dash = PlayerXQ.peak();
                    dash->setEnabled(false);
                }

                QPushButton *remove = PlayerOQ.push(Grid[num]);
                if (remove != nullptr) {
                    remove->setEnabled(true);
                    remove->setText("");
                    clicked[GridToNum(remove,Grid)] = 0;
                }
            }

            (*MoveNum)++;
            *x = 1;

            // Check after O moves in 2-player mode
            CheckWin(clicked, db,Rematch,ReView,GameResultLabel);
        }
    }
}

void AIPlay(int *MoveNum ,int*x,QPushButton * Grid[9],QPushButton* Rematch,QPushButton* ReView,QLabel* GameResultLabel){
    // AI plays immediately
    int grid[3][3];
    for (int i = 0; i < 9; ++i) {
        if (clicked[i] == 1) grid[i / 3][i % 3] = 1;
        else if (clicked[i] == 2) grid[i / 3][i % 3] = 2;
        else grid[i / 3][i % 3] = 0;
    }

    pair<int, int> aiMove = findBestMove(grid, levelMode);
    int aiIndex = aiMove.first * 3 + aiMove.second;

    if (clicked[aiIndex] == 0) {
        clicked[aiIndex] = 2;
        Grid[aiIndex]->setText("O");
        // Grid[aiIndex]->setEnabled(false);

        if (mode != 2) {
            HistoryRecorder[*MoveNum] = (10 * 2) + aiIndex;
        }

        (*MoveNum)++;
    }

    *x = 1;

    // Only check after AI moves
    CheckWin(clicked, db,Rematch,ReView,GameResultLabel);

    waitAI=false;
}


void CheckWin(int clicked[9] ,sqlite3 *db ,QPushButton* Rematch,QPushButton* ReView,QLabel* GameResultLabel){

    // Check winning combinations
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
    else {
        bool draw = (clicked[0] != 0);
        for (int i = 1; i < 9; i++) {
            draw &= (clicked[i] != 0);
        }
        if (draw) {
            WhoWon = 3;
        }
    }

    if (WhoWon != 0) {
        // Lock the board
        for (int i = 0; i < 9; i++) clicked[i] = 3;

        // Save result
        string result;
        QString resultText;

        if (WhoWon == 1) {
            result = "WIN";
            if(mode==3){
                resultText = "You Win!";
            }
            else{
                resultText = "Player X Win!";
            }
        }
        else if (WhoWon == 2) {
            result = "LOSS";
            if(mode==3){
                resultText = "You Lost!";
            }
            else{
                resultText = "Player O Win!";
            }
        }
        else {
            result = "Draw";
            resultText = "Draw!";
        }

        if(REG_Mode!=GUSET && mode!=2)
            saveGameHistory(db, result,HistoryRecorder);

        GameResultLabel->setText(resultText);
        GameResultLabel->show();
        if (mode != 2) {
            ReView->show();
        }

        Rematch->show();
    }
}



void nextHistorymove(int x,QPushButton* Button[9]){
        if(x>=20)
            Button[x-20]->setText("O");
        else if(x<20 && 9<x)
            Button[x-10]->setText("X");
        return;
}



void ReMatch(){

    for(int i = 0; i<9; i++){
        HistoryRecorder[i]= 0;  // to reset the history
        clicked[i]=0;  // to enable the grid again
        MoveNum=0;  // to reset the number of moves
    }
     waitAI =false;
     WhoWon = 0;

    PlayerXQ.clean();
    PlayerOQ.clean();
    NextPlayer=1;  // to restart with player x playing the first move
}


#define MAX_LOGIN_ATTEMPTS 3

void Check_data_forLogin(sqlite3 *db, SecDialog *window, MainWindow1 *window1) {
    bool loginFound = false;
    static short int attempts = 0;

    if (REG_Mode == SIGNUP) {
        // Try to sign up and check if successful
        bool success = SIGN_UP(db, passcode, username, PhoneNumber);
        if (!success) {
            QMessageBox::warning(window1, "Signup Failed", "Username or phone number already exists!");
            return;  // Don't continue if signup failed
        }
        loginFound = true;
    }
    else if (REG_Mode == LOGIN) {
        if (!loginFound && attempts++ < MAX_LOGIN_ATTEMPTS) {
            loginFound = LOG_IN(db, passcode, username);
            if (!loginFound){
                AccountNotFound = true;
                QMessageBox::critical(window1, "Login Failed", "incorrect username or password");
            }
        }
    }
    else if(REG_Mode == GUSET){
        loginFound = LOG_IN(db, "", "Guest");
        if(loginFound){
            setCurrentUser(db,"Guest");
            window->returnBacktoPage0InGame();
            window->show();
            window1->close();
            return;
        }
        else{
            SIGN_UP(db, "", "Guest", "");
            setCurrentUser(db,"Guest");
            window->returnBacktoPage0InGame();
            window->show();
            window1->close();
            return;
        }
    }
    if (!loginFound && attempts>=MAX_LOGIN_ATTEMPTS) {
        // You can trigger a reset password UI here or call resetPassword directly if needed
        QMessageBox::critical(window1, "Login Failed", "pls try again or press forget password");
        reset_pointer->setCurrentIndex(0);
        return;
    }
    // Only navigate if login/signup succeeded
    if(loginFound){
        setCurrentUser(db,username);
        window->returnBacktoPage0InGame();
        window->show();
        window1->close();
    }
}
