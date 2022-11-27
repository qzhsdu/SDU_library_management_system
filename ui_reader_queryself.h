/********************************************************************************
** Form generated from reading UI file 'reader_queryself.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READER_QUERYSELF_H
#define UI_READER_QUERYSELF_H

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

class Ui_reader_queryself
{
public:
    QFrame *frame;
    QGraphicsView *Title;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pb_querybook;
    QPushButton *pb_queryborrow;
    QPushButton *pb_querymyself;
    QPushButton *pb_alterpwd;
    QFrame *line;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_1;
    QLineEdit *name;
    QLineEdit *lineEdit_2;
    QLineEdit *id;
    QLineEdit *lineEdit_4;
    QLineEdit *sex;
    QLineEdit *lineEdit_3;
    QLineEdit *major;
    QLineEdit *lineEdit_7;
    QLineEdit *fine;
    QLineEdit *lineEdit_5;
    QLineEdit *intime;
    QLineEdit *lineEdit_6;
    QLineEdit *outtime;

    void setupUi(QWidget *reader_queryself)
    {
        if (reader_queryself->objectName().isEmpty())
            reader_queryself->setObjectName(QStringLiteral("reader_queryself"));
        reader_queryself->resize(1000, 800);
        frame = new QFrame(reader_queryself);
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
        verticalLayoutWidget = new QWidget(frame);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 150, 202, 599));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 20, 0, 0);
        pb_querybook = new QPushButton(verticalLayoutWidget);
        pb_querybook->setObjectName(QStringLiteral("pb_querybook"));
        pb_querybook->setMinimumSize(QSize(200, 80));
        pb_querybook->setMaximumSize(QSize(200, 80));
        pb_querybook->setStyleSheet(QLatin1String("\n"
"font: 16pt \"Adobe Devanagari\";\n"
""));

        verticalLayout->addWidget(pb_querybook);

        pb_queryborrow = new QPushButton(verticalLayoutWidget);
        pb_queryborrow->setObjectName(QStringLiteral("pb_queryborrow"));
        pb_queryborrow->setMinimumSize(QSize(200, 80));
        pb_queryborrow->setMaximumSize(QSize(200, 80));
        pb_queryborrow->setStyleSheet(QStringLiteral("font: 16pt \"Adobe Devanagari\";"));

        verticalLayout->addWidget(pb_queryborrow);

        pb_querymyself = new QPushButton(verticalLayoutWidget);
        pb_querymyself->setObjectName(QStringLiteral("pb_querymyself"));
        pb_querymyself->setMinimumSize(QSize(200, 80));
        pb_querymyself->setMaximumSize(QSize(200, 80));
        pb_querymyself->setStyleSheet(QStringLiteral("font: 16pt \"Adobe Devanagari\";"));

        verticalLayout->addWidget(pb_querymyself);

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

        lineEdit_3 = new QLineEdit(frame_2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:none;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));

        verticalLayout_2->addWidget(lineEdit_3);

        major = new QLineEdit(frame_2);
        major->setObjectName(QStringLiteral("major"));
        major->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:1px solid #cccccc;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));

        verticalLayout_2->addWidget(major);

        lineEdit_7 = new QLineEdit(frame_2);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:none;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));

        verticalLayout_2->addWidget(lineEdit_7);

        fine = new QLineEdit(frame_2);
        fine->setObjectName(QStringLiteral("fine"));
        fine->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:1px solid #cccccc;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));

        verticalLayout_2->addWidget(fine);

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

        lineEdit_6 = new QLineEdit(frame_2);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:none;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));

        verticalLayout_2->addWidget(lineEdit_6);

        outtime = new QLineEdit(frame_2);
        outtime->setObjectName(QStringLiteral("outtime"));
        outtime->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:1px solid #cccccc;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));

        verticalLayout_2->addWidget(outtime);


        retranslateUi(reader_queryself);

        QMetaObject::connectSlotsByName(reader_queryself);
    } // setupUi

    void retranslateUi(QWidget *reader_queryself)
    {
        reader_queryself->setWindowTitle(QApplication::translate("reader_queryself", "Form", Q_NULLPTR));
        pb_querybook->setText(QApplication::translate("reader_queryself", "\345\233\276\344\271\246\346\237\245\350\257\242\344\270\216\345\200\237\351\230\205", Q_NULLPTR));
        pb_queryborrow->setText(QApplication::translate("reader_queryself", "\344\270\252\344\272\272\345\200\237\351\230\205\346\237\245\350\257\242", Q_NULLPTR));
        pb_querymyself->setText(QApplication::translate("reader_queryself", "\344\270\252\344\272\272\344\277\241\346\201\257\346\237\245\350\257\242", Q_NULLPTR));
        pb_alterpwd->setText(QApplication::translate("reader_queryself", "\344\277\256\346\224\271\344\270\252\344\272\272\345\257\206\347\240\201", Q_NULLPTR));
        lineEdit_1->setText(QApplication::translate("reader_queryself", "\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        name->setText(QString());
        lineEdit_2->setText(QApplication::translate("reader_queryself", "\345\255\246\345\217\267\357\274\232", Q_NULLPTR));
        lineEdit_4->setText(QApplication::translate("reader_queryself", "\346\200\247\345\210\253\357\274\232", Q_NULLPTR));
        lineEdit_3->setText(QApplication::translate("reader_queryself", "\344\270\223\344\270\232\357\274\232", Q_NULLPTR));
        lineEdit_7->setText(QApplication::translate("reader_queryself", "\345\276\205\347\274\264\346\254\240\346\254\276\357\274\232", Q_NULLPTR));
        lineEdit_5->setText(QApplication::translate("reader_queryself", "\345\205\245\345\255\246\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        lineEdit_6->setText(QApplication::translate("reader_queryself", "\346\257\225\344\270\232\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class reader_queryself: public Ui_reader_queryself {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READER_QUERYSELF_H
