#include "reader_queryself.h"
#include "ui_reader_queryself.h"
#include "reader_alterpwd.h"
#include "reader_querybook.h"
#include "reader_queryborrow.h"
#include <QSqlquery>

reader_queryself::reader_queryself(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::reader_queryself)
{
    ui->setupUi(this);
    setWindowTitle("山东大学图书管理系统——读者端");
}

reader_queryself::~reader_queryself()
{
    delete ui;
}

void  reader_queryself::query_myself()
{
    QString id,name,sex,major,intime,outtime,fine;

    QSqlQuery query;
    query.exec("select * from reader where id="+this->id+"");
    query.first();
    id=query.value(0).toString();name=query.value(1).toString();
    major=query.value(3).toString();intime=query.value(4).toString();
    outtime=query.value(5).toString();fine=query.value(6).toString();
    if(query.value(2)==0) sex="女";
    else sex="男";
    query.exec("select sum(fine) from borrow where id='"+this->id+"'");
    query.next();
    fine=query.value(0).toString();
    query.exec("update reader set totalfine="+fine+" where id='"+this->id+"'");
    ui->id->setText(id);            ui->id->setReadOnly(true);
    ui->name->setText(name);        ui->name->setReadOnly(true);
    ui->sex->setText(sex);          ui->sex->setReadOnly(true);
    ui->major->setText(major);      ui->major->setReadOnly(true);
    ui->fine->setText(fine);        ui->fine->setReadOnly(true);
    ui->intime->setText(intime);    ui->intime->setReadOnly(true);
    ui->outtime->setText(outtime);  ui->outtime->setReadOnly(true);
    return;
}

void reader_queryself::on_pb_alterpwd_released()
{
    reader_alterpwd* alterpwd=new reader_alterpwd;
    alterpwd->setid(this->id);
    this->close();
    alterpwd->show();
}

void reader_queryself::on_pb_querybook_released()
{
    reader_querybook* querybook=new reader_querybook;
    querybook->setid(this->id);
    this->close();
    querybook->show();
}

void reader_queryself::on_pb_queryborrow_released()
{
    reader_queryborrow* queryborrow=new reader_queryborrow;
    queryborrow->setId(this->id);
    queryborrow->queryborrow();
    this->close();
    queryborrow->show();
}
