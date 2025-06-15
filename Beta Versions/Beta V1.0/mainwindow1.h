#ifndef MAINWINDOW1_H
#define MAINWINDOW1_H

#include <QMainWindow>
#include <QStackedWidget>
//#include "secdialog.h"

QT_BEGIN_NAMESPACE
namespace Ui
{
class MainWindow1;
}
QT_END_NAMESPACE

class MainWindow1 : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow1(QWidget *parent = nullptr);

    ~MainWindow1();
    void initializeButtons();

private slots:

    void on_Login_Button_clicked();

    void on_Guest_Button_clicked();

    void on_Signup_Button_clicked();

    void on_BackLogin_button_clicked();

    void on_Login_User_Button_clicked();

    void on_Confirm_reset_clicked();

    void on_Reset_buttom_clicked();

private:
    Ui::MainWindow1 *ui;
    //SecDialog*secDialog;
};
#endif // MAINWINDOW1_H
