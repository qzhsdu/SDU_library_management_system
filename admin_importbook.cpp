#include "admin_importbook.h"
#include "ui_admin_importbook.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QFile>
#include <QString>
#include <QTextStream>
#include <QSqlError>
#include <QDebug>
#include <QDate>
#include "dbconnect.h"

admin_importbook::admin_importbook(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::admin_importbook)
{
    ui->setupUi(this);
    setWindowTitle("山东大学图书管理系统——管理员端");
}

admin_importbook::~admin_importbook()
{
    delete ui;
}
bool admin_importbook::importbook()
{
    QString pathname=ui->path_name->text();
    if(pathname==""){
        QMessageBox::about(this,"提示","文件路径不得为空！");
        return false;
    }
    qDebug()<<pathname;
    QFile file(pathname);
    //"C:/Users/Tony/Desktop/import.csv"
    if(!file.open(QIODevice::ReadOnly|QIODevice::Text))
    {
        qDebug()<<file.errorString();
        QMessageBox::about(this,"提示","文件打开失败，请检查路径是否正确");
        return false;
    }

    QSqlQuery query;
    QStringList list;
    list.clear();
    QTextStream in(&file);
    QString error1;
    QString error2;
    while(!in.atEnd()){
        QString fileLine = in.readLine();  //从第一行读取至下一行
        list = fileLine.split(",", QString::SkipEmptyParts);

        QString Isbn=list.at(0);
        QString Name=list.at(1);
        QString Author=list.at(2);
        QString Publisher=list.at(3);
        QString Publishdate=list.at(4);
        QString Totalnumber=list.at(5);
        QString Available=list.at(6);
        QString Notes;
        if(list.size()==8)
            Notes=list.at(7);
        else
            Notes="";
        QString insertsql="insert into book(isbn,name,author,publisher,publishdate,totalnumber,available,notes)"
                          "values('"+Isbn+"','"+Name+"','"+Author+"','"+Publisher+"','"+Publishdate+"',"+Totalnumber+","+Available+",'"+Notes+"')"; //准备执行SQL查询
        qDebug()<<insertsql.toLatin1();
        if(!query.exec(insertsql)){
            error1=query.lastError().driverText();
            error2=query.lastError().databaseText();
            QMessageBox::warning(this,"错误",error1);
            QMessageBox::warning(this,"错误",error2);
            return false;
        }
    }
    QMessageBox::about(this,"提示","导入成功");
    return true;
}

void admin_importbook::on_pushButton_released()
{
    importbook();
}
