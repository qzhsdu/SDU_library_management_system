#include "admin_infoborrow.h"
#include "admin_alterreader.h"
#include "admin_alterbook.h"
#include "admin_alterpwd.h"
#include "admin_queryself.h"
#include "ui_admin_infoborrow.h"
#include "admin_importbook.h"

#include <QSqlTableModel>
#include <QDateTime>
#include <QMessageBox>
#include <Qsqlquery>
#include <QDate>
#include <QString>
#include <QDebug>

admin_infoborrow::admin_infoborrow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::admin_infoborrow)
{
    ui->setupUi(this);
    setWindowTitle("山东大学图书管理系统——管理员");
    QDateTime::currentDateTime();
    model=new QSqlTableModel(this);
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->setTable("borrow");
    view = new QTableView;
    view->setModel(model);
    view->setFixedSize(800,800);

}

admin_infoborrow::~admin_infoborrow()
{
    delete ui;
}

//显示查询结果，便于代码重用
bool admin_infoborrow::modelquery()
{
    if(model->rowCount()==0){
        QMessageBox::about(this,"提示","没有符合条件的记录！");
        return false;
    }
    else{
        model->select();
        view->setModel(model);
        view->show();
        return true;
    }
}



//支持学号，姓名，学院 查询
bool admin_infoborrow::queryborrow()
{
    QString id,isbn;
    id=ui->id->text();
    isbn=ui->isbn->text();
    //学号,isbn 均为空，提示
    if(id==""&&isbn==""){
        QMessageBox::about(this,"提示","您查询到了所有的记录!");
        model->setTable("borrow");
        //model->removeColumns()
        model->select();
        view->setModel(model);
        view->show();
        return true;
    }

    //学号+isbn
    else if(id!=""&&isbn!=""){
        model->setFilter(QString("id='%1' and isbn='%2'").arg(id).arg(isbn));
        return modelquery();
    }


    //学号查询
    else if(id!=""){
        model->setFilter(QString("id='%1'").arg(id));
        return modelquery();
    }

    //isbn查询
    else if(isbn!=""){
        model->setFilter(QString("isbn='%1'").arg(isbn));
        return modelquery();
    }
    return false;
}


void admin_infoborrow::on_pb_queryborrow_clicked()
{
    queryborrow();
}


//增加借阅
void admin_infoborrow::on_pb_addborrow_clicked()
{
    QString insertsql;
    QString readerid=ui->id->text();
    QString isbn=ui->isbn->text();
    QString bname=ui->bname->text();
    QString borrowdate=ui->borrowdate->text();
    QString returndate=ui->returndate->text();

    if(readerid==""||isbn==""||bname==""||borrowdate==""||returndate==""){
        QMessageBox::about(this,"提示","输入非法,前五项必填！");
        return ;
    }
    //这里应该检查输入，但是限于时间没有做
    QString fine="0";
    if(ui->fine->text()!="")
        fine=ui->fine->text();

    QSqlQuery query;
    insertsql="insert into borrow(id,isbn,bname,borrowdate,returndate,returnornot,fine)"
              "values('"+readerid+"','"+isbn+"','"+bname+"','"+borrowdate+"','"+returndate+"','否',"+fine+")";
    if(query.exec(insertsql)){
        QMessageBox::about(this,"提示","增加借阅成功！");
        query.exec("update book set Totalnumber=Totalnumber-1 where isbn='"+isbn+"'");
    }
    else
        QMessageBox::about(this,"提示","失败！请检查书籍信息是否正确");
    return;
}



//检查超期图书
void admin_infoborrow::on_pb_alterduebook_released()
{
    QSqlQuery query;
    QString current=QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
    QString updatesql="update borrow set fine=TIMESTAMPDIFF(Day,returndate,'"+current+"')*0.1 where returnornot='否' and TIMESTAMPDIFF(Day,returndate,'"+current+"')>35 ";
    qDebug()<<updatesql.toLatin1();
    if(query.exec(updatesql))
        QMessageBox::about(this,"提示","更新成功！");
    else{
        QMessageBox::about(this,"提示","更新失败");
    }
    return;
}

void admin_infoborrow::on_pb_recordmissing_released()
{
    QString insertsql;
    QString readerid=ui->id->text();
    QString isbn=ui->isbn->text();
    QString bname=ui->bname->text();
    QString borrowdate=ui->borrowdate->text();
    QString returndate=ui->returndate->text();

    if(readerid==""||isbn==""||bname==""||borrowdate==""||returndate==""){
        QMessageBox::about(this,"提示","输入非法,前五项必填！");
        return ;
    }
    //这里应该检查输入，但是限于时间没有做
    QString fine="0";
    if(ui->fine->text()!="")
        fine=ui->fine->text();

    QSqlQuery query;
    insertsql="insert into borrow(id,isbn,bname,borrowdate,returndate,returnornot,fine,notes)"
              "values('"+readerid+"','"+isbn+"','"+bname+"','"+borrowdate+"','"+returndate+"','否',"+fine+",'丢失')";
    qDebug()<<insertsql.toLatin1();
    if(query.exec(insertsql)){
        QMessageBox::about(this,"提示","插入成功！");
        query.exec("update book set Totalnumber=Totalnumber-1 where isbn='"+isbn+"'");
    }
    else
        QMessageBox::about(this,"提示","插入失败！");
    return;
}

void admin_infoborrow::on_pb_alterbook_released()
{
    admin_alterbook* alterbook=new admin_alterbook;
    alterbook->setId(this->id);
    this->close();
    alterbook->show();
}

void admin_infoborrow::on_pb_alterreader_released()
{
    admin_alterreader* alterreader=new admin_alterreader;
    alterreader->setId(this->id);
    this->close();
    alterreader->show();
}

void admin_infoborrow::on_pb_queryself_released()
{
    admin_queryself* queryself=new admin_queryself;
    queryself->setId(this->id);
    queryself->queryself();
    this->close();
    queryself->show();
}

void admin_infoborrow::on_pb_alterpwd_released()
{
    admin_alterpwd* alterpwd=new admin_alterpwd;
    alterpwd->setId(this->id);
    this->close();
    alterpwd->show();
}

void admin_infoborrow::on_pb_bookimport_released()
{
    admin_importbook* import=new admin_importbook;
    import->show();
}
