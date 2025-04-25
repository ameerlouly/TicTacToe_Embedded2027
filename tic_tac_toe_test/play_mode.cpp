#include "play_mode.h"
#include "ui_play_mode.h"

play_mode::play_mode(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::play_mode)
{
    ui->setupUi(this);
}

play_mode::~play_mode()
{
    delete ui;
}
