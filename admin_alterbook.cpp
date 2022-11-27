#include "admin_alterbook.h"
#include "ui_admin_alterbook.h"
#include "administerwindow.h"
#include "admin_alterreader.h"
#include "admin_alterpwd.h"
#include "admin_queryself.h"
#include "admin_infoborrow.h"
#include "admin_importbook.h"

#include <QSqlQuery>
#include <QString>
#include <QMessageBox>
#include <QSqlQueryModel>
#include <QDebug>
#include <QSqlTableModel>
#include <QSqlError>
#include <QTableView>

admin_alterbook::admin_alterbook(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::admin_alterbook)
{
    ui->setupUi(this);
    setWindowTitle("山东大学图书管理系统——管理员");

    ui->collectionstates->insertItem(0,"中心校区");
    ui->collectionstates->insertItem(1,"青岛校区");
    ui->collectionstates->insertItem(2,"软件园校区");

    //设置Qtablemodel
    model = new QSqlTableModel(this);
    model->setTable("book");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();
//    //不显示密码栏 第七列
//    model->removeColumn(6);

    //设置Qtableview
    view=new QTableView;
    view->setModel(model);
    view->setFixedSize(800,800);
    view->setColumnWidth(3,250);
    view->setColumnWidth(0,250);
}

admin_alterbook::~admin_alterbook()
{
    delete ui;
}

bool admin_alterbook::addbook()
{
    //书名，isbn,作者，出版社，出版日期
    QString isbn,bname,author,publisher,publishdate,insertsql;

    //输入捕获
    isbn=ui->isbn->text();
    bname=ui->bname->text();
    author=ui->author->text();
    publisher=ui->publisher->text();
    publishdate=ui->publishdate->text();

    //如果主键isbn 没有填写，或者不足13+4(-)位 就禁止插入
    if(isbn==""){
        QMessageBox::about(this,"提示","isbn不得为空");
        return false;
    }


    //正则表达式匹配,检查isbn格式
    QRegExp rx("^\\d{3}-\\d-\\d{4}-\\d{4}-\\d$");
    QRegExpValidator v(rx,0);
    QValidator::State res;
    //以下为正则表达式匹配的Qt固定语法
    int pos=0;
    res=v.validate(isbn,pos);

    if(res!=QValidator::Acceptable){
        QMessageBox::about(this,"提示","isbn非法");
        return false;
    }

    //判断是否为空

    if(bname==""){
        QMessageBox::about(this,"提示","书名不得为空");
        return false;
    }
    //如果isbn填写了并且匹配，就允许插入
    else{

        //创建SQL语句，采用字符串连接
        //特别注意，转换过来的字符串还需要嵌套单引号
       insertsql="insert into book(isbn,name,author,publisher,publishdate)"
                 "values('"+isbn+"','"+bname+"','"+author+"','"+publisher+"','"+publishdate+"')";
       qDebug()<<insertsql.toLatin1();
       //发送SQL
       QSqlQuery query;
       if(query.exec(insertsql)){
           QMessageBox::about(this,"提示","添加成功");
           return true;
       }
       else{
           QMessageBox::about(this,"提示","添加失败，可能存在重复的记录");
           return false;
       }

    }
}

bool admin_alterbook::modelquery()
{
    if(model->rowCount()==0){
        QMessageBox::about(this,"提示","未找到符合条件的记录");
        return false;
    }
    else{
        model->select();
        view->setModel(model);
        view->setFixedSize(800,800);
        view->setColumnWidth(3,200);
        view->setColumnWidth(0,200);
        view->show();
        return true;
    }
}


