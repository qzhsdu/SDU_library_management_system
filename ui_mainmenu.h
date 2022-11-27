/********************************************************************************
** Form generated from reading UI file 'mainmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMENU_H
#define UI_MAINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainMenu
{
public:
    QWidget *centralWidget;
    QPushButton *readerlog;
    QPushButton *adminlog;
    QGraphicsView *graphicsView;
    QLabel *label;

    void setupUi(QMainWindow *MainMenu)
    {
        if (MainMenu->objectName().isEmpty())
            MainMenu->setObjectName(QStringLiteral("MainMenu"));
        MainMenu->resize(1000, 800);
        MainMenu->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(MainMenu);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        readerlog = new QPushButton(centralWidget);
        readerlog->setObjectName(QStringLiteral("readerlog"));
        readerlog->setGeometry(QRect(250, 530, 191, 51));
        readerlog->setStyleSheet(QStringLiteral("font: 14pt \"Adobe Devanagari\";"));
        adminlog = new QPushButton(centralWidget);
        adminlog->setObjectName(QStringLiteral("adminlog"));
        adminlog->setGeometry(QRect(640, 530, 181, 51));
        adminlog->setStyleSheet(QStringLiteral("font: 14pt \"Adobe Devanagari\";"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(-100, -50, 1111, 871));
        graphicsView->setLayoutDirection(Qt::LeftToRight);
        graphicsView->setAutoFillBackground(true);
        graphicsView->setStyleSheet(QLatin1String("background-image: url(:/image/cover.PNG);\n"
""));
        graphicsView->setInteractive(false);
        graphicsView->setResizeAnchor(QGraphicsView::NoAnchor);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(290, 110, 441, 61));
        label->setStyleSheet(QStringLiteral("font: 18pt \"Adobe Devanagari\";"));
        MainMenu->setCentralWidget(centralWidget);
        graphicsView->raise();
        readerlog->raise();
        adminlog->raise();
        label->raise();

        retranslateUi(MainMenu);

        QMetaObject::connectSlotsByName(MainMenu);
    } // setupUi

    void retranslateUi(QMainWindow *MainMenu)
    {
        MainMenu->setWindowTitle(QApplication::translate("MainMenu", "MainMenu", Q_NULLPTR));
        readerlog->setText(QApplication::translate("MainMenu", "\350\257\273\350\200\205\347\231\273\345\275\225", Q_NULLPTR));
        adminlog->setText(QApplication::translate("MainMenu", "\345\233\276\344\271\246\347\256\241\347\220\206\345\221\230\347\231\273\345\275\225", Q_NULLPTR));
        label->setText(QApplication::translate("MainMenu", "\346\254\242\350\277\216\344\275\277\347\224\250\345\261\261\344\270\234\345\244\247\345\255\246\345\233\276\344\271\246\347\256\241\347\220\206\347\263\273\347\273\237\357\274\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainMenu: public Ui_MainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H
