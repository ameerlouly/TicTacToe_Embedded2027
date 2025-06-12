#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void initializeButtons();

private slots:
    void ShowGrid();

    void on_PvP_Button_clicked();

    void on_normal_Button_clicked();

    void on_infinite_Button_clicked();

    void on_PvAI_Button_easy_clicked();

    void on_PvAI_Button_clicked();

    void on_PvAI_Button_Normal_clicked();

    void on_PvAI_Button_hard_clicked();

    void on_ShowResults_clicked();

    void on_grid0_clicked();
    void on_grid1_clicked();
    void on_grid2_clicked();
    void on_grid3_clicked();
    void on_grid4_clicked();
    void on_grid5_clicked();
    void on_grid6_clicked();
    void on_grid7_clicked();
    void on_grid8_clicked();

    void on_rematch_clicked();

    void on_showHistory_clicked();

    void on_LogOut_Button_clicked();

    void on_profile_button_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
