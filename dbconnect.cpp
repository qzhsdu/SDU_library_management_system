#include "dbconnect.h"
#include <QApplication>
#include <Qdebug>
#include <QSqlDatabase>
#include <QSqlError>


dbconnect::dbconnect()
{

}

bool dbconnect::getconnect()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");   //MySQL驱动
    db.setDatabaseName("study1");                           //数据库名
    db.setHostName("localhost");                            //数据库所在主机IP，此处数据库保存在本地
    db.setPort(3306);                                       //端口号
    db.setUserName("root");                                 //登陆用户名
    db.setPassword("123456");                               //登陆密码
    if(!db.open())
    {
        qDebug() << "open fail\n" << db.lastError().driverText() << "\n";
        return false;
    }
    return true;
}
