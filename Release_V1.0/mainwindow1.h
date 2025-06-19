#ifndef MAINWINDOW1_H
#define MAINWINDOW1_H

#include <QMainWindow>
#include <QStackedWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
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
    void initializeButtons();   // Used for Hiding warning Labels

    QPushButton* LoginButton;
    QPushButton* SignUpButton;
    QLineEdit* NameInput;
    QLineEdit* PassInput;
    QLineEdit* ConfPassInput;
    QLineEdit* NumInput;
    QPushButton* LogUserButton;

private slots:

    void on_Login_Button_clicked();

    void on_Guest_Button_clicked();

    void on_Signup_Button_clicked();

    void on_BackLogin_button_clicked();

    void on_Login_User_Button_clicked();

    void on_Confirm_reset_clicked();

    void on_Reset_buttom_clicked();

    void on_BackLogin_button_2_clicked();

private:
    Ui::MainWindow1 *ui;
    //SecDialog*secDialog;
};
#endif // MAINWINDOW1_H
