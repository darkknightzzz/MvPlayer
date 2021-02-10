#ifndef MVMENU_H
#define MVMENU_H

#include <QFileDialog>

class MvMenu
{
public:

    ~MvMenu();

private:
    void menu_openfile();
    void menu_closefile();
    void menu_play();
    void menu_pause();
    void menu_stop();

};


#endif // MVMENU_H
