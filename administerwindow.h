#ifndef ADMINISTERWINDOW_H
#define ADMINISTERWINDOW_H

#include <QWidget>
#include <QString>

namespace Ui {
class administerWindow;
}

class administerWindow : public QWidget
{
    Q_OBJECT

public:
    explicit administerWindow(QWidget *parent = 0);
    void setId(QString theId){this->id=theId;}
    ~administerWindow();

private slots:
    void on_pb_alterreader_released();

    void on_pb_alterbook_released();

    void on_pb_alterpwd_pressed();

    void on_pb_queryself_released();

    void on_pb_infoborrow_released();

    void on_pb_bookimport_released();

private:
    Ui::administerWindow *ui;
    QString id;
};

#endif // ADMINISTERWINDOW_H
