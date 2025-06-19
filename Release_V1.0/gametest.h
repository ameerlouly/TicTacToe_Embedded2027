#ifndef GAMETEST_H
#define GAMETEST_H


#include "mainwindow1.h"
#include "secdialog.h"

#include "AItest.h"
#include <QtTest>
#include <QtTest/QtTest>

class gametest: public QObject{

    Q_OBJECT

public:
    gametest();
    sqlite3* Testdb;

private slots:
    //void runAllTestsInOrder();

    void TestSignUp ();

    void TestLogout();

    void TestSignIn();

    void TestBlankBoardCase1();

    void TestGamePlay();

    void TestBoardLocking();

    void TestReMatch();

    void TestCheckWin();

    void TestHistorySave();
};

#endif // GAMETEST_H
