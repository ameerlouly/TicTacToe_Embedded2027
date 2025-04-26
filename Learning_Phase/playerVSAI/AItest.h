#ifndef C2690D40_52F0_4909_82F9_C64668A5665E
#define C2690D40_52F0_4909_82F9_C64668A5665E
#include <iostream>   // For input/output
#include <limits>     // For INT_MAX, INT_MIN
#include <sqlite3.h>
#include <string>
using namespace std;

#define AI_MODE 1
#define PVP_MODE 2
#define IPVP_MODE 3

#define SIGNUP 1
#define LOGIN 2
// Difficulty levels
enum Difficulty {
    EASY=1,
    MEDIUM,
    HARD
};



void SIGN_UP(sqlite3 *db);
bool LOG_IN(sqlite3 *db);
void createTables(sqlite3 *db);
void SaveGameHistory(sqlite3 *db);
void saveGameHistory(sqlite3* db, string result);
std::pair<int, int> findBestMove(int board[3][3], Difficulty level);

#endif /* C2690D40_52F0_4909_82F9_C64668A5665E */
