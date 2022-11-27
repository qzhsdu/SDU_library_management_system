#include "mainmenu.h"
#include "ui_mainmenu.h"
#include "loginwindow.h"
#include "infowindow.h"

MainMenu::MainMenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainMenu)
{
    ui->setupUi(this);
    setWindowTitle("山东大学青岛校区图书管理系统");
    //setFixedSize(700,1244);
    this->setAutoFillBackground(true);
}

MainMenu::~MainMenu()
{
    delete ui;
}

void MainMenu::on_adminlog_released()
{
    loginWindow *log=new loginWindow(true);
    log->show();
}

void MainMenu::on_readerlog_released()
{
    loginWindow *log=new loginWindow(false);
    log->show();
}
