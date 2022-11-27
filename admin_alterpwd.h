#ifndef ADMIN_ALTERPWD_H
#define ADMIN_ALTERPWD_H

#include <QWidget>
#include <QString>

namespace Ui {
class admin_alterpwd;
}

class admin_alterpwd : public QWidget
{
    Q_OBJECT

public:
    explicit admin_alterpwd(QWidget *parent = 0);
    void setId(QString theId){this->id=theId;}
    void alterpwd();
    ~admin_alterpwd();

private slots:
   // void on_pb_submit_released();

    void on_pb_alterbook_released();

    void on_pb_bookimport_released();

    void on_pb_infoborrow_released();

    void on_pb_alterreader_released();

    void on_pb_queryself_released();

    //void on_pb_alterpwd_released();

    void on_pb_borrowsubmit_2_released();

   // void on_pb_borrowsubmit_2_toggled(bool checked);

   // void on_pb_borrowsubmit_2_pressed();

private:
    Ui::admin_alterpwd *ui;
    QString id;
};

#endif // ADMIN_ALTERPWD_H
