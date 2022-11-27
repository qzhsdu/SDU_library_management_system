#ifndef READER_QUERYSELF_H
#define READER_QUERYSELF_H

#include <QWidget>
#include <QString>

namespace Ui {
class reader_queryself;
}

class reader_queryself : public QWidget
{
    Q_OBJECT

public:
    explicit reader_queryself(QWidget *parent = 0);
    void setid(QString theid){id=theid;}
    ~reader_queryself();
    void query_myself();

private slots:
    void on_pb_alterpwd_released();

    void on_pb_querybook_released();

    void on_pb_queryborrow_released();

    void on_pb_querybook_pressed();

private:
    Ui::reader_queryself *ui;
    QString id;

};

#endif // READER_QUERYSELF_H
