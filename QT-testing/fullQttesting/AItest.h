#ifndef C2690D40_52F0_4909_82F9_C64668A5665E
#define C2690D40_52F0_4909_82F9_C64668A5665E
#include <iostream>   // For input/output
#include <limits>     // For INT_MAX, INT_MIN
#include "sqlite3.h"
#include <string>
#include <QString>
using namespace std;

#define AI_MODE 1
#define PVP_MODE 2
#define IPVP_MODE 3
#define LOGOUT 9

#define SIGNUP 1
#define LOGIN 2
#define GUSET 3
// Difficulty levels
enum Difficulty {
    EASY=1,
    MEDIUM,
    HARD
};

extern string username;
extern string passcode;

void Check_data_forLogin(sqlite3 *db);
void SIGN_UP(sqlite3 *db ,string password ,string username );
bool LOG_IN(sqlite3 *db ,string password ,string username );
void createTables(sqlite3 *db);
void saveGameHistory(sqlite3* db, string result);
std::pair<int, int> findBestMove(int board[3][3], Difficulty level);
void viewGameHistory(sqlite3* db);

string sha256(const string& str);


#endif /* C2690D40_52F0_4909_82F9_C64668A5665E */
