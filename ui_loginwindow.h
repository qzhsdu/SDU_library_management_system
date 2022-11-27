/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginWindow
{
public:
    QLineEdit *user;
    QLineEdit *pwd;
    QGraphicsView *graphicsView;
    QPushButton *pblogin;

    void setupUi(QWidget *loginWindow)
    {
        if (loginWindow->objectName().isEmpty())
            loginWindow->setObjectName(QStringLiteral("loginWindow"));
        loginWindow->resize(1738, 853);
        user = new QLineEdit(loginWindow);
        user->setObjectName(QStringLiteral("user"));
        user->setGeometry(QRect(1170, 260, 381, 41));
        pwd = new QLineEdit(loginWindow);
        pwd->setObjectName(QStringLiteral("pwd"));
        pwd->setGeometry(QRect(1170, 320, 381, 43));
        graphicsView = new QGraphicsView(loginWindow);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 1738, 855));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/image/login.PNG);"));
        pblogin = new QPushButton(loginWindow);
        pblogin->setObjectName(QStringLiteral("pblogin"));
        pblogin->setGeometry(QRect(1170, 410, 380, 52));
        pblogin->setStyleSheet(QStringLiteral("background-image: url(:/image/pblogin.PNG);"));
        graphicsView->raise();
        user->raise();
        pwd->raise();
        pblogin->raise();

        retranslateUi(loginWindow);

        QMetaObject::connectSlotsByName(loginWindow);
    } // setupUi

    void retranslateUi(QWidget *loginWindow)
    {
        loginWindow->setWindowTitle(QApplication::translate("loginWindow", "Form", Q_NULLPTR));
        user->setText(QString());
        pwd->setText(QString());
        pblogin->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class loginWindow: public Ui_loginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
