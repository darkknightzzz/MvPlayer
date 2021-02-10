#ifndef MVPLAYER_H
#define MVPLAYER_H

#include <QMainWindow>
#include <QVideoWidget>
#include <QMediaPlayer>
#include <QMediaPlaylist>

QT_BEGIN_NAMESPACE
namespace Ui { class MvPlayer; }
QT_END_NAMESPACE

class MvPlayer : public QMainWindow
{
    Q_OBJECT

public:
    MvPlayer(QWidget *parent = nullptr);
    ~MvPlayer();

private slots:
//    void video_play();   //响应空格事件
//    void video_pause();
//    void video_stop();

    void on_player_clicked();

private:
    void Mv_openfile();
    void Mv_closefile();
    void Mv_play();
    void Mv_pause();
    void Mv_stop();

private:
    Ui::MvPlayer *ui;

    QMediaPlayer *player;
    QVideoWidget *videoWidget;
    QMediaPlayer::State m_playerState;
};
#endif // MVPLAYER_H
