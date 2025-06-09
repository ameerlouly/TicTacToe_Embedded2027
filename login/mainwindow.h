#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "secdialog.h"
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

private slots:
    void on_LOGIN_clicked();

    void on_Signup_clicked();

    void on_continueasaguest_clicked();

private:
    Ui::MainWindow *ui;
    SecDialog*secDialog;
};
#endif // MAINWINDOW_H