bool admin_alterbook::querybook()
{
    QString isbn,bname,author;
    isbn=ui->isbn->text();
    bname=ui->bname->text();
    author=ui->author->text();

    //isbn，书名，出版社 三者均为空，提示，返回
    if(isbn==""&&bname==""&&author==""){
        QMessageBox::about(this,"提示","您查询到了所有的记录，请慎重操作");
        model->setTable("book");
        model->select();
        view->setFixedSize(800,800);
        view->setColumnWidth(3,200);
        view->setColumnWidth(0,200);
        view->show();
        return true;
    }
    //isbn+书名+作者
    if(isbn!=""&&bname!=""&&author!=""){
        model->setFilter(QString("isbn='%1' and name like '%%2%' and author like '%%3%'").arg(isbn).arg(bname).arg(author));
        return modelquery();
    }
    //isbn+作者
    else if(isbn!=""&&author!=""){
        model->setFilter(QString("isbn='%1' and author like '%%2%'").arg(isbn).arg(author));
        return modelquery();
    }
    //书名+作者
    else if(bname!=""&&author!=""){
        model->setFilter(QString("name like '%%1%' and author like '%%2%'").arg(bname).arg(author));
        return modelquery();
    }
    //isbn+书名
    else if(isbn!=""&&bname!=""){
        model->setFilter(QString("isbn='%1' and name like '%%2%'").arg(isbn).arg(bname));
        return modelquery();
    }
    //isbn查询
    else if(isbn!=""){
        model->setFilter(QString("isbn='%1'").arg(isbn));
        return modelquery();
    }
    //书名查询
    else if(bname!=""){
        model->setFilter(QString("name like '%%1%'").arg(bname));
        return modelquery();
    }
    //作者查询
    else if(author!=""){
        model->setFilter(QString("author like '%%1%'").arg(author));
        return modelquery();
    }
    return false;
}




bool admin_alterbook::deletebook()
{
    //开始事务操作（非常重要，不可或缺）
    model->database().transaction();
    //
    if(model->submitAll()){
        //提交事务
        model->database().commit();
    }
    else{
        //回滚
        model->database().rollback();
        QMessageBox::about(this,tr("tableModel"),tr("Error:%1").arg(model->lastError().text()));
    }
    //开始查询
    //未查到记录
    if(querybook()==false){
        return false;
    }
    else{
        QMessageBox mb;
        mb.setText(tr("查询到%1条记录,确认删除？").arg(model->rowCount()));
        mb.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
        if(mb.exec()==QMessageBox::Yes){
            //删除所用行 注意不能用clear否则会丢失设置好的关于model的所有信息
            this->model->removeRows(0,model->rowCount());
            //当前的视图隐藏
            this->view->hide();
            QMessageBox::about(this,"提示","删除成功");
            return true;
        }
        return false;
    }
}


void admin_alterbook::on_pb_querybook_released()
{
    //开始事务操作（非常重要，不可或缺）
    model->database().transaction();
    //
    if(model->submitAll()){
        model->database().commit();
    }
    else{
        //回滚：非常重要
        model->database().rollback();
        QMessageBox::about(this,tr("tableModel"),tr("Error:%1").arg(model->lastError().text()));
    }
    //开始查询
    querybook();
}

void admin_alterbook::on_pb_addbook_released()
{
    addbook();
}

void admin_alterbook::on_pb_deletebook_released()
{
    deletebook();
}


void admin_alterbook::on_pb_infoborrow_released()
{
    admin_infoborrow* queryborrow=new admin_infoborrow;
    queryborrow->setId(this->id);
    this->close();
    queryborrow->show();
}

void admin_alterbook::on_pb_alterreader_released()
{
    admin_alterreader* alterreader=new admin_alterreader;
    alterreader->setId(this->id);
    this->close();
    alterreader->show();
}

void admin_alterbook::on_pb_alterpwd_released()
{
    admin_alterpwd* alterpwd=new admin_alterpwd;
    alterpwd->setId(this->id);
    this->close();
    alterpwd->show();
}

void admin_alterbook::on_pb_queryself_released()
{
    admin_queryself* queryself=new admin_queryself;
    queryself->setId(this->id);
    queryself->queryself();
    this->close();
    queryself->show();
}


void admin_alterbook::on_pb_alterbook_released()
{
    admin_alterbook* alterbook=new admin_alterbook;
    alterbook->setId(this->id);
    this->close();
    alterbook->show();
}

void admin_alterbook::on_pb_bookimport_released()
{
    admin_importbook* import=new admin_importbook;
    import->show();
}
