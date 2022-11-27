#ifndef ADMIN_IMPORTBOOK_H
#define ADMIN_IMPORTBOOK_H

#include <QWidget>

namespace Ui {
class admin_importbook;
}

class admin_importbook : public QWidget
{
    Q_OBJECT

public:
    explicit admin_importbook(QWidget *parent = 0);
    ~admin_importbook();
    bool importbook();

private slots:
    void on_pushButton_released();

private:
    Ui::admin_importbook *ui;
};

#endif // ADMIN_IMPORTBOOK_H
