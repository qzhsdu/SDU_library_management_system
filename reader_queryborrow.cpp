#include "reader_queryborrow.h"
#include "ui_reader_queryborrow.h"
#include "reader_alterpwd.h"
#include "reader_querybook.h"
#include "reader_queryself.h"
#include <QSqlTableModel>
#include <QTableView>
#include <QSqlQueryModel>
#include <QStringList>
#include <QModelIndex>
#include <QSqlQuery>
#include <QMessageBox>
#include <QDebug>
#include <QDate>
#include <QDateTime>

reader_queryborrow::reader_queryborrow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::reader_queryborrow)
{
    ui->setupUi(this);
    setWindowTitle("山东大学图书管理系统——读者端");
    model = new QSqlTableModel(this);

}

reader_queryborrow::~reader_queryborrow()
{
    delete ui;
}

void reader_queryborrow::queryborrow()
{
    model->setTable("borrow");
    model->setFilter("id="+this->id+"");
    model->select();
    model->removeColumn(0);
    model->setHeaderData(0,Qt::Orientation::Horizontal,"ISBN");
    model->setHeaderData(1,Qt::Orientation::Horizontal,"书名");
    model->setHeaderData(2,Qt::Orientation::Horizontal,"借书日期");
    model->setHeaderData(3,Qt::Orientation::Horizontal,"应还日期");
    model->setHeaderData(4,Qt::Orientation::Horizontal,"是否归还");
    model->setHeaderData(5,Qt::Orientation::Horizontal,"欠款");

    //设置Qtableview
    ui->borrowview->setModel(model);
    //设置禁止修改图书记录，这一设置至关重要，关系到数据库的安全问题
    ui->borrowview->setEditTriggers(QAbstractItemView::NoEditTriggers);
    //ui->borrowview->setColumnHidden(0,true);
    ui->borrowview->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
//    ui->borrowview->setColumnWidth(1,180);
//    ui->borrowview->setColumnWidth(2,250);

    return ;
}


void reader_queryborrow::on_pb_querybook_released()
{
    reader_querybook* querybook=new reader_querybook;
    querybook->setid(this->id);
    this->close();
    querybook->show();
}

void reader_queryborrow::on_pb_querymyself_released()
{
    reader_queryself* query_self=new reader_queryself;
    this->close();
    query_self->setid(this->id);
    query_self->query_myself();
    query_self->show();
}

void reader_queryborrow::on_pb_alterpwd_released()
{
    reader_alterpwd* alterpwd=new reader_alterpwd;
    alterpwd->setid(this->id);
    this->close();
    alterpwd->show();
}

void reader_queryborrow::on_pb_querynotreturn_released()
{
    model->setTable("borrow");
    model->setFilter("id="+this->id+" and returnornot='否'");
    model->select();
    model->removeColumn(0);
    model->setHeaderData(0,Qt::Orientation::Horizontal,"ISBN");
    model->setHeaderData(1,Qt::Orientation::Horizontal,"书名");
    model->setHeaderData(2,Qt::Orientation::Horizontal,"借书日期");
    model->setHeaderData(3,Qt::Orientation::Horizontal,"应还日期");
    model->setHeaderData(4,Qt::Orientation::Horizontal,"是否归还");
    model->setHeaderData(5,Qt::Orientation::Horizontal,"欠款");

    //设置Qtableview
    ui->borrowview->setModel(model);
    //设置禁止修改图书记录，这一设置至关重要，关系到数据库的安全问题
    ui->borrowview->setEditTriggers(QAbstractItemView::NoEditTriggers);
    //ui->borrowview->setColumnHidden(0,true);
    ui->borrowview->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
//    ui->borrowview->setColumnWidth(1,180);
//    ui->borrowview->setColumnWidth(2,250);

    return ;

}

