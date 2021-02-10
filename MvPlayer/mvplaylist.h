#ifndef MVPLAYLIST_H
#define MVPLAYLIST_H

#include <QMediaPlaylist>

class MvList
{
public:

    ~MvList();

private:

    void list_first();
    void list_select(quint32 Index);
    void list_next(quint32 Index);

private:
    QMediaPlaylist *Playlist;

};


#endif // MVPLAYLIST_H
