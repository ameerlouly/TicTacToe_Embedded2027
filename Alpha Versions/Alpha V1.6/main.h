#ifndef MAIN_H
#define MAIN_H

#include"mainwindow.h"
#include"mainwindow1.h"
#include"secdialog.h"

#include <QApplication>
#include <QFile>
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>
#include <QWidget>
#include <QMessageBox>
#include <QTimer>
#include "queue.h"
#include "AItest.h"
#include "sqlite3.h"



extern sqlite3* db;

///functions and variables for gameplay
extern int NextPlayer;  // who can start the game (X -> 1  O -> 2)
void onButtonClicked(int* NextPlayer, QPushButton* button ,int num ,int* MoveNum, sqlite3* db, QPushButton* Grid[9], QPushButton* Rematch ,QPushButton* ReView ,QLabel* GameResultLabel);
void AIPlay(int *MoveNum ,int*x,QPushButton * Grid[9],QPushButton* Rematch,QPushButton* ReView,QLabel* GameResultLabel);

extern int clicked[9];

void CheckWin(int clicked[9] ,sqlite3 *db,QPushButton* Rematch,QPushButton* ReView,QLabel* GameResultLabel);

int GridToNum(QPushButton *Button);

//QPushButton *Grid[9];
extern queue<QPushButton* ,3> PlayerXQ;
extern queue<QPushButton* ,3> PlayerOQ;

///functions and variables for detailed history
void nextHistorymove(int x,QPushButton *Button[9]);
void showhistory(QPushButton *Button[9] , QWidget *window);

extern int MoveNum ;
extern int HistoryRecorder[9];

///to restart the game
void ReMatch();



void GuestMode(MainWindow *window);
extern int mode;

extern unsigned short int DiffModeForAI;
extern Difficulty levelMode;
extern short int REG_Mode;

using namespace std;

extern MainWindow* GameWindow;
extern MainWindow1* LoginWindow;

extern bool AccountNotFound;


#endif // MAIN_H
