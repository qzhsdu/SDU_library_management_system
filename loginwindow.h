#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QWidget>
#include <QString>

namespace Ui {
class loginWindow;
}

class loginWindow : public QWidget
{
    Q_OBJECT

public:
    explicit loginWindow(QWidget *parent = 0);
    loginWindow(bool thetype);
    ~loginWindow();

private:
    bool type;
    QString id;
    Ui::loginWindow *ui;
    bool login(bool type);

private slots:
    void on_pblogin_released();
};

#endif // LOGINWINDOW_H
