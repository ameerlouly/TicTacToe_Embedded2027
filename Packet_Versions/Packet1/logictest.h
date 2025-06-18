#ifndef LOGICTEST_H
#define LOGICTEST_H

#include "AItest.h"
#include "qapplication.h"
#include <QDebug>
#include <QtTest>
#include <QtTest/QtTest>


class LogicTest: public QObject{

    Q_OBJECT

public:
    LogicTest();
    void testAIMove(int board[3][3], const QString& testName);
    bool isWinningMove(int board[3][3], std::pair<int, int> move, int player);

private slots:

    void runQuickTests();

};

#endif // LOGICTEST_H
