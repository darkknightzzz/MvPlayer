#include "mvplayer.h"
#include "ui_mvplayer.h"

MvPlayer::MvPlayer(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MvPlayer)
{
    ui->setupUi(this);
    initLayout();

}

MvPlayer::~MvPlayer()
{
    delete ui;
}


void MvPlayer::on_player_clicked()
{

}

void initStyle(Ui::MvPlayer *ui){
    QPalette videoPal(ui->video->palette());
    videoPal.setColor(QPalette::Background, Qt::black);
    ui->video->setAutoFillBackground(true);
    ui->video->setPalette(videoPal);
}

void MvPlayer::initLayout(){
    QHBoxLayout *outterHLayout = new QHBoxLayout;
    QVBoxLayout *innerVLayout = new QVBoxLayout;
    innerVLayout->setStretchFactor(ui->video, 7);
    innerVLayout->setStretchFactor(ui->btm, 1);
    outterHLayout->setGeometry(QRect(0, 0, 861, 591));
    outterHLayout->setStretchFactor(innerVLayout, 3);
    outterHLayout->setStretchFactor(ui->playList, 1);

    initStyle(ui);

}

