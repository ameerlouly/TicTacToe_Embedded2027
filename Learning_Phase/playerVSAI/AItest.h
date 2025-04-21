#ifndef C2690D40_52F0_4909_82F9_C64668A5665E
#define C2690D40_52F0_4909_82F9_C64668A5665E
#include <iostream>   // For input/output
#include <limits>     // For INT_MAX, INT_MIN


#define AI_MODE 1
#define PVP_MODE 2


int minimax(int board[3][3], int depth, bool isMax);
int evaluate(int board[3][3]);
bool isMovesLeft(int board[3][3]);
std::pair<int, int> findBestMove(int board[3][3]);


#endif /* C2690D40_52F0_4909_82F9_C64668A5665E */
