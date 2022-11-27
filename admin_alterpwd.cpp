#include "admin_alterpwd.h"
#include "ui_admin_alterpwd.h"
#include "admin_queryself.h"
#include "admin_alterreader.h"
#include "admin_alterbook.h"
#include "admin_infoborrow.h"
#include "admin_importbook.h"

#include <QMessageBox>
#include <QSqlQuery>

admin_alterpwd::admin_alterpwd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::admin_alterpwd)
{
    ui->setupUi(this);
    setWindowTitle("山东大学图书管理系统——管理员");
}

admin_alterpwd::~admin_alterpwd()
{
    delete ui;
}

void admin_alterpwd::alterpwd()
{
    QString currentpwd=ui->currentpwd->text();
    QString modefiedpwd=ui->modefied_pwd->text();
    if(currentpwd==""){
       QMessageBox::about(this,"提示","密码为空");
       return ;
    }
    else {
        QSqlQuery query;
        query.exec("update administer set password="+modefiedpwd+" where id="+this->id+" and password="+currentpwd+"");
        if(query.numRowsAffected()==1)
        {
            QMessageBox::about(this,"提示","修改成功！请重新登录！");
            this->close();
            return;
        }
        else
        {
            QMessageBox::about(this,"提示","密码错误,修改失败");
            return;
        }
    }
}


void admin_alterpwd::on_pb_infoborrow_released()
{
    admin_infoborrow* queryborrow=new admin_infoborrow;
    queryborrow->setId(this->id);
    this->close();
    queryborrow->show();
}


void admin_alterpwd::on_pb_alterreader_released()
{
    admin_alterreader* alterreader=new admin_alterreader;
    alterreader->setId(this->id);
    this->close();
    alterreader->show();
}


void admin_alterpwd::on_pb_alterbook_released()
{
    admin_alterbook* alterbook=new admin_alterbook;
    alterbook->setId(this->id);
    this->close();
    alterbook->show();
}


void admin_alterpwd::on_pb_queryself_released()
{
    admin_queryself* queryself=new admin_queryself;
    queryself->setId(this->id);
    queryself->queryself();
    this->close();
    queryself->show();
}

void admin_alterpwd::on_pb_borrowsubmit_2_released()
{
    alterpwd();
}



void admin_alterpwd::on_pb_bookimport_released()
{
    admin_importbook* import=new admin_importbook;
    import->show();
}
