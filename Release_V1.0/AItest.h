#ifndef C2690D40_52F0_4909_82F9_C64668A5665E
#define C2690D40_52F0_4909_82F9_C64668A5665E
#include    <iostream>   // For input/output
#include    <limits>     // For INT_MAX, INT_MIN
#include    "sqlite3.h"
#include    <string>
#include    <QString>
#include    <QStackedWidget>
#include    <QTableWidget>
#include    <QTableWidgetItem>
#include    "mainwindow1.h"
#include    "secdialog.h"


#define AuthPath  "session.ac"

using namespace std;

#define AI_MODE      1
#define PVP_MODE     2
#define IPVP_MODE    3
#define LOGOUT       9

#define SIGNUP       1
#define LOGIN        2
#define GUEST        3


// Difficulty levels
enum Difficulty
{
    EASY = 1,
    MEDIUM,
    HARD
};

extern  string username;
extern  string passcode;
extern  string passcodeConf;
extern  string PhoneNumber;
extern  string G_UserName;

void Check_data_forLogin(sqlite3 *db,SecDialog *window,MainWindow1 *window1);

bool setCurrentUser(sqlite3* db, const string& username);

bool getCurrentUser(sqlite3* db, string& usernameOut);

void logout(sqlite3* db);

bool SIGN_UP(sqlite3 *db, const string& password, const string& username, const string& phone);

bool LOG_IN(sqlite3 *db ,string password ,string username );

bool resetPassword(sqlite3* db, const string& username, const string& phone, const string& newPassword);

void createTables(sqlite3 *db);

void saveGameHistory(sqlite3* db, string result, int HistoryMoves[9]);

std::pair<int, int> findBestMove(int board[3][3], Difficulty level);

void viewGameHistory(sqlite3* db , QTableWidget* table );

extern const int PLAYER;
extern const int AI;

// Forward declaration
struct Node;

// Function declarations
bool isMovesLeft(int board[3][3]);
int evaluate(int board[3][3]);
int minimax(std::shared_ptr<Node> node, int depth);
void printBoard(int board[3][3]);

// Password Hashing Functions
string sha256(const string& str);
string sha512(const string& str);
string sha224(const string& str);
string sha384(const string& str);
string sha3_256(const string& str);
string sha3_512(const string& str);
string RealSha3_512(const string& str);


#endif /* C2690D40_52F0_4909_82F9_C64668A5665E */
