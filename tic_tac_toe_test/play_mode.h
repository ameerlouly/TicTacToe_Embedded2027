#ifndef PLAY_MODE_H
#define PLAY_MODE_H

#include <QDialog>

namespace Ui {
class play_mode;
}

class play_mode : public QDialog
{
    Q_OBJECT

public:
    explicit play_mode(QWidget *parent = nullptr);
    ~play_mode();

private:
    Ui::play_mode *ui;
};

#endif // PLAY_MODE_H
