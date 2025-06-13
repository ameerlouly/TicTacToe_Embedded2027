#ifndef SECDIALOG_H
#define SECDIALOG_H
#include <QTableWidgetItem>
#include <QDialog>

namespace Ui {
class SecDialog;
}

class SecDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SecDialog(QWidget *parent = nullptr);
    ~SecDialog();

private slots:
    void on_startgame_clicked();

    void on_PVP_clicked();

    void on_PVE_clicked();

    void on_normal_clicked();

    void on_infinite_clicked();

    void on_easy_clicked();

    void on_medium_clicked();

    void on_hard_clicked();

    void on_back_clicked();

    void on_back_2_clicked();

    void on_back_3_clicked();

    void on_pushButton_17_clicked();

    void on_tableWidget_itemClicked(QTableWidgetItem *item);

    void on_back_4_clicked();

    void on_history_clicked();

private:
    Ui::SecDialog *ui;
};

#endif // SECDIALOG_H
