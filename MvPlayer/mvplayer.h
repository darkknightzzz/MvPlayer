#ifndef MVPLAYER_H
#define MVPLAYER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MvPlayer; }
QT_END_NAMESPACE

class MvPlayer : public QMainWindow
{
    Q_OBJECT

public:
    MvPlayer(QWidget *parent = nullptr);
    ~MvPlayer();

private:
    Ui::MvPlayer *ui;
};
#endif // MVPLAYER_H
