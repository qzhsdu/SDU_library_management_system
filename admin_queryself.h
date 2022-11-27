#ifndef ADMIN_QUERYSELF_H
#define ADMIN_QUERYSELF_H

#include <QWidget>
#include <QString>

namespace Ui {
class admin_queryself;
}

class admin_queryself : public QWidget
{
    Q_OBJECT

public:
    explicit admin_queryself(QWidget *parent = 0);
    void setId(QString theId){this->id=theId;}
    void queryself();
    ~admin_queryself();

private slots:
    void on_pb_alterbook_released();

    void on_pb_infoborrow_released();

    void on_pb_alterreader_released();

    void on_pb_alterpwd_released();

    void on_pb_bookimport_released();

private:
    Ui::admin_queryself *ui;
    QString id;
};

#endif // ADMIN_QUERYSELF_H
