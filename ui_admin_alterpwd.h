/********************************************************************************
** Form generated from reading UI file 'admin_alterpwd.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_ALTERPWD_H
#define UI_ADMIN_ALTERPWD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin_alterpwd
{
public:
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
    QFrame *frame_3;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_8;
    QLineEdit *currentpwd;
    QLineEdit *modefied_pwd;
    QPushButton *pb_borrowsubmit_2;

    void setupUi(QWidget *admin_alterpwd)
    {
        if (admin_alterpwd->objectName().isEmpty())
            admin_alterpwd->setObjectName(QStringLiteral("admin_alterpwd"));
        admin_alterpwd->resize(1000, 800);
        frame = new QFrame(admin_alterpwd);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 978, 1000));
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
        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(260, 210, 668, 532));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        lineEdit_5 = new QLineEdit(frame_3);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(60, 100, 81, 31));
        lineEdit_5->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:none;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        lineEdit_8 = new QLineEdit(frame_3);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(60, 160, 81, 31));
        lineEdit_8->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:none;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        currentpwd = new QLineEdit(frame_3);
        currentpwd->setObjectName(QStringLiteral("currentpwd"));
        currentpwd->setGeometry(QRect(170, 100, 271, 31));
        currentpwd->setStyleSheet(QString::fromUtf8("border:1px solid #cccccc;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        modefied_pwd = new QLineEdit(frame_3);
        modefied_pwd->setObjectName(QStringLiteral("modefied_pwd"));
        modefied_pwd->setGeometry(QRect(170, 160, 271, 31));
        modefied_pwd->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:1px solid #cccccc;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        pb_borrowsubmit_2 = new QPushButton(frame_3);
        pb_borrowsubmit_2->setObjectName(QStringLiteral("pb_borrowsubmit_2"));
        pb_borrowsubmit_2->setGeometry(QRect(140, 270, 261, 51));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pb_borrowsubmit_2->sizePolicy().hasHeightForWidth());
        pb_borrowsubmit_2->setSizePolicy(sizePolicy1);
        pb_borrowsubmit_2->setStyleSheet(QString::fromUtf8("\n"
"font-size:20px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"padding-top:5;\n"
"padding-bottom:5;"));

        retranslateUi(admin_alterpwd);

        QMetaObject::connectSlotsByName(admin_alterpwd);
    } // setupUi

    void retranslateUi(QWidget *admin_alterpwd)
    {
        admin_alterpwd->setWindowTitle(QApplication::translate("admin_alterpwd", "Form", Q_NULLPTR));
        pb_alterbook->setText(QApplication::translate("admin_alterpwd", "\345\233\276\344\271\246\344\277\241\346\201\257\345\217\230\346\233\264", Q_NULLPTR));
        pb_bookimport->setText(QApplication::translate("admin_alterpwd", "\345\233\276\344\271\246\344\270\200\351\224\256\345\257\274\345\205\245", Q_NULLPTR));
        pb_infoborrow->setText(QApplication::translate("admin_alterpwd", "\345\200\237\351\230\205\350\256\260\345\275\225\346\237\245\350\257\242", Q_NULLPTR));
        pb_alterreader->setText(QApplication::translate("admin_alterpwd", "\350\257\273\350\200\205\344\277\241\346\201\257\345\217\230\346\233\264", Q_NULLPTR));
        pb_queryself->setText(QApplication::translate("admin_alterpwd", "\346\237\245\350\257\242\344\270\252\344\272\272\344\277\241\346\201\257", Q_NULLPTR));
        pb_alterpwd->setText(QApplication::translate("admin_alterpwd", "\344\277\256\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
        lineEdit_5->setText(QApplication::translate("admin_alterpwd", "\345\275\223\345\211\215\345\257\206\347\240\201", Q_NULLPTR));
        lineEdit_8->setText(QApplication::translate("admin_alterpwd", "\344\277\256\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
        currentpwd->setText(QString());
        pb_borrowsubmit_2->setText(QApplication::translate("admin_alterpwd", "\344\277\256\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class admin_alterpwd: public Ui_admin_alterpwd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_ALTERPWD_H
