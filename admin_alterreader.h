#ifndef ADMIN_ALTERREADER_H
#define ADMIN_ALTERREADER_H

#include <QWidget>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QTableView>
#include <QString>

namespace Ui {
class admin_alterreader;
}

class admin_alterreader : public QWidget
{
    Q_OBJECT    

private:

    QSqlTableModel* model;

    QTableView* view;

    QString id;

public:
    explicit admin_alterreader(QWidget *parent = 0);

    void setId(QString theId){this->id=theId;}
    ~admin_alterreader();

    bool addreader();

    bool queryreader();

    bool deletereader();

    bool modelquery();




private slots:

    void on_pb_addreader_released();

    void on_pb_queryreader_released();

    void on_pb_deletereader_released();

    void on_pb_alterbook_released();

    void on_pb_infoborrow_released();

    void on_pb_queryself_released();

    void on_pb_alterpwd_released();

    void on_pb_bookimport_released();

private:
    Ui::admin_alterreader *ui;
};

#endif // ADMIN_ALTERREADER_H
