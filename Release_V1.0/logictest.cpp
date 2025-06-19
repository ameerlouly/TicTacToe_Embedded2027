#include "logictest.h"

LogicTest::LogicTest()
{


}

bool LogicTest::isWinningMove(int board[3][3], std::pair<int, int> move, int player)
{
    int tempBoard[3][3];

    // Copy original board
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            tempBoard[i][j] = board[i][j];

    // Apply move for the player (AI or PLAYER)
    tempBoard[move.first][move.second] = player;

    int score = evaluate(tempBoard);
    return (player == 2 && score == 10) || (player == 1 && score == -10);
}

void LogicTest::testAIMove(int board[3][3], const QString& testName)
{
    auto move = findBestMove(board, HARD);

    // Winning move
    if (isWinningMove(board, move, 2))
    {
        qDebug() << "✓" << testName << "PASSED: AI picked winning move at" << move;
        QVERIFY(true);
        return;
    }

    // Block player
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] == 0 && isWinningMove(board, {i, j}, 1))
            {
                if (move.first == i && move.second == j)
                {
                    qDebug() << "✓" << testName << "PASSED: AI blocked player's win at" << move;
                    QVERIFY(true);
                    return;
                }
                else
                {
                    qDebug() << "✗" << testName << "FAILED: AI did not block at" << move;
                    QVERIFY(false);
                    return;
                }
            }
        }
    }

    // Fallback: only one move available
    int emptyCount = 0;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] == 0)
                emptyCount++;

    if (emptyCount == 1)
    {
        qDebug() << "✓" << testName << "PASSED: AI played the only available move" << move;
        return;
    }

    qDebug() << "✗" << testName << "FAILED: AI move was not optimal. Chose" << move;
    QVERIFY(false);
}

void LogicTest::runQuickTests()
{
    qDebug() << "Running generalized AI minimax tests";

    int board1[3][3] = {
        {2, 2, 0},
        {1, 1, 2},
        {0, 0, 1}
    };
    testAIMove(board1, "Test 1 - AI should win");

    int board2[3][3] = {
        {1, 1, 0},
        {2, 2, 0},
        {0, 0, 0}
    };
    testAIMove(board2, "Test 2 - AI should win or block");

    int board3[3][3] = {
        {1, 0, 0},
        {2, 1, 0},
        {2, 0, 0}
    };
    testAIMove(board3, "Test 3 - AI should block player");

    int board4[3][3] = {
        {2, 1, 2},
        {2, 1, 1},
        {1, 2, 0}
    };
    testAIMove(board4, "Test 4 - AI should play last move");

    qDebug() << "General tests completed.";
    QVERIFY(true);
}

