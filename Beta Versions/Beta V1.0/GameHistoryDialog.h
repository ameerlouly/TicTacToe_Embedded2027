#ifndef GAMEHISTORYDIALOG_H
#define GAMEHISTORYDIALOG_H
#pragma once

#include <QDialog>
#include <QTableWidget>
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <sqlite3.h>

class GameHistoryDialog : public QDialog {
    Q_OBJECT

public:
    GameHistoryDialog(QWidget *parent, sqlite3 *db, const std::string& username);

private:
    QTableWidget *table;
    QLabel *summaryLabel;
    void loadHistory(sqlite3 *db, const std::string& username);
};

#endif // GAMEHISTORYDIALOG_H
