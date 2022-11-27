#include "loginwindow.h"
#include "ui_loginwindow.h"
#include <QSqlQuery>
#include <Qstring>
#include <QWidget>
#include <QMessageBox>
#include "administerwindow.h"
#include "infowindow.h"

loginWindow::loginWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::loginWindow)
{
    ui->setupUi(this);
    //密码形式
    ui->pwd->setEchoMode(QLineEdit::Password);
    setWindowTitle("山东大学统一身份认证登录");
}

loginWindow::loginWindow(bool thetype) :
    type(thetype),
    ui(new Ui::loginWindow)
{
    ui->setupUi(this);
    //密码形式
    ui->pwd->setEchoMode(QLineEdit::Password);
    setWindowTitle("山东大学统一身份认证登录");
}
loginWindow::~loginWindow()
{
    delete ui;
}

bool loginWindow::login(bool type)
{
    bool flag=false;
    //获取用户名
    QString user=ui->user->text();
    id=user;
    //获取密码
    QString pwd= ui->pwd->text();

    if(user.isEmpty())QMessageBox::about(this,"Fail","Please input your username!");
    else if(pwd.isEmpty())QMessageBox::about(this,"Fail","Please input your password!");
    else
    {
       QSqlQuery query;
       if(type==true)
           query.exec("select * from administer");
       else if(type==false)
           query.exec("select * from reader");
       while(query.next()){
           if(user==query.value("id").toString()&&pwd==query.value("password").toString())
           {
               flag=true;
               if(type==true)
               {
                    //创建管理员界面开始
                    administerWindow* admin=new administerWindow;
                    admin->setId(this->id);
                    admin->show();
                    //创建管理员界面结束
               }
               else if(type==false)
               {

                    //infoWindow* info=new infoWindow(user);
                    infoWindow* info=new infoWindow;
                    info->setid(this->id);
                    info->show();
               }
               this->close();
               return true;
           }
       }
       if(!flag)QMessageBox::about(this,"Fail","用户名或密码错误！");
       return false;
    }
    return false;
}

void loginWindow::on_pblogin_released()
{
    login(this->type);
}
