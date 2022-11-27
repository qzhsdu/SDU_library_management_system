/********************************************************************************
** Form generated from reading UI file 'admin_alterbook.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_ALTERBOOK_H
#define UI_ADMIN_ALTERBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin_alterbook
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
    QFrame *frame_2;
    QLineEdit *lineEdit_1;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *bname;
    QLineEdit *isbn;
    QLineEdit *lineEdit_6;
    QPushButton *pb_addbook;
    QComboBox *collectionstates;
    QDateEdit *publishdate;
    QPushButton *pb_querybook;
    QPushButton *pb_deletebook;
    QLineEdit *author;
    QLineEdit *lineEdit_4;
    QLineEdit *publisher;
    QLineEdit *lineEdit_7;

    void setupUi(QWidget *admin_alterbook)
    {
        if (admin_alterbook->objectName().isEmpty())
            admin_alterbook->setObjectName(QStringLiteral("admin_alterbook"));
        admin_alterbook->resize(1000, 800);
        frame = new QFrame(admin_alterbook);
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
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(260, 200, 668, 532));
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
        lineEdit_3 = new QLineEdit(frame_2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(80, 230, 91, 31));
        lineEdit_3->setStyleSheet(QString::fromUtf8("color:#808080;\n"
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
        pb_addbook = new QPushButton(frame_2);
        pb_addbook->setObjectName(QStringLiteral("pb_addbook"));
        pb_addbook->setGeometry(QRect(100, 380, 261, 51));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pb_addbook->sizePolicy().hasHeightForWidth());
        pb_addbook->setSizePolicy(sizePolicy1);
        pb_addbook->setStyleSheet(QString::fromUtf8("\n"
"font-size:20px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"padding-top:5;\n"
"padding-bottom:5;"));
        collectionstates = new QComboBox(frame_2);
        collectionstates->setObjectName(QStringLiteral("collectionstates"));
        collectionstates->setGeometry(QRect(170, 230, 271, 41));
        collectionstates->setStyleSheet(QStringLiteral("font: 16pt \"Adobe Devanagari\";"));
        publishdate = new QDateEdit(frame_2);
        publishdate->setObjectName(QStringLiteral("publishdate"));
        publishdate->setGeometry(QRect(170, 190, 201, 31));
        publishdate->setStyleSheet(QLatin1String("\n"
"font: 16pt \"Adobe Devanagari\";"));
        pb_querybook = new QPushButton(frame_2);
        pb_querybook->setObjectName(QStringLiteral("pb_querybook"));
        pb_querybook->setGeometry(QRect(100, 320, 261, 51));
        sizePolicy1.setHeightForWidth(pb_querybook->sizePolicy().hasHeightForWidth());
        pb_querybook->setSizePolicy(sizePolicy1);
        pb_querybook->setStyleSheet(QString::fromUtf8("\n"
"font-size:20px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"padding-top:5;\n"
"padding-bottom:5;"));
        pb_deletebook = new QPushButton(frame_2);
        pb_deletebook->setObjectName(QStringLiteral("pb_deletebook"));
        pb_deletebook->setGeometry(QRect(100, 440, 261, 51));
        sizePolicy1.setHeightForWidth(pb_deletebook->sizePolicy().hasHeightForWidth());
        pb_deletebook->setSizePolicy(sizePolicy1);
        pb_deletebook->setStyleSheet(QString::fromUtf8("\n"
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

        retranslateUi(admin_alterbook);

        QMetaObject::connectSlotsByName(admin_alterbook);
    } // setupUi

    void retranslateUi(QWidget *admin_alterbook)
    {
        admin_alterbook->setWindowTitle(QApplication::translate("admin_alterbook", "Form", Q_NULLPTR));
        pb_alterbook->setText(QApplication::translate("admin_alterbook", "\345\233\276\344\271\246\344\277\241\346\201\257\345\217\230\346\233\264", Q_NULLPTR));
        pb_bookimport->setText(QApplication::translate("admin_alterbook", "\345\233\276\344\271\246\344\270\200\351\224\256\345\257\274\345\205\245", Q_NULLPTR));
        pb_infoborrow->setText(QApplication::translate("admin_alterbook", "\345\200\237\351\230\205\350\256\260\345\275\225\346\237\245\350\257\242", Q_NULLPTR));
        pb_alterreader->setText(QApplication::translate("admin_alterbook", "\350\257\273\350\200\205\344\277\241\346\201\257\345\217\230\346\233\264", Q_NULLPTR));
        pb_queryself->setText(QApplication::translate("admin_alterbook", "\346\237\245\350\257\242\344\270\252\344\272\272\344\277\241\346\201\257", Q_NULLPTR));
        pb_alterpwd->setText(QApplication::translate("admin_alterbook", "\344\277\256\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
        lineEdit_1->setText(QApplication::translate("admin_alterbook", "\344\271\246\345\220\215", Q_NULLPTR));
        lineEdit_2->setText(QApplication::translate("admin_alterbook", "ISBN", Q_NULLPTR));
        lineEdit_3->setText(QApplication::translate("admin_alterbook", "\351\246\206\350\227\217\346\203\205\345\206\265", Q_NULLPTR));
        bname->setText(QString());
        lineEdit_6->setText(QApplication::translate("admin_alterbook", "\345\207\272\347\211\210\346\227\245\346\234\237", Q_NULLPTR));
        pb_addbook->setText(QApplication::translate("admin_alterbook", "\345\242\236\345\212\240\350\257\245\344\271\246\344\277\241\346\201\257", Q_NULLPTR));
        pb_querybook->setText(QApplication::translate("admin_alterbook", "\346\217\220\344\272\244\346\237\245\350\257\242/\344\277\256\346\224\271\346\235\241\344\273\266", Q_NULLPTR));
        pb_deletebook->setText(QApplication::translate("admin_alterbook", "\345\210\240\351\231\244\350\257\245\344\271\246\344\277\241\346\201\257", Q_NULLPTR));
        lineEdit_4->setText(QApplication::translate("admin_alterbook", "\344\275\234\350\200\205", Q_NULLPTR));
        publisher->setText(QString());
        lineEdit_7->setText(QApplication::translate("admin_alterbook", "\345\207\272\347\211\210\347\244\276", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class admin_alterbook: public Ui_admin_alterbook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_ALTERBOOK_H
