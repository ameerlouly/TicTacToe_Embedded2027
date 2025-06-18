#ifndef SECDIALOG_H
#define SECDIALOG_H
#include <QTableWidgetItem>
#include <QDialog>
#include <QLabel>

namespace Ui {
class SecDialog;
}

class SecDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SecDialog(QWidget *parent = nullptr);
    ~SecDialog();
    void returnBacktoPage0InGame();
        void OldGameHistory(int his[9]);

    void isGuest();
    void initiailzeButtons();

        QPushButton* Profile;
        QPushButton* LogOut;

        QPushButton* GridButtons[9];

        QPushButton* PVP;
        QPushButton* Normal;
        QPushButton* StartGame;
        QPushButton* ReMatchButton;

        QLabel* WinnerText;

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

   // void on_pushButton_17_clicked();

    void on_tableWidget_itemClicked(QTableWidgetItem *item);

    void on_back_4_clicked();

    void on_history_clicked();

    void on_settings_clicked();

    void on_profile_clicked();

    void on_grid0_clicked();

    void on_grid1_clicked();

    void on_grid2_clicked();

    void on_grid3_clicked();

    void on_grid4_clicked();

    void on_grid5_clicked();

    void on_grid6_clicked();

    void on_grid7_clicked();

    void on_grid8_clicked();

    void on_Rematch_clicked();

    void ShowGrid();

    void on_GameReview_clicked();


    void on_Log_out_clicked();



    void on_home_clicked();

    void on_ViewHistory_Button_clicked();

    void on_back_5_clicked();

private:
    Ui::SecDialog *ui;
};

#endif // SECDIALOG_H
