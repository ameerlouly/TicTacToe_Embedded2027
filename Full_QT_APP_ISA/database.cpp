#include <iostream>
#include <string>
#include "AItest.h"
#include <sqlite3.h>
#include <QString>
#include <QTableWidget>
#include <QTableWidgetItem>
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
        // cout << "Error creating users table: " << errMsg << endl;
        sqlite3_free(errMsg);
    }

    rc = sqlite3_exec(db, gameHistoryTableSQL, 0, 0, &errMsg);
    if (rc != SQLITE_OK) {
        // cout << "Error creating game history table: " << errMsg << endl;
        sqlite3_free(errMsg);
    }
}

void SIGN_UP(sqlite3 *db ,string password ,string username ) {
    // string username, password;
    // // cout << "Enter new username: ";
    // // cin >> username;
    // cin.ignore();
    // getline(cin, username);
    // cout << "Enter new password: ";
    // cin >> password;
    string hashedPassword = sha256(password);
    G_UserName=username;
    string sql = "INSERT INTO users (username, password) VALUES ('" + username + "', '" + hashedPassword + "');";
        char *errMsg = 0;
        int rc = sqlite3_exec(db, sql.c_str(), 0, 0, &errMsg);
        
        if (rc != SQLITE_OK) {
            // std::cout << "Error: " << errMsg << std::endl;
            sqlite3_free(errMsg);
        } else {
            // std::cout << "Signup successful!\n";
        }
}

bool LOG_IN(sqlite3 *db ,string password ,string username ) {
    // string username, password;
    // cout << "Enter username: ";
    // cin.ignore();
    // // cin >> username;
    // getline(cin, username);
    // cout << "Enter password: ";
    // cin >> password;
    string hashedPassword = sha256(password);
    G_UserName=username;
    string sql = "SELECT * FROM users WHERE username='" + username + "' AND password='" + hashedPassword + "';";
        sqlite3_stmt *stmt;
        bool success = false;

        if (sqlite3_prepare_v2(db, sql.c_str(), -1, &stmt, 0) == SQLITE_OK) {
            if (sqlite3_step(stmt) == SQLITE_ROW) {
                // cout << "Login successful!\n";
                success = true;
            } else {
                // cout << "Login failed. Wrong username or password.\n";
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


void viewGameHistory(sqlite3* db, QTableWidget* table) {
    QString username = QString::fromStdString(G_UserName);  // assuming G_UserName is std::string
    std::string sql = "SELECT result, timestamp FROM game_history WHERE username='" + G_UserName + "' ORDER BY timestamp DESC LIMIT 5;";
    sqlite3_stmt* stmt;

    int rc = sqlite3_prepare_v2(db, sql.c_str(), -1, &stmt, 0);
    if (rc != SQLITE_OK) {
        qDebug() << "Failed to fetch game history:" << sqlite3_errmsg(db);
        return;
    }

    table->clear();  // clear previous content
    table->setRowCount(0);
    table->setColumnCount(3);
    table->setHorizontalHeaderLabels({"Game", "Time", "Result"});

    int gameNumber = 1;
    int winCount = 0, lossCount = 0, drawCount = 0;

    while (sqlite3_step(stmt) == SQLITE_ROW) {
        std::string result = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 0));
        std::string timestamp = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 1));

        int row = table->rowCount();
        table->insertRow(row);

        table->setItem(row, 0, new QTableWidgetItem(QString("Game %1").arg(gameNumber)));
        table->setItem(row, 1, new QTableWidgetItem(QString::fromStdString(timestamp)));
        table->setItem(row, 2, new QTableWidgetItem(QString::fromStdString(result)));

        if (result == "WIN") winCount++;
        else if (result == "LOSS") lossCount++;
        else if (result == "DRAW") drawCount++;

        gameNumber++;
    }

    sqlite3_finalize(stmt);
}

// void viewGameHistory(sqlite3* db) {
//     string sql = "SELECT result, timestamp FROM game_history WHERE username='" + G_UserName + "' ORDER BY timestamp DESC LIMIT 5;";
//     sqlite3_stmt* stmt;

//     int rc = sqlite3_prepare_v2(db, sql.c_str(), -1, &stmt, 0);
//     if (rc != SQLITE_OK) {
//         cout << "Failed to fetch game history: " << sqlite3_errmsg(db) << endl;
//         return;
//     }

//     int gameNumber = 1;
//     int winCount = 0;
//     int lossCount = 0;
//     int drawCount = 0;

//     cout << "\n--- Last 5 Games for " << G_UserName << " ---\n";

//     while (sqlite3_step(stmt) == SQLITE_ROW) {
//         string result = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 0));
//         string timestamp = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 1));

//         cout << "Game " << gameNumber << ":\n";
//         cout << "   Time: " << timestamp << "\n";
//         cout << "   Result: " << result << "\n";

//         // Count wins, losses, draws
//         if (result == "WIN") {
//             winCount++;
//         } else if (result == "LOSS") {
//             lossCount++;
//         } else if (result == "DRAW") {
//             drawCount++;
//         }

//         gameNumber++;
//     }

//     sqlite3_finalize(stmt);

//     // Print summary
//     cout << "\n--- Summary for " << G_UserName << " (Last 5 games) ---\n";
//     cout << "Wins: " << winCount << "\n";
//     cout << "Losses: " << lossCount << "\n";
//     cout << "Draws: " << drawCount << "\n";
// }



