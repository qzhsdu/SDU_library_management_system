#include "mainmenu.h"
#include <QApplication>
#include<QWidget>
#include"dbconnect.h"
#include"loginwindow.h"
#include<QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    dbconnect conn;
    if(!conn.getconnect())return 1;
    MainMenu w;
    w.show();
    //信号-槽连接，最后一个窗口关闭时退出程序
    a.connect(&a, SIGNAL(lastWindowClosed()), &a, SLOT(quit()));
    return a.exec();
}
