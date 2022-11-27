/********************************************************************************
** Form generated from reading UI file 'reader_querybook.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READER_QUERYBOOK_H
#define UI_READER_QUERYBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_reader_querybook
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
    QLineEdit *lineEdit_1;
    QLineEdit *lineEdit_2;
    QLineEdit *bname;
    QLineEdit *isbn;
    QLineEdit *lineEdit_6;
    QDateEdit *publishdate;
    QPushButton *pb_querysubmit;
    QLineEdit *author;
    QLineEdit *lineEdit_4;
    QLineEdit *publisher;
    QLineEdit *lineEdit_7;
    QPushButton *pb_borrowsubmit;
    QPushButton *pb_querystorage;

    void setupUi(QWidget *reader_querybook)
    {
        if (reader_querybook->objectName().isEmpty())
            reader_querybook->setObjectName(QStringLiteral("reader_querybook"));
        reader_querybook->resize(1000, 800);
        frame = new QFrame(reader_querybook);
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
        frame_2->setGeometry(QRect(260, 210, 668, 532));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        lineEdit_1 = new QLineEdit(frame_2);
        lineEdit_1->setObjectName(QStringLiteral("lineEdit_1"));
        lineEdit_1->setGeometry(QRect(80, 30, 61, 31));
        lineEdit_1->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:none;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        lineEdit_2 = new QLineEdit(frame_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(80, 70, 61, 31));
        lineEdit_2->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:none;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        bname = new QLineEdit(frame_2);
        bname->setObjectName(QStringLiteral("bname"));
        bname->setGeometry(QRect(170, 30, 271, 31));
        bname->setStyleSheet(QString::fromUtf8("border:1px solid #cccccc;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        isbn = new QLineEdit(frame_2);
        isbn->setObjectName(QStringLiteral("isbn"));
        isbn->setGeometry(QRect(170, 70, 271, 31));
        isbn->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:1px solid #cccccc;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        lineEdit_6 = new QLineEdit(frame_2);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(80, 190, 101, 31));
        lineEdit_6->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:none;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        publishdate = new QDateEdit(frame_2);
        publishdate->setObjectName(QStringLiteral("publishdate"));
        publishdate->setGeometry(QRect(170, 190, 201, 31));
        publishdate->setStyleSheet(QLatin1String("\n"
"font: 16pt \"Adobe Devanagari\";"));
        pb_querysubmit = new QPushButton(frame_2);
        pb_querysubmit->setObjectName(QStringLiteral("pb_querysubmit"));
        pb_querysubmit->setGeometry(QRect(140, 310, 261, 51));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pb_querysubmit->sizePolicy().hasHeightForWidth());
        pb_querysubmit->setSizePolicy(sizePolicy1);
        pb_querysubmit->setStyleSheet(QString::fromUtf8("\n"
"font-size:20px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"padding-top:5;\n"
"padding-bottom:5;"));
        author = new QLineEdit(frame_2);
        author->setObjectName(QStringLiteral("author"));
        author->setGeometry(QRect(170, 110, 271, 31));
        author->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:1px solid #cccccc;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        lineEdit_4 = new QLineEdit(frame_2);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(80, 110, 61, 31));
        lineEdit_4->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:none;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        publisher = new QLineEdit(frame_2);
        publisher->setObjectName(QStringLiteral("publisher"));
        publisher->setGeometry(QRect(170, 150, 271, 31));
        publisher->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:1px solid #cccccc;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        lineEdit_7 = new QLineEdit(frame_2);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(80, 150, 61, 31));
        lineEdit_7->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:none;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        pb_borrowsubmit = new QPushButton(frame_2);
        pb_borrowsubmit->setObjectName(QStringLiteral("pb_borrowsubmit"));
        pb_borrowsubmit->setGeometry(QRect(140, 430, 261, 51));
        sizePolicy1.setHeightForWidth(pb_borrowsubmit->sizePolicy().hasHeightForWidth());
        pb_borrowsubmit->setSizePolicy(sizePolicy1);
        pb_borrowsubmit->setStyleSheet(QString::fromUtf8("\n"
"font-size:20px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"padding-top:5;\n"
"padding-bottom:5;"));
        pb_querystorage = new QPushButton(frame_2);
        pb_querystorage->setObjectName(QStringLiteral("pb_querystorage"));
        pb_querystorage->setGeometry(QRect(140, 370, 261, 51));
        sizePolicy1.setHeightForWidth(pb_querystorage->sizePolicy().hasHeightForWidth());
        pb_querystorage->setSizePolicy(sizePolicy1);
        pb_querystorage->setStyleSheet(QString::fromUtf8("\n"
"font-size:20px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"padding-top:5;\n"
"padding-bottom:5;"));

        retranslateUi(reader_querybook);

        QMetaObject::connectSlotsByName(reader_querybook);
    } // setupUi

    void retranslateUi(QWidget *reader_querybook)
    {
        reader_querybook->setWindowTitle(QApplication::translate("reader_querybook", "Form", Q_NULLPTR));
        pb_querybook->setText(QApplication::translate("reader_querybook", "\345\233\276\344\271\246\346\237\245\350\257\242\344\270\216\345\200\237\351\230\205", Q_NULLPTR));
        pb_queryborrow->setText(QApplication::translate("reader_querybook", "\344\270\252\344\272\272\345\200\237\351\230\205\346\237\245\350\257\242", Q_NULLPTR));
        pb_querymyself->setText(QApplication::translate("reader_querybook", "\344\270\252\344\272\272\344\277\241\346\201\257\346\237\245\350\257\242", Q_NULLPTR));
        pb_alterpwd->setText(QApplication::translate("reader_querybook", "\344\277\256\346\224\271\344\270\252\344\272\272\345\257\206\347\240\201", Q_NULLPTR));
        lineEdit_1->setText(QApplication::translate("reader_querybook", "\344\271\246\345\220\215", Q_NULLPTR));
        lineEdit_2->setText(QApplication::translate("reader_querybook", "ISBN", Q_NULLPTR));
        bname->setText(QString());
        lineEdit_6->setText(QApplication::translate("reader_querybook", "\345\207\272\347\211\210\346\227\245\346\234\237", Q_NULLPTR));
        pb_querysubmit->setText(QApplication::translate("reader_querybook", "\346\217\220\344\272\244\346\237\245\350\257\242\346\235\241\344\273\266", Q_NULLPTR));
        lineEdit_4->setText(QApplication::translate("reader_querybook", "\344\275\234\350\200\205", Q_NULLPTR));
        publisher->setText(QString());
        lineEdit_7->setText(QApplication::translate("reader_querybook", "\345\207\272\347\211\210\347\244\276", Q_NULLPTR));
        pb_borrowsubmit->setText(QApplication::translate("reader_querybook", "\346\217\220\344\272\244\345\200\237\344\271\246\350\257\267\346\261\202", Q_NULLPTR));
        pb_querystorage->setText(QApplication::translate("reader_querybook", "\346\237\245\350\257\242\351\246\206\350\227\217\346\203\205\345\206\265", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class reader_querybook: public Ui_reader_querybook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READER_QUERYBOOK_H
