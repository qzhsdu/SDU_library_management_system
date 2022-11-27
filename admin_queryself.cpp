#include "admin_queryself.h"
#include "admin_alterreader.h"
#include "admin_alterbook.h"
#include "admin_alterpwd.h"
#include "admin_queryself.h"
#include "admin_infoborrow.h"
#include "admin_importbook.h"

#include "ui_admin_queryself.h"
#include <QSqlQuery>

admin_queryself::admin_queryself(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::admin_queryself)
{
    ui->setupUi(this);
    setWindowTitle("山东大学图书管理系统——管理员");
}

admin_queryself::~admin_queryself()
{
    delete ui;
}

void admin_queryself:: queryself()
{
    QString id,name,sex,intime;

    QSqlQuery query;
    query.exec("select * from administer where id="+this->id+"");
    query.first();
    id=query.value(0).toString();name=query.value(1).toString();
    intime=query.value(3).toString();
    if(query.value(2)==0) sex="女";
    else sex="男";

    ui->id->setText(id);            ui->id->setReadOnly(true);
    ui->name->setText(name);        ui->name->setReadOnly(true);
    ui->sex->setText(sex);          ui->sex->setReadOnly(true);
    ui->intime->setText(intime);    ui->intime->setReadOnly(true);
    return;
}


void admin_queryself::on_pb_infoborrow_released()
{
    admin_infoborrow* queryborrow=new admin_infoborrow;
    queryborrow->setId(this->id);
    this->close();
    queryborrow->show();
}

void admin_queryself::on_pb_alterreader_released()
{
    admin_alterreader* alterreader=new admin_alterreader;
    alterreader->setId(this->id);
    this->close();
    alterreader->show();
}


void admin_queryself::on_pb_alterbook_released()
{
    admin_alterbook* alterbook=new admin_alterbook;
    alterbook->setId(this->id);
    this->close();
    alterbook->show();
}

void admin_queryself::on_pb_alterpwd_released()
{
    admin_alterpwd* alterpwd=new admin_alterpwd;
    alterpwd->setId(this->id);
    this->close();
    alterpwd->show();
}





void admin_queryself::on_pb_bookimport_released()
{
    admin_importbook* import=new admin_importbook;
    import->show();
}
