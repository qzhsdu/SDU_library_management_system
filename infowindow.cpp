#include "infowindow.h"
#include "ui_infowindow.h"
#include "admin_alterbook.h"
#include "reader_queryself.h"
#include "reader_querybook.h"
#include "reader_alterpwd.h"
#include "reader_queryborrow.h"

infoWindow::infoWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::infoWindow)
{
    ui->setupUi(this);
    setWindowTitle("山东大学图书管理系统——读者端");
}


infoWindow::~infoWindow()
{
    delete ui;
}

void infoWindow::on_pb_querybook_released()
{

    reader_querybook* readerquerybook=new reader_querybook;
    readerquerybook->setid(this->id);
    this->close();
    readerquerybook->show();

}

void infoWindow::on_pb_queryborrow_released()
{
    reader_queryborrow* queryborrow=new reader_queryborrow;
    this->close();
    queryborrow->setId(this->id);
    queryborrow->queryborrow();
    queryborrow->show();
}

void infoWindow::on_pb_querymyself_released()
{
    reader_queryself* query_self=new reader_queryself;
    this->close();
    query_self->setid(this->id);
    query_self->query_myself();
    query_self->show();
}

void infoWindow::on_pb_alterpwd_released()
{
    reader_alterpwd* alterpwd=new reader_alterpwd;
    alterpwd->setid(this->id);
    this->close();
    alterpwd->show();
}
