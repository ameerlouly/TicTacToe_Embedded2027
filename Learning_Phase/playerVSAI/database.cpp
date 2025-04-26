#include <iostream>
#include <string>
#include "AItest.h"
#include <sqlite3.h>
using namespace std;


string G_UserName;
void createTables(sqlite3 *db) {
    const char* userTableSQL = "CREATE TABLE IF NOT EXISTS users ("
                                "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                                "username TEXT UNIQUE,"
                                "password TEXT);";

    const char* gameHistoryTableSQL = "CREATE TABLE IF NOT EXISTS game_history ("
                                      "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                                      "username TEXT,"
                                      "result TEXT,"
                                      "timestamp DATETIME DEFAULT CURRENT_TIMESTAMP);";

    char* errMsg = 0;

    int rc = sqlite3_exec(db, userTableSQL, 0, 0, &errMsg);
    if (rc != SQLITE_OK) {
        cout << "Error creating users table: " << errMsg << endl;
        sqlite3_free(errMsg);
    }

    rc = sqlite3_exec(db, gameHistoryTableSQL, 0, 0, &errMsg);
    if (rc != SQLITE_OK) {
        cout << "Error creating game history table: " << errMsg << endl;
        sqlite3_free(errMsg);
    }
}



void SIGN_UP(sqlite3 *db) {
    string username, password;
    cout << "Enter new username: ";
    cin >> username;
    cout << "Enter new password: ";
    cin >> password;
    G_UserName=username;
    string sql = "INSERT INTO users (username, password) VALUES ('" + username + "', '" + password + "');";
        char *errMsg = 0;
        int rc = sqlite3_exec(db, sql.c_str(), 0, 0, &errMsg);
        
        if (rc != SQLITE_OK) {
            std::cout << "Error: " << errMsg << std::endl;
            sqlite3_free(errMsg);
        } else {
            std::cout << "Signup successful!\n";
        }
}

bool LOG_IN(sqlite3 *db) {
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;
    G_UserName=username;
    string sql = "SELECT * FROM users WHERE username='" + username + "' AND password='" + password + "';";
        sqlite3_stmt *stmt;
        bool success = false;

        if (sqlite3_prepare_v2(db, sql.c_str(), -1, &stmt, 0) == SQLITE_OK) {
            if (sqlite3_step(stmt) == SQLITE_ROW) {
                cout << "Login successful!\n";
                success = true;
            } else {
                cout << "Login failed. Wrong username or password.\n";
            }
        }
        sqlite3_finalize(stmt);
        return success;
}

void saveGameHistory(sqlite3* db, string result) {
    string sql = "INSERT INTO game_history (username, result) VALUES ('" + G_UserName + "', '" + result + "');";
    char* errMsg = 0;
    int rc = sqlite3_exec(db, sql.c_str(), 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        cout << "Error saving game history: " << errMsg << endl;
        sqlite3_free(errMsg);
    } else {
        cout << "Game history saved successfully.\n";
    }
}
