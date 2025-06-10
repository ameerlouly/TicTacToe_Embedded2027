#ifndef GG_H
#define GG_H

#include <QPushButton>
#include <QLabel>
#include <QStackedWidget>
#include <QTableWidget>
extern QPushButton *Grid[9];

extern QPushButton *ShowHistory;
extern QPushButton *ReMatchButton;

extern QPushButton *NormalPvPButton;
extern QPushButton *InfinitePvPButton;
extern QPushButton *AIbottom;

extern QPushButton *AiEasyMode;
extern QPushButton *AiNormalMode;
extern QPushButton *AiHardMode;

extern QPushButton *GuestButton;
extern QPushButton *LoginCheck;
extern QPushButton *SignUpCheck;
extern QPushButton *viewresults;

extern QStackedWidget *pagemover;
extern QTableWidget *restable;


extern QLabel *WrongLogin;
extern QLabel *GameResultLabel;

extern short int REG_Mode;
#endif // GG_H

