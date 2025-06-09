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
    void on_PvP_Button_clicked();

    void on_normal_Button_clicked();

    void on_infinite_Button_clicked();

    void on_PvAI_Button_easy_clicked();

    void on_PvAI_Button_clicked();

    void on_PvAI_Button_Normal_clicked();

    void on_PvAI_Button_hard_clicked();

    void on_gusetModeSelect_clicked();

    void on_SignupModeSelect_clicked();

    void on_loginModeselect_clicked();

    void on_Login_PushBottom_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
