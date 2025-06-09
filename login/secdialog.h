#ifndef SECDIALOG_H
#define SECDIALOG_H

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

private:
    Ui::SecDialog *ui;
};

#endif // SECDIALOG_H
