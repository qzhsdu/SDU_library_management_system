#ifndef ADMIN_ALTERBOOK_H
#define ADMIN_ALTERBOOK_H

#include <QWidget>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QTableView>
#include <QString>

namespace Ui {
class admin_alterbook;
}

class admin_alterbook : public QWidget
{
    Q_OBJECT
private:

    QSqlTableModel* model;

    QTableView* view;

    QString id;

public:
    explicit admin_alterbook(QWidget *parent = 0);
    void setId(QString theId){this->id=theId;}
    ~admin_alterbook();

    bool addbook();

    bool querybook();

    bool deletebook();

    bool modelquery();

public slots:
    void on_pb_alterreader_released();

    void on_pb_querybook_released();

    void on_pb_addbook_released();

    void on_pb_deletebook_released();

private slots:
    void on_pb_queryself_released();

    void on_pb_alterpwd_released();

    void on_pb_infoborrow_released();

    void on_pb_alterbook_released();

    void on_pb_bookimport_released();

private:
    Ui::admin_alterbook *ui;
};

#endif // ADMIN_ALTERBOOK_H
