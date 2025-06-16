#ifndef GAMEAUTOTEST_H
#define GAMEAUTOTEST_H


#include "mainwindow1.h"
#include "secdialog.h"
#include "AItest.h"


#include <QtTest>
#include <QtTest/QtTest>


class GameTest : public QObject{
    Q_OBJECT

public:
    GameTest();

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


private:

};


#endif // GAMEAUTOTEST_H
