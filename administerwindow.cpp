#include "administerwindow.h"
#include "ui_administerwindow.h"
#include "admin_alterreader.h"
#include "admin_alterbook.h"
#include "admin_alterpwd.h"
#include "admin_queryself.h"
#include "admin_infoborrow.h"
#include "admin_importbook.h"

administerWindow::administerWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::administerWindow)
{
    ui->setupUi(this);
    setWindowTitle("山东大学图书管理系统——管理员");
}

administerWindow::~administerWindow()
{
    delete ui;
}

void administerWindow::on_pb_alterreader_released()
{
    admin_alterreader* alterreader=new admin_alterreader;
    alterreader->setId(this->id);
    this->close();
    alterreader->show();
}

void administerWindow::on_pb_alterbook_released()
{
    admin_alterbook* alterbook=new admin_alterbook;
    alterbook->setId(this->id);
    this->close();
    alterbook->show();
}

void administerWindow::on_pb_alterpwd_pressed()
{
    admin_alterpwd* alterpwd=new admin_alterpwd;
    alterpwd->setId(this->id);
    this->close();
    alterpwd->show();
}

void administerWindow::on_pb_queryself_released()
{
    admin_queryself* queryself=new admin_queryself;
    queryself->setId(this->id);
    queryself->queryself();
    this->close();
    queryself->show();
}

void administerWindow::on_pb_infoborrow_released()
{
    admin_infoborrow* queryborrow=new admin_infoborrow;
    queryborrow->setId(this->id);
    this->close();
    queryborrow->show();
}

void administerWindow::on_pb_bookimport_released()
{
    admin_importbook* import=new admin_importbook;
    import->show();
}
