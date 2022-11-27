#ifndef ADMIN_INFOBORROW_H
#define ADMIN_INFOBORROW_H

#include <QWidget>
#include <QString>
#include <QSqlTableModel>
#include <QTableView>

namespace Ui {
class admin_infoborrow;
}

class admin_infoborrow : public QWidget
{
    Q_OBJECT

public:
    explicit admin_infoborrow(QWidget *parent = 0);
    void setId(QString theId){this->id=theId;}
    bool queryborrow();
    bool modelquery();
    ~admin_infoborrow();

private slots:
    void on_pb_queryborrow_clicked();

    void on_pb_addborrow_clicked();

    void on_pb_alterduebook_released();

    void on_pb_recordmissing_released();

    void on_pb_alterbook_released();

    void on_pb_alterreader_released();

    void on_pb_queryself_released();

    void on_pb_alterpwd_released();

    void on_pb_bookimport_released();

    //void on_pb_addborrow_pressed();

private:
    Ui::admin_infoborrow *ui;
    QString id;

    QSqlTableModel* model;

    QTableView* view;
};

#endif // ADMIN_INFOBORROW_H
