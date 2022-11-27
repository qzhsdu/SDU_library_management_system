#ifndef READER_QUERYBOOK_H
#define READER_QUERYBOOK_H

#include <QWidget>
#include <QSqlTableModel>
#include <QTableView>
#include<QString>

namespace Ui {
class reader_querybook;
}

class reader_querybook : public QWidget
{
    Q_OBJECT
private:
    QSqlTableModel* model;

    QTableView* view;

    QString id;


public:
    explicit reader_querybook(QWidget *parent = 0);
    void setid(QString theid){id=theid;}
    ~reader_querybook();
    bool modelquery();
    bool querybook();
    bool querystorage();
    bool addborrowrecord();

private slots:
    void on_pb_querysubmit_released();

    void on_pb_borrowsubmit_released();

    void on_pb_querystorage_released();

    void on_pb_querymyself_released();

    void on_pb_alterpwd_released();

    void on_pb_queryborrow_released();

private:
    Ui::reader_querybook *ui;
};

#endif // READER_QUERYBOOK_H
