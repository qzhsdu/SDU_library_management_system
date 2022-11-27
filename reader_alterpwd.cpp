#include "reader_alterpwd.h"
#include "reader_querybook.h"
#include "reader_queryself.h"
#include "reader_queryborrow.h"
#include "ui_reader_alterpwd.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QString>

reader_alterpwd::reader_alterpwd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::reader_alterpwd)
{
    ui->setupUi(this);    
    setWindowTitle("山东大学图书管理系统——读者端");
    ui->currentpwd->setEchoMode(QLineEdit::Password);
    ui->modefied_pwd->setEchoMode(QLineEdit::Password);
}

reader_alterpwd::~reader_alterpwd()
{
    delete ui;
}

void reader_alterpwd::alterpwd()
{
    QString currentpwd=ui->currentpwd->text();
    QString modefiedpwd=ui->modefied_pwd->text();
    if(currentpwd==""){
       QMessageBox::about(this,"提示","密码为空");
       return ;
    }
    else {
        QSqlQuery query;
        query.exec("update reader set password="+modefiedpwd+" where id="+this->id+" and password="+currentpwd+"");
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


//修改密码按钮的槽函数
//void reader_alterpwd::on_pb_alterpwd_2_released()
//{
//    alterpwd();
//}

//查询个人信息
void reader_alterpwd::on_pb_querymyself_2_released()
{
    reader_queryself* query_self=new reader_queryself;
    this->close();
    query_self->setid(this->id);
    query_self->query_myself();
    query_self->show();
}

//个人借阅
void reader_alterpwd::on_pb_queryborrow_2_released()
{
    reader_queryborrow* queryborrow=new reader_queryborrow;
    queryborrow->setId(this->id);
    queryborrow->queryborrow();
    this->close();
    queryborrow->show();
}

//图书借阅
void reader_alterpwd::on_pb_querybook_2_released()
{
    reader_querybook* querybook=new reader_querybook;
    querybook->setid(this->id);
    this->close();
    querybook->show();
}


void reader_alterpwd::on_pb_borrowsubmit_2_clicked()
{
    alterpwd();
}
