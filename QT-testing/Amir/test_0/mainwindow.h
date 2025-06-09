#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_PvP_Button_2_clicked();

    void on_normal_Button_clicked();

    void on_infinite_Button_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
