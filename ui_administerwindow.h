/********************************************************************************
** Form generated from reading UI file 'administerwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINISTERWINDOW_H
#define UI_ADMINISTERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_administerWindow
{
public:
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QGraphicsView *Title;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pb_alterbook;
    QPushButton *pb_bookimport;
    QPushButton *pb_infoborrow;
    QPushButton *pb_alterreader;
    QPushButton *pb_queryself;
    QPushButton *pb_alterpwd;
    QFrame *line;

    void setupUi(QWidget *administerWindow)
    {
        if (administerWindow->objectName().isEmpty())
            administerWindow->setObjectName(QStringLiteral("administerWindow"));
        administerWindow->resize(1000, 800);
        administerWindow->setMinimumSize(QSize(1000, 800));
        administerWindow->setMaximumSize(QSize(1000, 800));
        administerWindow->setBaseSize(QSize(0, 100));
        administerWindow->setAutoFillBackground(false);
        horizontalLayout = new QHBoxLayout(administerWindow);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        frame = new QFrame(administerWindow);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setMinimumSize(QSize(800, 1000));
        frame->setMaximumSize(QSize(100000, 100000));
        frame->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        Title = new QGraphicsView(frame);
        Title->setObjectName(QStringLiteral("Title"));
        Title->setGeometry(QRect(0, 0, 1000, 130));
        Title->setStyleSheet(QString::fromUtf8("background-image: url(:/image/\346\215\225\350\216\267.PNG);"));
        verticalLayoutWidget = new QWidget(frame);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 150, 202, 599));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 20, 0, 0);
        pb_alterbook = new QPushButton(verticalLayoutWidget);
        pb_alterbook->setObjectName(QStringLiteral("pb_alterbook"));
        pb_alterbook->setMinimumSize(QSize(200, 80));
        pb_alterbook->setMaximumSize(QSize(200, 80));
        pb_alterbook->setStyleSheet(QLatin1String("\n"
"font: 16pt \"Adobe Devanagari\";\n"
""));

        verticalLayout->addWidget(pb_alterbook);

        pb_bookimport = new QPushButton(verticalLayoutWidget);
        pb_bookimport->setObjectName(QStringLiteral("pb_bookimport"));
        pb_bookimport->setMinimumSize(QSize(200, 80));
        pb_bookimport->setMaximumSize(QSize(200, 80));
        pb_bookimport->setStyleSheet(QStringLiteral("font: 16pt \"Adobe Devanagari\";"));

        verticalLayout->addWidget(pb_bookimport);

        pb_infoborrow = new QPushButton(verticalLayoutWidget);
        pb_infoborrow->setObjectName(QStringLiteral("pb_infoborrow"));
        pb_infoborrow->setMinimumSize(QSize(200, 80));
        pb_infoborrow->setMaximumSize(QSize(200, 80));
        pb_infoborrow->setStyleSheet(QStringLiteral("font: 16pt \"Adobe Devanagari\";"));

        verticalLayout->addWidget(pb_infoborrow);

        pb_alterreader = new QPushButton(verticalLayoutWidget);
        pb_alterreader->setObjectName(QStringLiteral("pb_alterreader"));
        pb_alterreader->setMinimumSize(QSize(200, 80));
        pb_alterreader->setMaximumSize(QSize(200, 80));
        pb_alterreader->setStyleSheet(QStringLiteral("font: 16pt \"Adobe Devanagari\";"));

        verticalLayout->addWidget(pb_alterreader);

        pb_queryself = new QPushButton(verticalLayoutWidget);
        pb_queryself->setObjectName(QStringLiteral("pb_queryself"));
        pb_queryself->setMinimumSize(QSize(200, 80));
        pb_queryself->setMaximumSize(QSize(200, 80));
        pb_queryself->setStyleSheet(QStringLiteral("font: 16pt \"Adobe Devanagari\";"));

        verticalLayout->addWidget(pb_queryself);

        pb_alterpwd = new QPushButton(verticalLayoutWidget);
        pb_alterpwd->setObjectName(QStringLiteral("pb_alterpwd"));
        pb_alterpwd->setMinimumSize(QSize(200, 80));
        pb_alterpwd->setMaximumSize(QSize(200, 80));
        pb_alterpwd->setStyleSheet(QStringLiteral("font: 16pt \"Adobe Devanagari\";"));

        verticalLayout->addWidget(pb_alterpwd);

        line = new QFrame(frame);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(240, 150, 20, 621));
        line->setStyleSheet(QStringLiteral("font: 75 9pt \"Adobe Devanagari\";"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(frame);


        retranslateUi(administerWindow);

        QMetaObject::connectSlotsByName(administerWindow);
    } // setupUi

    void retranslateUi(QWidget *administerWindow)
    {
        administerWindow->setWindowTitle(QApplication::translate("administerWindow", "Form", Q_NULLPTR));
        pb_alterbook->setText(QApplication::translate("administerWindow", "\345\233\276\344\271\246\344\277\241\346\201\257\345\217\230\346\233\264", Q_NULLPTR));
        pb_bookimport->setText(QApplication::translate("administerWindow", "\345\233\276\344\271\246\344\270\200\351\224\256\345\257\274\345\205\245", Q_NULLPTR));
        pb_infoborrow->setText(QApplication::translate("administerWindow", "\345\200\237\351\230\205\350\256\260\345\275\225\346\237\245\350\257\242", Q_NULLPTR));
        pb_alterreader->setText(QApplication::translate("administerWindow", "\350\257\273\350\200\205\344\277\241\346\201\257\345\217\230\346\233\264", Q_NULLPTR));
        pb_queryself->setText(QApplication::translate("administerWindow", "\346\237\245\350\257\242\344\270\252\344\272\272\344\277\241\346\201\257", Q_NULLPTR));
        pb_alterpwd->setText(QApplication::translate("administerWindow", "\344\277\256\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class administerWindow: public Ui_administerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINISTERWINDOW_H
