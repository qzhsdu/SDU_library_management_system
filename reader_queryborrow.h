#ifndef READER_QUERYBORROW_H
#define READER_QUERYBORROW_H

#include <QWidget>
#include <QString>
#include <QSqlTableModel>
#include <QTableView>

namespace Ui {
class reader_queryborrow;
}

class reader_queryborrow : public QWidget
{
    Q_OBJECT

public:
    explicit reader_queryborrow(QWidget *parent = 0);
    void setId(QString theId){this->id=theId;}
    void queryborrow();
    ~reader_queryborrow();

private slots:
    void on_pb_querybook_released();

    void on_pb_querymyself_released();

    void on_pb_alterpwd_released();

    void on_pb_querynotreturn_released();

    void on_pb_returnbook_released();

    void on_pb_returnbook_2_released();

    void on_pb_renewbook_released();

private:
    Ui::reader_queryborrow *ui;

    QSqlTableModel* model;

    QString id;
};

#endif // READER_QUERYBORROW_H
