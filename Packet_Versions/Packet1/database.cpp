#include <iostream>
#include <string>
#include "AItest.h"
#include "sqlite3.h"
#include <QString>
#include <QTableWidget>
#include <QTableWidgetItem>
#include"main.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>

#include <QFile>
#include <QTextStream>
using namespace std;



string G_UserName;

string hashFile;

void createTables(sqlite3 *db) {
    const char* userTableSQL =
                                    "CREATE TABLE IF NOT EXISTS users ("
                                    "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                                    "username TEXT UNIQUE,"
                                    "password TEXT,"
                                    "phone TEXT UNIQUE);";

    const char* gameHistoryTableSQL = "CREATE TABLE IF NOT EXISTS game_history ("
                                      "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                                      "username TEXT, "
                                      "result TEXT, "
                                      "moves TEXT, "  // New column
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

QString readValueFromFile(const QString& filePath) {
    QFile file(filePath);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        QString value = in.readAll();
        file.close();
        return QString::fromStdString(value.toStdString());
    } else {
        qDebug() << "Cannot open file for reading!";
        return "";
    }
}


void createAndWriteToFile(const QString& filePath, const QString& text) {
    QFile file(filePath);

    // QIODevice::WriteOnly will create the file if it doesn't exist
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);
        out << text;
        file.close();
        qDebug() << "File created/written successfully:" << filePath;
    } else {
        qDebug() << "Error opening file:" << file.errorString();
    }
}


bool setCurrentUser(sqlite3* db, const string& username) {
    string clearSQL = "DELETE FROM session;";
    sqlite3_exec(db, clearSQL.c_str(), 0, 0, nullptr);

    string insertSQL = "INSERT INTO session (id, username) VALUES (1, '" + username + "');";

    hashFile = sha512(username) + sha384(username) + sha224(username) + sha256(username) +sha3_512(username) + sha3_256(username) +RealSha3_512(username);

    createAndWriteToFile(AuthPath,QString::fromStdString(hashFile));

    return sqlite3_exec(db, insertSQL.c_str(), 0, 0, nullptr) == SQLITE_OK;
}

bool getCurrentUser(sqlite3* db, string& outUsername) {
    string sql = "SELECT username FROM session WHERE id = 1;";
    sqlite3_stmt* stmt;

    if (sqlite3_prepare_v2(db, sql.c_str(), -1, &stmt, 0) == SQLITE_OK) {
        if (sqlite3_step(stmt) == SQLITE_ROW) {
            outUsername = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 0));
            sqlite3_finalize(stmt);

            QString fullHash1 =readValueFromFile(AuthPath).mid(0,128);
            QString fullHash2 =readValueFromFile(AuthPath).mid(128,96);
            QString fullHash3 =readValueFromFile(AuthPath).mid(224,56);
            QString fullHash4 =readValueFromFile(AuthPath).mid(280,64);
            QString fullHash5 =readValueFromFile(AuthPath).mid(344,128);
            QString fullHash6 =readValueFromFile(AuthPath).mid(472,64);
            QString fullHash7 =readValueFromFile(AuthPath).mid(536,128);
            QString fullHash8 =readValueFromFile(AuthPath).mid(664,128);

            if(fullHash1 == QString::fromStdString(sha512(outUsername)) &&
               fullHash2 == QString::fromStdString(sha384(outUsername)) &&
               fullHash3 == QString::fromStdString(sha224(outUsername)) &&
               fullHash4 == QString::fromStdString(sha256(outUsername)) &&
               fullHash5 == QString::fromStdString(sha3_512(outUsername)) &&
               fullHash6 == QString::fromStdString(sha3_256(outUsername)) &&
               fullHash7 == QString::fromStdString(RealSha3_512(outUsername)) &&
               fullHash8 == "")
            {
                qDebug() << "Hi 1" <<outUsername;
                qDebug() << "Hi 2" <<fullHash1;
                qDebug() << QString::fromStdString(sha256(outUsername));
                return true;
            }
            else{
                    return false;
            }
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
        string hashedPhone =sha256(phone);
        G_UserName = username;

        sqlite3_bind_text(insertStmt, 1, username.c_str(), -1, SQLITE_STATIC);
        sqlite3_bind_text(insertStmt, 2, hashedPassword.c_str(), -1, SQLITE_STATIC);
        sqlite3_bind_text(insertStmt, 3, hashedPhone.c_str(), -1, SQLITE_STATIC);

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
    string hashedPhone =sha256(phone);
    string sql = "UPDATE users SET password = '" + hashedPassword + "' WHERE username = '" + username + "' AND phone = '" + hashedPhone + "';";

    char* errMsg = 0;
    int rc = sqlite3_exec(db, sql.c_str(), 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        sqlite3_free(errMsg);
        return false;
    }

    return sqlite3_changes(db) > 0; // True if a row was updated
}


