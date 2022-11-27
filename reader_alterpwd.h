#ifndef READER_ALTERPWD_H
#define READER_ALTERPWD_H

#include <QWidget>
#include <QString>

namespace Ui {
class reader_alterpwd;
}

class reader_alterpwd : public QWidget
{
    Q_OBJECT

public:
    explicit reader_alterpwd(QWidget *parent = 0);
    void setid(QString theId){this->id=theId;}
    void alterpwd();
    ~reader_alterpwd();

private slots:
    void on_pb_borrowsubmit_2_released();

    void on_pb_alterpwd_2_released();

    void on_pb_querymyself_2_released();

    void on_pb_queryborrow_2_released();

    void on_pb_querybook_2_released();

    void on_pb_borrowsubmit_2_clicked();

private:
    Ui::reader_alterpwd *ui;
    QString id;
};

#endif // READER_ALTERPWD_H
