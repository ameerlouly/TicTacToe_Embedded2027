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
SecDialog* win=nullptr;

QString readValueFromFile(const QString& filePath) {
    QFile file(filePath);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        QString value = in.readAll();
        file.close();
        return QString::fromStdString(sha256(value.toStdString()));
    } else {
        qDebug() << "Cannot open file for reading!";
        return "";
    }
}

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    GameWindow = new MainWindow();
    LoginWindow= new MainWindow1();
    win = new SecDialog();

    GameWindow->initializeButtons();
    LoginWindow->initializeButtons();

    // Read it back
    QString value = readValueFromFile(savepath);
    qDebug() << "Read value:" << value;


    if(value==""){
        LoginWindow->show();
    }
    else{
        username=value.toStdString();
        G_UserName=value.toStdString();
        GameWindow->show();
    }

    //win->show();

    sqlite3_open("game_data.db", &db);
    createTables(db);

    QVBoxLayout *layout = new QVBoxLayout();

    GameWindow->setLayout(layout);
    LoginWindow->setLayout(layout);
    GameWindow->resize(1000, 500);

    return app.exec();
}

int GridToNum(QPushButton *Button,QPushButton * Grid[9]){

    for(int i=0; i<9; i++){
        if(Button == Grid[i]){
            return i;
        }
    }
    return 404;
}


void onButtonClicked(int *x , QPushButton *button , int num, int *MoveNum, sqlite3 *db ,QPushButton * Grid[9],QPushButton* Rematch,QPushButton* ReView,QLabel* GameResultLabel) {

    if(clicked[num]<1){
        if(*x == 1) {  // Human (X)
            button->setText("X");
            clicked[num] = 1;

            if (mode != 2) {
                HistoryRecorder[*MoveNum] = (10 * (*x)) + num;
            }

            if (mode == 2) {
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

            if (mode == 3) {
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
                    Grid[aiIndex]->setEnabled(false);
                    (*MoveNum)++;

                    if (mode != 2) {
                        HistoryRecorder[*MoveNum] = (10 * 2) + aiIndex;
                    }
                }

                *x = 1;

                // Only check after AI moves
                CheckWin(clicked, db,Rematch,ReView,GameResultLabel);
            } else {
                // In other modes, check after player's move
                CheckWin(clicked, db,Rematch,ReView,GameResultLabel);
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


void CheckWin(int clicked[9] ,sqlite3 *db ,QPushButton* Rematch,QPushButton* ReView,QLabel* GameResultLabel){
    int WhoWon = 0;  // 0 -> game ongoing, 1 -> X wins, 2 -> O wins, 3 -> draw

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
            resultText = "You Win!";
        }
        else if (WhoWon == 2) {
            result = "LOSS";
            resultText = "You Lost!";
        }
        else {
            result = "Draw";
            resultText = "Draw!";
        }

        if(REG_Mode!=GUSET)
            saveGameHistory(db, result);

        GameResultLabel->setText(resultText);
        GameResultLabel->show();
        QTimer::singleShot(2000, GameResultLabel, SLOT(hide()));
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

    PlayerXQ.clean();
    PlayerOQ.clean();
    NextPlayer=1;  // to restart with player x playing the first move
}


#define MAX_LOGIN_ATTEMPTS 3

void Check_data_forLogin(sqlite3 *db,MainWindow *window,MainWindow1 *window1) {
    bool loginFound = false;
    short int attempts = 0;

    if (REG_Mode == SIGNUP) {   
        SIGN_UP(db, passcode, username);
        loginFound = true;  // Assuming SIGN_UP handles errors internally
    }
    else if (REG_Mode == LOGIN) {
        while (!loginFound && attempts++ < MAX_LOGIN_ATTEMPTS) {
            loginFound = LOG_IN(db, passcode, username);
            if (!loginFound)
                AccountNotFound = true;
        }

        if (!loginFound) {
            return;  // Login failed after 3 tries — don't continue
        }
    }

    // Only navigate if login/signup succeeded
    window->show();
    window1->close();
}