void reader_queryborrow::on_pb_returnbook_released()
{
    ui->borrowview->setSelectionMode(QAbstractItemView::SingleSelection);
    int row=ui->borrowview->currentIndex().row();
    //获取归还与否
    QModelIndex index1=model->index(row,4);
    QString ret=model->data(index1).toString();

    QModelIndex index2=model->index(row,6);
    QString status=model->data(index2).toString();
    if(ret=="否")
    {
        if(status!=""){
            QMessageBox::about(this,"提示","该书损坏或丢失，请联系管理员！");
            return;
        }

        //获取ISBN
        QModelIndex index2=model->index(row,0);
        QString isbn=model->data(index2).toString();

        //获取借书时间
        QModelIndex index3=model->index(row,2);
        QString borrowdate=model->data(index3).toDateTime().toString("yyyy-MM-dd hh:mm:ss");

        //获取欠款
        QModelIndex index4=model->index(row,6);
        QString fine=model->data(index4).toString();

         QString updatesql;
        //还书
        QSqlQuery query;
        updatesql="update borrow set returnornot='是',fine=0 where id='"+this->id+"' and isbn='"+isbn+"' and borrowdate='"+borrowdate+"'";
        qDebug()<<updatesql.toLatin1();
        query.exec(updatesql);
        int n=query.numRowsAffected();
        if(n>=1){
            //更新可借书目
            updatesql=QString("update book set available=available+'%1' where isbn='"+isbn+"'").arg(n);
            //qDebug()<<updatesql.toLatin1();
            query.exec(updatesql);
            //更新欠款
            updatesql=QString("update reader set fine=fine+'%1' where id='"+id+"'").arg(fine);
            QMessageBox::about(this,"提示","归还成功！");
            on_pb_querynotreturn_released();
        }
        else{
            QMessageBox::about(this,"提示","Fail！");
            return ;
        }
    }
    else
    {
        QMessageBox::about(this,"提示","该书已经归还，不能重复还书！");
        return;
    }
}

void reader_queryborrow::on_pb_returnbook_2_released()
{
    queryborrow();
}

void reader_queryborrow::on_pb_renewbook_released()
{
    ui->borrowview->setSelectionMode(QAbstractItemView::SingleSelection);
    int row=ui->borrowview->currentIndex().row();
    //获取归还与否
    QModelIndex index1=model->index(row,4);
    QString ret=model->data(index1).toString();
    if(ret=="否")
    {
        //获取ISBN
        QModelIndex index2=model->index(row,0);
        QString isbn=model->data(index2).toString();

        //获取借书时间
        QModelIndex index3=model->index(row,2);
        QString borrowdate=model->data(index3).toDateTime().toString("yyyy-MM-dd hh:mm:ss");

        //获取欠款
        QModelIndex index4=model->index(row,6);
        QString fine=model->data(index4).toString();

         QString updatesql;
        //续借
        QString time1= QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
        QString time2= QDateTime::currentDateTime().addMonths(1).toString("yyyy-MM-dd hh:mm:ss");
        QSqlQuery query;
        updatesql="update borrow set borrowdate='"+time1+"',returndate= '"+time2+"',fine=0 where id='"+this->id+"' and isbn='"+isbn+"' and borrowdate='"+borrowdate+"'";
        qDebug()<<updatesql.toLatin1();
        query.exec(updatesql);
        int n=query.numRowsAffected();
        if(n>=1){
            //更新欠款
            updatesql=QString("update reader set fine=fine+'%1' where id='"+id+"'").arg(fine);
            query.exec(updatesql);
            //更新borrowdate
            borrowdate=time2;
            QMessageBox::about(this,"提示","续借成功！归还日期为"+time2+"");
            on_pb_querynotreturn_released();
        }
        else{
            QMessageBox::about(this,"提示","您的操作太频繁，请稍后刷新重试");
            return ;
        }
    }
    else
    {
        QMessageBox::about(this,"提示","该书已经归还，不能续借！");
        return;
    }
}
