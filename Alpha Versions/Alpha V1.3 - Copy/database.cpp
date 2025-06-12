#include <iostream>
#include <string>
#include "AItest.h"
#include <sqlite3.h>
#include <QString>
#include <QTableWidget>
#include <QTableWidgetItem>

#include <QFile>
#include <QTextStream>
using namespace std;


string G_UserName;

void createTables(sqlite3 *db) {
    const char* userTableSQL =
                                    "CREATE TABLE IF NOT EXISTS users ("
                                    "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                                    "username TEXT UNIQUE,"
                                    "password TEXT,"
                                    "phone TEXT UNIQUE);";

    const char* gameHistoryTableSQL = "CREATE TABLE IF NOT EXISTS game_history ("
                                      "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                                      "username TEXT,"
                                      "result TEXT,"
                                      "timestamp DATETIME DEFAULT CURRENT_TIMESTAMP);";
    const char* sessionTableSQL =    "CREATE TABLE IF NOT EXISTS session ("
                                    "id INTEGER PRIMARY KEY CHECK (id = 1),"
                                    "username TEXT);";



    char* errMsg = 0;

    int rc = sqlite3_exec(db, userTableSQL, 0, 0, &errMsg);
    if (rc != SQLITE_OK) {
        sqlite3_free(errMsg);
    }
    rc = sqlite3_exec(db, sessionTableSQL, 0, 0, &errMsg);
    if (rc != SQLITE_OK) {
        sqlite3_free(errMsg);
    }
    rc = sqlite3_exec(db, gameHistoryTableSQL, 0, 0, &errMsg);
    if (rc != SQLITE_OK) {
        sqlite3_free(errMsg);
    }
}


bool setCurrentUser(sqlite3* db, const string& username) {
    string clearSQL = "DELETE FROM session;";
    sqlite3_exec(db, clearSQL.c_str(), 0, 0, nullptr);

    string insertSQL = "INSERT INTO session (id, username) VALUES (1, '" + username + "');";
    return sqlite3_exec(db, insertSQL.c_str(), 0, 0, nullptr) == SQLITE_OK;
}

bool getCurrentUser(sqlite3* db, string& outUsername) {
    string sql = "SELECT username FROM session WHERE id = 1;";
    sqlite3_stmt* stmt;

    if (sqlite3_prepare_v2(db, sql.c_str(), -1, &stmt, 0) == SQLITE_OK) {
        if (sqlite3_step(stmt) == SQLITE_ROW) {
            outUsername = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 0));
            sqlite3_finalize(stmt);
            return true;
        }
        sqlite3_finalize(stmt);
    }
    return false;
}

void logout(sqlite3* db) {
    string sql = "DELETE FROM session;";
    sqlite3_exec(db, sql.c_str(), 0, 0, nullptr);
}



bool SIGN_UP(sqlite3 *db, const string& password, const string& username, const string& phone) {
    // Step 1: Check for existing username or phone
    const char* checkSql = "SELECT 1 FROM users WHERE username = ? OR phone = ?;";
    sqlite3_stmt* checkStmt = nullptr;

    if (sqlite3_prepare_v2(db, checkSql, -1, &checkStmt, nullptr) == SQLITE_OK) {
        sqlite3_bind_text(checkStmt, 1, username.c_str(), -1, SQLITE_STATIC);
        sqlite3_bind_text(checkStmt, 2, phone.c_str(), -1, SQLITE_STATIC);

        if (sqlite3_step(checkStmt) == SQLITE_ROW) {
            sqlite3_finalize(checkStmt);
            return false;  // User or phone exists
        }
        sqlite3_finalize(checkStmt);
    } else {
        cerr << "Failed to prepare SELECT statement: " << sqlite3_errmsg(db) << endl;
        return false;
    }

    // Step 2: Insert new user
    const char* insertSql = "INSERT INTO users (username, password, phone) VALUES (?, ?, ?);";
    sqlite3_stmt* insertStmt = nullptr;

    if (sqlite3_prepare_v2(db, insertSql, -1, &insertStmt, nullptr) == SQLITE_OK) {
        string hashedPassword = sha256(password);
        G_UserName = username;

        sqlite3_bind_text(insertStmt, 1, username.c_str(), -1, SQLITE_STATIC);
        sqlite3_bind_text(insertStmt, 2, hashedPassword.c_str(), -1, SQLITE_STATIC);
        sqlite3_bind_text(insertStmt, 3, phone.c_str(), -1, SQLITE_STATIC);

        if (sqlite3_step(insertStmt) != SQLITE_DONE) {
            cerr << "Error inserting user: " << sqlite3_errmsg(db) << endl;
            sqlite3_finalize(insertStmt);
            return false;
        }

        sqlite3_finalize(insertStmt);
        return true;
    } else {
        cerr << "Failed to prepare INSERT statement: " << sqlite3_errmsg(db) << endl;
        return false;
    }
}



bool LOG_IN(sqlite3 *db ,string password ,string username ) {
    string hashedPassword = sha256(password);
    G_UserName=username;
    string sql = "SELECT * FROM users WHERE username='" + username + "' AND password='" + hashedPassword + "';";
    sqlite3_stmt *stmt;
    bool success = false;

    if (sqlite3_prepare_v2(db, sql.c_str(), -1, &stmt, 0) == SQLITE_OK) {
        if (sqlite3_step(stmt) == SQLITE_ROW) {
            success = true;
        } else {
        }
    }
    sqlite3_finalize(stmt);
    return success;
}

bool resetPassword(sqlite3* db, const string& username, const string& phone, const string& newPassword) {
    string hashedPassword = sha256(newPassword);
    string sql = "UPDATE users SET password = '" + hashedPassword + "' WHERE username = '" + username + "' AND phone = '" + phone + "';";

    char* errMsg = 0;
    int rc = sqlite3_exec(db, sql.c_str(), 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        sqlite3_free(errMsg);
        return false;
    }

    return sqlite3_changes(db) > 0; // True if a row was updated
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




