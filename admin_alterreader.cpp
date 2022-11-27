#include "admin_alterreader.h"
#include "admin_alterbook.h"
#include "admin_alterpwd.h"
#include "admin_queryself.h"
#include "admin_infoborrow.h"
#include "admin_importbook.h"

#include "ui_admin_alterreader.h"
#include <QSqlQuery>
#include <QString>
#include <QMessageBox>
#include <QSqlQueryModel>
#include <QDebug>
#include <QSqlTableModel>
#include <QSqlError>
#include <QTableView>

admin_alterreader::admin_alterreader(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::admin_alterreader)
{
    ui->setupUi(this);
    setWindowTitle("山东大学图书管理系统——管理员");
    //加一个空格，方便模糊查询
    ui->major->insertItem(0,"");
    //把下拉列表填充学院
    QSqlQuery query;
    query.exec("select * from major");
    while(query.next()){
        ui->major->insertItem(0,query.value("dname").toString());
    }
    //设置只能打一个勾，默认“男”
    ui->sex_man->setChecked(true);
    if(ui->sex_woman->isChecked()){
        ui->sex_man->setChecked(false);
    }

    //设置Qtablemodel
    model = new QSqlTableModel(this);
    model->setTable("reader");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();
    //不显示密码栏 第八列
    model->removeColumn(7);
    //设置Qtableview
    view=new QTableView;
    view->setModel(model);
    view->setFixedSize(800,800);
    view->setColumnWidth(3,160);

}

//采用query
bool admin_alterreader::addreader(){
    QString id,name,sex,major,intime,outtime,insertsql;
    id=ui->id->text();
    name=ui->name->text();
    major=ui->major->currentText();
    intime=ui->intime->text();
    outtime=ui->outtime->text();
    //如果主键id 没有填写，或者不足12位 就禁止插入
    if(id==""){
        QMessageBox::about(this,"提示","学号为空");
        return false;
    }
    if(id.length()!=12){
        QMessageBox::about(this,"提示","学号长度不为12位");
        return false;
    }
    //如果填写了，就允许插入
    else{

        //获取性别
        if(ui->sex_man->isChecked())
            sex="1";
        else
            sex="0";


        //创建SQL语句，采用字符串连接
        //特别注意，转换过来的字符串还需要嵌套单引号
       insertsql="insert into reader(id,name,sex,major,intime,outtime,password)"
                 "values("+id+",'"+name+"',"+sex+",'"+major+"','"+intime+"','"+outtime+"',""NULL"")";
       //qDebug()<<insertsql.toLatin1();
       //发送SQL
       QSqlQuery query;
       if(query.exec(insertsql)){
           QMessageBox::about(this,"提示","添加成功");
           return true;
       }
       else{
           QMessageBox::about(this,"提示","添加失败,可能存在重复记录");
           return false;
       }

    }
}


//显示查询结果，便于代码重用
bool admin_alterreader::modelquery()
{
    if(model->rowCount()==0){
        QMessageBox::about(this,"提示","查无此人！");
        return false;
    }
    else{
        model->removeColumn(6);
        model->select();
        view->setModel(model);
        view->show();
        return true;
    }
}



//支持学号，姓名，学院 查询
bool admin_alterreader::queryreader()
{
    QString id,name,major;
    id=ui->id->text();
    name=ui->name->text();
    major=ui->major->currentText();
    //学号，姓名，学院 三者均为空，提示，返回
    if(id==""&&name==""&&major==""){
        QMessageBox::about(this,"提示","您查询到了所有的记录，请慎重操作");
        model->setTable("reader");
        model->removeColumn(7);
        model->select();
        view->show();
        return true;
    }
    //学号+姓名+学院
    else if(id!=""&&name!=""&&major!=""){
        model->setFilter(QString("id='%1' and name='%2' and major='%3'").arg(id).arg(name).arg(major));
        return modelquery();
    }
    //学号+学院
    else if(id!=""&&major!=""){
        model->setFilter(QString("id='%1' and major='%2'").arg(id).arg(major));
        return modelquery();
    }
    //姓名+学院
    else if(name!=""&&major!=""){
        model->setFilter(QString("name='%1' and major='%2'").arg(name).arg(major));
        modelquery();
    }
    //学号+姓名
    else if(id!=""&&name!=""){
        model->setFilter(QString("id='%1' and name='%2'").arg(id).arg(name));
        return modelquery();
    }
    //学号查询
    else if(id!=""){
        model->setFilter(QString("id='%1'").arg(id));
        return modelquery();
    }
    //姓名查询
    else if(name!=""){
        model->setFilter(QString("name='%1'").arg(name));
        modelquery();
    }
    //学院查询
    else if(major!=""){
        model->setFilter(QString("major='%1'").arg(major));
        return modelquery();
    }
    return false;
}


bool admin_alterreader::deletereader()
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
    if(queryreader()==false){
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
            return true;
        }
        return false;
    }

}


admin_alterreader::~admin_alterreader()
{
    delete ui;
}

/*************槽函数的实现************/
void admin_alterreader::on_pb_addreader_released()
{
    addreader();
}

void admin_alterreader::on_pb_queryreader_released()
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
    queryreader();
}

void admin_alterreader::on_pb_deletereader_released()
{
    deletereader();
}

void admin_alterreader::on_pb_alterbook_released()
{
    admin_alterbook* alterbook=new admin_alterbook;
    alterbook->setId(this->id);
    this->close();
    alterbook->show();
}

void admin_alterreader::on_pb_infoborrow_released()
{
    admin_infoborrow* queryborrow=new admin_infoborrow;
    queryborrow->setId(this->id);
    this->close();
    queryborrow->show();
}

void admin_alterreader::on_pb_alterpwd_released()
{
    admin_alterpwd* alterpwd=new admin_alterpwd;
    alterpwd->setId(this->id);
    this->close();
    alterpwd->show();
}

void admin_alterreader::on_pb_queryself_released()
{
    admin_queryself* queryself=new admin_queryself;
    queryself->setId(this->id);
    queryself->queryself();
    this->close();
    queryself->show();
}

void admin_alterreader::on_pb_bookimport_released()
{
    admin_importbook* import=new admin_importbook;
    import->show();
}
