#include "reader_querybook.h"
#include "reader_queryself.h"
#include "ui_reader_querybook.h"
#include "reader_alterpwd.h"
#include "reader_queryborrow.h"
#include <QSqlQuery>
#include <QString>
#include <QMessageBox>
#include <QSqlQueryModel>
#include <QDebug>
#include <QSqlTableModel>
#include <QSqlError>
#include <QTableView>
#include <QDate>

reader_querybook::reader_querybook(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::reader_querybook)
{
    ui->setupUi(this);
    setWindowTitle("山东大学图书管理系统——读者端");

    //设置Qtablemodel
    model = new QSqlTableModel(this);
    model->setTable("book");
    model->select();
//    //不显示密码栏 第七列
//    model->removeColumn(6);

    //设置Qtableview
    view=new QTableView;
    view->setModel(model);
    //设置禁止修改图书记录，这一设置至关重要，关系到数据库的安全问题
    view->setEditTriggers(QAbstractItemView::NoEditTriggers);
    view->setFixedSize(800,800);
    //view->setColumnWidth(0,250);
}

reader_querybook::~reader_querybook()
{
    delete ui;
}

bool reader_querybook::modelquery()
{
    if(model->rowCount()==0){
        QMessageBox::about(this,"提示","未找到符合条件的记录");
        return false;
    }
    else{
        model->select();
        view->setModel(model);
        view->setFixedSize(800,800);
        view->setColumnWidth(0,200);
        view->setColumnWidth(1,200);
        view->setColumnWidth(2,200);
        view->setColumnWidth(3,200);
        view->show();
        //************
        model->filter().clear();
        return true;
    }
}


bool reader_querybook::querybook()
{
    model->setTable("book");
    model->select();
    QString isbn,bname,author;
    isbn=ui->isbn->text();
    bname=ui->bname->text();
    author=ui->author->text();

    //isbn，书名，作者 三者均为空，提示，返回
    if(isbn==""&&bname==""&&author==""){
        QMessageBox::about(this,"提示","未输入查询条件，请输入isbn、出版社、书名至少一项");
        return false;
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

bool reader_querybook::querystorage()
{
     model->removeColumns(2,3);
     model->removeColumn(7);
     querybook();
     return modelquery();

}

void reader_querybook::on_pb_querysubmit_released()
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

bool reader_querybook::addborrowrecord()
{
    QString id,isbn,bname,borrowdate,returndate,returnornot,fine,insertsql;
    //通过传参获取id
    id=this->id;
    //获取当前日期
    borrowdate=QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
    //归还日期
    returndate=QDateTime::currentDateTime().addMonths(1).toString("yyyy-MM-dd hh:mm:ss");
    //获取isbn和bname
    isbn=ui->isbn->text();
    bname=ui->bname->text();
    //是否归还和罚款
    returnornot="否";
    fine="0";

    //查询书籍
    if(querybook()==false){
        return false;
    }

    //如果查询到了，就允许插入
    else{
        QSqlQuery themodel;
        QString querysql="select * from book where isbn='"+isbn+"' or name='"+bname+"'";
        if(themodel.exec(querysql)==false){
            QMessageBox::about(this,"提示","失败");
            return false;
        }
        int number;
        //themodel.next();
        if(themodel.first()){
            number=themodel.value("available").toInt();
            bname=themodel.value("Name").toString();
            isbn=themodel.value("isbn").toString();
        }
        if(number<=0){
            QMessageBox::about(this,"提示","该书当前不在馆");
            return false;
        }

        QSqlQuery query;

        //创建SQL语句，采用字符串连接
        //特别注意，转换过来的字符串还需要嵌套单引号
       insertsql="insert into borrow(id,isbn,bname,borrowdate,returndate,returnornot,fine)"
                 "values('"+id+"','"+isbn+"','"+bname+"','"+borrowdate+"','"+returndate+"','"+returnornot+"',"+fine+")";
       qDebug()<<insertsql.toLatin1();
       //发送SQL
       if(query.exec(insertsql)){
           query.exec("update book set available=available-1 where isbn='"+isbn+"'");
           QMessageBox::about(this,"提示","借书成功");
           return true;
       }
       else{
           QMessageBox::about(this,"提示","借书失败,请联系管理员！");
           return false;
       }

    }
}


void reader_querybook::on_pb_borrowsubmit_released()
{
    addborrowrecord();
}

void reader_querybook::on_pb_querystorage_released()
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
    querystorage();
}

void reader_querybook::on_pb_querymyself_released()
{
    reader_queryself* query_self=new reader_queryself;
    this->close();
    query_self->setid(this->id);
    query_self->query_myself();
    query_self->show();
}

void reader_querybook::on_pb_alterpwd_released()
{
    reader_alterpwd* alterpwd=new reader_alterpwd;
    alterpwd->setid(this->id);
    this->close();
    alterpwd->show();
}

void reader_querybook::on_pb_queryborrow_released()
{
    reader_queryborrow* queryborrow=new reader_queryborrow;
    queryborrow->setId(this->id);
    queryborrow->queryborrow();
    this->close();
    queryborrow->show();
}
