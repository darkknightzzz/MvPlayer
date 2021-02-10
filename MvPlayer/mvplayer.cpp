#include "mvplayer.h"
#include "ui_mvplayer.h"

MvPlayer::MvPlayer(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MvPlayer)
{
    ui->setupUi(this);
}

MvPlayer::~MvPlayer()
{
    delete ui;
}


void MvPlayer::on_player_clicked()
{
    ui->test->setText("hello");
}