void saveGameHistory(sqlite3* db, string result , int HistoryMoves[9]) {

    if(REG_Mode != GUEST){
        string movesStr;
        for (int i = 0; i < 9; ++i) {
            movesStr += to_string(HistoryMoves[i]);
            if (i < 8)
                movesStr += ",";
        }

        string sql = "INSERT INTO game_history (username, result, moves) VALUES ('" +G_UserName + "', '" + result + "', '" + movesStr + "');";
        char* errMsg = 0;
        int rc = sqlite3_exec(db, sql.c_str(), 0, 0, &errMsg);

        if (rc != SQLITE_OK) {
            cout << "Error saving game history: " << errMsg << endl;
            sqlite3_free(errMsg);
        } else {
            cout << "Game history saved successfully.\n";
        }
    }

}

 int his[9][9]={1};
 int gameID[10];
 QPushButton* whywhywhy[9];

void viewGameHistory(sqlite3* db, QTableWidget* table)
 {

    QString username = QString::fromStdString(G_UserName);  // assuming G_UserName is std::string
    std::string sql = "SELECT result, timestamp, moves FROM game_history WHERE username='" + G_UserName + "' ORDER BY timestamp DESC LIMIT 10;";
    sqlite3_stmt* stmt;

    int rc = sqlite3_prepare_v2(db, sql.c_str(), -1, &stmt, 0);
    if (rc != SQLITE_OK)
    {
        qDebug() << "Failed to fetch game history:" << sqlite3_errmsg(db);
        return;
    }

    table->clear();  // clear previous content
    table->setRowCount(0);
    table->setColumnCount(4);
    table->setHorizontalHeaderLabels({"Game", "Time", "Result","Replay"});

    int gameNumber = 1;
    int winCount = 0, lossCount = 0, drawCount = 0;



    while (sqlite3_step(stmt) == SQLITE_ROW)
    {
        std::string result = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 0));
        std::string timestamp = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 1));


        //////////////
        // Get the moves string from the database
        const unsigned char* movesText = sqlite3_column_text(stmt, 2);
        std::string movesStr = movesText ? reinterpret_cast<const char*>(movesText) : "";

        // Split the string by comma and convert to int
        std::stringstream ss(movesStr);
        std::string token;
        int index = 0;

        //std::cout << "movesStr: '" << movesStr << "'" << std::endl;

        while (std::getline(ss, token, ',') && index < 9)
        {
            his[gameNumber-1][index++] = std::stoi(token);
        }
        /////////////
        int row = table->rowCount();
        table->insertRow(row);

         QPushButton *button = new QPushButton(QString("Game %1 Replay").arg(gameNumber));
        gameID[gameNumber - 1] = gameNumber-1;
        whywhywhy[gameNumber - 1] = button;

        for(int i=0; i<9; i++)
        {
            //qDebug() << "played:" << his[gameNumber-1][i]<<" ID: "<<gameID[gameNumber-1];
        }




        table->setItem(row, 0, new QTableWidgetItem(QString("Game %1").arg(gameNumber)));
        table->setItem(row, 1, new QTableWidgetItem(QString::fromStdString(timestamp)));
        table->setItem(row, 2, new QTableWidgetItem(QString::fromStdString(result)));
        table->setCellWidget(row, 3, button);

        if (result == "WIN") winCount++;
        else if (result == "LOSS") lossCount++;
        else if (result == "Draw") drawCount++;

        qDebug() <<TotalLoses<<" "<<TotalWins << " "<<TotalDraws;



        gameNumber++;
    }

    TotalLoses = lossCount;
    TotalWins = winCount;
    TotalDraws = drawCount;

        QObject::connect(whywhywhy[0], &QPushButton::clicked,[&]() {Gamewindow2->OldGameHistory(his[(whywhywhy[0]->text().mid(5,2).toInt()) -1]); });
    QObject::connect(whywhywhy[1], &QPushButton::clicked,[&]() {Gamewindow2->OldGameHistory(his[(whywhywhy[1]->text().mid(5,2).toInt()) -1]); });
        QObject::connect(whywhywhy[2], &QPushButton::clicked,[&]() {Gamewindow2->OldGameHistory(his[(whywhywhy[2]->text().mid(5,2).toInt()) -1]); });
    QObject::connect(whywhywhy[3], &QPushButton::clicked,[&]() {Gamewindow2->OldGameHistory(his[(whywhywhy[3]->text().mid(5,2).toInt()) -1]); });
        QObject::connect(whywhywhy[4], &QPushButton::clicked,[&]() {Gamewindow2->OldGameHistory(his[(whywhywhy[4]->text().mid(5,2).toInt()) -1]); });
    QObject::connect(whywhywhy[5], &QPushButton::clicked,[&]() {Gamewindow2->OldGameHistory(his[(whywhywhy[5]->text().mid(5,2).toInt()) -1]); });
        QObject::connect(whywhywhy[6], &QPushButton::clicked,[&]() {Gamewindow2->OldGameHistory(his[(whywhywhy[6]->text().mid(5,2).toInt()) -1]); });
    QObject::connect(whywhywhy[7], &QPushButton::clicked,[&]() {Gamewindow2->OldGameHistory(his[(whywhywhy[7]->text().mid(5,2).toInt()) -1]); });
        QObject::connect(whywhywhy[8], &QPushButton::clicked,[&]() {Gamewindow2->OldGameHistory(his[(whywhywhy[8]->text().mid(5,2).toInt()) -1]); });

    sqlite3_finalize(stmt);
}




