#ifndef INFOWINDOW_H
#define INFOWINDOW_H

#include <QWidget>
#include <QSqlTableModel>
#include <QTableView>
#include <QString>

namespace Ui {
class infoWindow;
}

class infoWindow : public QWidget
{
    Q_OBJECT

private:
    QString id;

public:
    explicit infoWindow(QWidget *parent = 0);
    void setid(QString theid){id=theid;}

    ~infoWindow();

private slots:
    void on_pb_querybook_released();

    void on_pb_queryborrow_released();

    void on_pb_querymyself_released();

    void on_pb_alterpwd_released();

private:
    Ui::infoWindow *ui;
};

#endif // INFOWINDOW_H
