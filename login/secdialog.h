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

    void on_pushButton_15_clicked();

    void on_easy_mood_clicked();

    void on_back_clicked();

private:
    Ui::SecDialog *ui;
};

#endif // SECDIALOG_H
