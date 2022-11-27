/********************************************************************************
** Form generated from reading UI file 'admin_queryself.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_QUERYSELF_H
#define UI_ADMIN_QUERYSELF_H

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

class Ui_admin_queryself
{
public:
    QFrame *frame;
    QGraphicsView *Title;
    QFrame *line;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_1;
    QLineEdit *name;
    QLineEdit *lineEdit_2;
    QLineEdit *id;
    QLineEdit *lineEdit_4;
    QLineEdit *sex;
    QLineEdit *lineEdit_5;
    QLineEdit *intime;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pb_alterbook;
    QPushButton *pb_bookimport;
    QPushButton *pb_infoborrow;
    QPushButton *pb_alterreader;
    QPushButton *pb_queryself;
    QPushButton *pb_alterpwd;

    void setupUi(QWidget *admin_queryself)
    {
        if (admin_queryself->objectName().isEmpty())
            admin_queryself->setObjectName(QStringLiteral("admin_queryself"));
        admin_queryself->resize(1000, 800);
        frame = new QFrame(admin_queryself);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 1001, 1000));
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
        line = new QFrame(frame);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(240, 150, 20, 621));
        line->setStyleSheet(QStringLiteral("font: 75 9pt \"Adobe Devanagari\";"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(340, 200, 311, 491));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lineEdit_1 = new QLineEdit(frame_2);
        lineEdit_1->setObjectName(QStringLiteral("lineEdit_1"));
        lineEdit_1->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:none;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));

        verticalLayout_2->addWidget(lineEdit_1);

        name = new QLineEdit(frame_2);
        name->setObjectName(QStringLiteral("name"));
        name->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:1px solid #cccccc;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));

        verticalLayout_2->addWidget(name);

        lineEdit_2 = new QLineEdit(frame_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:none;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));

        verticalLayout_2->addWidget(lineEdit_2);

        id = new QLineEdit(frame_2);
        id->setObjectName(QStringLiteral("id"));
        id->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:1px solid #cccccc;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));

        verticalLayout_2->addWidget(id);

        lineEdit_4 = new QLineEdit(frame_2);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:none;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));

        verticalLayout_2->addWidget(lineEdit_4);

        sex = new QLineEdit(frame_2);
        sex->setObjectName(QStringLiteral("sex"));
        sex->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:1px solid #cccccc;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));

        verticalLayout_2->addWidget(sex);

        lineEdit_5 = new QLineEdit(frame_2);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:none;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));

        verticalLayout_2->addWidget(lineEdit_5);

        intime = new QLineEdit(frame_2);
        intime->setObjectName(QStringLiteral("intime"));
        intime->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:1px solid #cccccc;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));

        verticalLayout_2->addWidget(intime);

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


        retranslateUi(admin_queryself);

        QMetaObject::connectSlotsByName(admin_queryself);
    } // setupUi

    void retranslateUi(QWidget *admin_queryself)
    {
        admin_queryself->setWindowTitle(QApplication::translate("admin_queryself", "Form", Q_NULLPTR));
        lineEdit_1->setText(QApplication::translate("admin_queryself", "\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        name->setText(QString());
        lineEdit_2->setText(QApplication::translate("admin_queryself", "\345\267\245\345\217\267\357\274\232", Q_NULLPTR));
        lineEdit_4->setText(QApplication::translate("admin_queryself", "\346\200\247\345\210\253\357\274\232", Q_NULLPTR));
        lineEdit_5->setText(QApplication::translate("admin_queryself", "\345\205\245\350\201\214\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        pb_alterbook->setText(QApplication::translate("admin_queryself", "\345\233\276\344\271\246\344\277\241\346\201\257\345\217\230\346\233\264", Q_NULLPTR));
        pb_bookimport->setText(QApplication::translate("admin_queryself", "\345\233\276\344\271\246\344\270\200\351\224\256\345\257\274\345\205\245", Q_NULLPTR));
        pb_infoborrow->setText(QApplication::translate("admin_queryself", "\345\200\237\351\230\205\350\256\260\345\275\225\346\237\245\350\257\242", Q_NULLPTR));
        pb_alterreader->setText(QApplication::translate("admin_queryself", "\350\257\273\350\200\205\344\277\241\346\201\257\345\217\230\346\233\264", Q_NULLPTR));
        pb_queryself->setText(QApplication::translate("admin_queryself", "\346\237\245\350\257\242\344\270\252\344\272\272\344\277\241\346\201\257", Q_NULLPTR));
        pb_alterpwd->setText(QApplication::translate("admin_queryself", "\344\277\256\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class admin_queryself: public Ui_admin_queryself {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_QUERYSELF_H
