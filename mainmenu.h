#ifndef MAINMENU_H
#define MAINMENU_H

#include <QMainWindow>
#include<loginwindow.h>
namespace Ui {
class MainMenu;
}

class MainMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainMenu(QWidget *parent = 0);
    ~MainMenu();

private:
    Ui::MainMenu *ui;
private slots:

    void on_adminlog_released();
    void on_readerlog_released();
};

#endif // MAINMENU_H
