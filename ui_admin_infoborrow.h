/********************************************************************************
** Form generated from reading UI file 'admin_infoborrow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_INFOBORROW_H
#define UI_ADMIN_INFOBORROW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin_infoborrow
{
public:
    QFrame *frame;
    QGraphicsView *Title;
    QFrame *line;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pb_alterbook;
    QPushButton *pb_bookimport;
    QPushButton *pb_infoborrow;
    QPushButton *pb_alterreader;
    QPushButton *pb_queryself;
    QPushButton *pb_alterpwd;
    QFrame *frame_2;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *id;
    QPushButton *pb_queryborrow;
    QLineEdit *lineEdit_4;
    QLineEdit *isbn;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *notes;
    QLineEdit *lineEdit_7;
    QLineEdit *fine;
    QDateTimeEdit *borrowdate;
    QDateTimeEdit *returndate;
    QPushButton *pb_alterduebook;
    QPushButton *pb_recordmissing;
    QLineEdit *lineEdit_9;
    QLineEdit *bname;
    QPushButton *pb_addborrow;

    void setupUi(QWidget *admin_infoborrow)
    {
        if (admin_infoborrow->objectName().isEmpty())
            admin_infoborrow->setObjectName(QStringLiteral("admin_infoborrow"));
        admin_infoborrow->resize(1000, 800);
        frame = new QFrame(admin_infoborrow);
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
        verticalLayoutWidget_2 = new QWidget(frame);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(0, 150, 202, 541));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(3);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 20, 0, 0);
        pb_alterbook = new QPushButton(verticalLayoutWidget_2);
        pb_alterbook->setObjectName(QStringLiteral("pb_alterbook"));
        pb_alterbook->setMinimumSize(QSize(200, 80));
        pb_alterbook->setMaximumSize(QSize(200, 80));
        pb_alterbook->setStyleSheet(QLatin1String("\n"
"font: 16pt \"Adobe Devanagari\";\n"
""));

        verticalLayout_2->addWidget(pb_alterbook);

        pb_bookimport = new QPushButton(verticalLayoutWidget_2);
        pb_bookimport->setObjectName(QStringLiteral("pb_bookimport"));
        pb_bookimport->setMinimumSize(QSize(200, 80));
        pb_bookimport->setMaximumSize(QSize(200, 80));
        pb_bookimport->setStyleSheet(QStringLiteral("font: 16pt \"Adobe Devanagari\";"));

        verticalLayout_2->addWidget(pb_bookimport);

        pb_infoborrow = new QPushButton(verticalLayoutWidget_2);
        pb_infoborrow->setObjectName(QStringLiteral("pb_infoborrow"));
        pb_infoborrow->setMinimumSize(QSize(200, 80));
        pb_infoborrow->setMaximumSize(QSize(200, 80));
        pb_infoborrow->setStyleSheet(QStringLiteral("font: 16pt \"Adobe Devanagari\";"));

        verticalLayout_2->addWidget(pb_infoborrow);

        pb_alterreader = new QPushButton(verticalLayoutWidget_2);
        pb_alterreader->setObjectName(QStringLiteral("pb_alterreader"));
        pb_alterreader->setMinimumSize(QSize(200, 80));
        pb_alterreader->setMaximumSize(QSize(200, 80));
        pb_alterreader->setStyleSheet(QStringLiteral("font: 16pt \"Adobe Devanagari\";"));

        verticalLayout_2->addWidget(pb_alterreader);

        pb_queryself = new QPushButton(verticalLayoutWidget_2);
        pb_queryself->setObjectName(QStringLiteral("pb_queryself"));
        pb_queryself->setMinimumSize(QSize(200, 80));
        pb_queryself->setMaximumSize(QSize(200, 80));
        pb_queryself->setStyleSheet(QStringLiteral("font: 16pt \"Adobe Devanagari\";"));

        verticalLayout_2->addWidget(pb_queryself);

        pb_alterpwd = new QPushButton(verticalLayoutWidget_2);
        pb_alterpwd->setObjectName(QStringLiteral("pb_alterpwd"));
        pb_alterpwd->setMinimumSize(QSize(200, 80));
        pb_alterpwd->setMaximumSize(QSize(200, 80));
        pb_alterpwd->setStyleSheet(QStringLiteral("font: 16pt \"Adobe Devanagari\";"));

        verticalLayout_2->addWidget(pb_alterpwd);

        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(260, 190, 668, 532));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        lineEdit_2 = new QLineEdit(frame_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(70, 30, 61, 31));
        lineEdit_2->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:none;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        lineEdit_3 = new QLineEdit(frame_2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(70, 140, 111, 31));
        lineEdit_3->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:none;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        id = new QLineEdit(frame_2);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(170, 30, 271, 31));
        id->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:1px solid #cccccc;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        pb_queryborrow = new QPushButton(frame_2);
        pb_queryborrow->setObjectName(QStringLiteral("pb_queryborrow"));
        pb_queryborrow->setGeometry(QRect(20, 360, 261, 51));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pb_queryborrow->sizePolicy().hasHeightForWidth());
        pb_queryborrow->setSizePolicy(sizePolicy1);
        pb_queryborrow->setStyleSheet(QString::fromUtf8("\n"
"font-size:20px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"padding-top:5;\n"
"padding-bottom:5;"));
        lineEdit_4 = new QLineEdit(frame_2);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(70, 70, 61, 31));
        lineEdit_4->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:none;\n"
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
        lineEdit_5 = new QLineEdit(frame_2);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(70, 180, 111, 31));
        lineEdit_5->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:none;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        lineEdit_6 = new QLineEdit(frame_2);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(70, 280, 111, 31));
        lineEdit_6->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:none;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        notes = new QLineEdit(frame_2);
        notes->setObjectName(QStringLiteral("notes"));
        notes->setGeometry(QRect(170, 280, 271, 31));
        notes->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:1px solid #cccccc;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        lineEdit_7 = new QLineEdit(frame_2);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(70, 230, 111, 31));
        lineEdit_7->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:none;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        fine = new QLineEdit(frame_2);
        fine->setObjectName(QStringLiteral("fine"));
        fine->setGeometry(QRect(170, 230, 271, 31));
        fine->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:1px solid #cccccc;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        borrowdate = new QDateTimeEdit(frame_2);
        borrowdate->setObjectName(QStringLiteral("borrowdate"));
        borrowdate->setGeometry(QRect(170, 141, 194, 31));
        returndate = new QDateTimeEdit(frame_2);
        returndate->setObjectName(QStringLiteral("returndate"));
        returndate->setGeometry(QRect(170, 181, 194, 31));
        pb_alterduebook = new QPushButton(frame_2);
        pb_alterduebook->setObjectName(QStringLiteral("pb_alterduebook"));
        pb_alterduebook->setGeometry(QRect(20, 430, 261, 51));
        sizePolicy1.setHeightForWidth(pb_alterduebook->sizePolicy().hasHeightForWidth());
        pb_alterduebook->setSizePolicy(sizePolicy1);
        pb_alterduebook->setStyleSheet(QString::fromUtf8("\n"
"font-size:20px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"padding-top:5;\n"
"padding-bottom:5;"));
        pb_recordmissing = new QPushButton(frame_2);
        pb_recordmissing->setObjectName(QStringLiteral("pb_recordmissing"));
        pb_recordmissing->setGeometry(QRect(300, 430, 261, 51));
        sizePolicy1.setHeightForWidth(pb_recordmissing->sizePolicy().hasHeightForWidth());
        pb_recordmissing->setSizePolicy(sizePolicy1);
        pb_recordmissing->setStyleSheet(QString::fromUtf8("\n"
"font-size:20px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"padding-top:5;\n"
"padding-bottom:5;"));
        lineEdit_9 = new QLineEdit(frame_2);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(70, 110, 61, 31));
        lineEdit_9->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:none;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        bname = new QLineEdit(frame_2);
        bname->setObjectName(QStringLiteral("bname"));
        bname->setGeometry(QRect(170, 110, 271, 31));
        bname->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:1px solid #cccccc;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        pb_addborrow = new QPushButton(frame_2);
        pb_addborrow->setObjectName(QStringLiteral("pb_addborrow"));
        pb_addborrow->setGeometry(QRect(300, 360, 261, 51));
        sizePolicy1.setHeightForWidth(pb_addborrow->sizePolicy().hasHeightForWidth());
        pb_addborrow->setSizePolicy(sizePolicy1);
        pb_addborrow->setStyleSheet(QString::fromUtf8("\n"
"font-size:20px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"padding-top:5;\n"
"padding-bottom:5;"));

        retranslateUi(admin_infoborrow);

        QMetaObject::connectSlotsByName(admin_infoborrow);
    } // setupUi

    void retranslateUi(QWidget *admin_infoborrow)
    {
        admin_infoborrow->setWindowTitle(QApplication::translate("admin_infoborrow", "Form", Q_NULLPTR));
        pb_alterbook->setText(QApplication::translate("admin_infoborrow", "\345\233\276\344\271\246\344\277\241\346\201\257\345\217\230\346\233\264", Q_NULLPTR));
        pb_bookimport->setText(QApplication::translate("admin_infoborrow", "\345\233\276\344\271\246\344\270\200\351\224\256\345\257\274\345\205\245", Q_NULLPTR));
        pb_infoborrow->setText(QApplication::translate("admin_infoborrow", "\345\200\237\351\230\205\350\256\260\345\275\225\346\237\245\350\257\242", Q_NULLPTR));
        pb_alterreader->setText(QApplication::translate("admin_infoborrow", "\350\257\273\350\200\205\344\277\241\346\201\257\345\217\230\346\233\264", Q_NULLPTR));
        pb_queryself->setText(QApplication::translate("admin_infoborrow", "\346\237\245\350\257\242\344\270\252\344\272\272\344\277\241\346\201\257", Q_NULLPTR));
        pb_alterpwd->setText(QApplication::translate("admin_infoborrow", "\344\277\256\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
        lineEdit_2->setText(QApplication::translate("admin_infoborrow", "\345\255\246\345\217\267\357\274\232", Q_NULLPTR));
        lineEdit_3->setText(QApplication::translate("admin_infoborrow", "\345\200\237\351\230\205\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        pb_queryborrow->setText(QApplication::translate("admin_infoborrow", "\346\237\245\350\257\242\345\200\237\351\230\205\350\256\260\345\275\225", Q_NULLPTR));
        lineEdit_4->setText(QApplication::translate("admin_infoborrow", "ISBN\357\274\232", Q_NULLPTR));
        lineEdit_5->setText(QApplication::translate("admin_infoborrow", "\345\272\224\350\277\230\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        lineEdit_6->setText(QApplication::translate("admin_infoborrow", "\345\244\207\346\263\250\357\274\232", Q_NULLPTR));
        lineEdit_7->setText(QApplication::translate("admin_infoborrow", "\347\275\232\346\254\276\357\274\232", Q_NULLPTR));
        pb_alterduebook->setText(QApplication::translate("admin_infoborrow", "\346\243\200\346\237\245\350\266\205\346\234\237\345\233\276\344\271\246", Q_NULLPTR));
        pb_recordmissing->setText(QApplication::translate("admin_infoborrow", "\350\256\260\345\275\225\344\270\242\345\244\261\345\233\276\344\271\246", Q_NULLPTR));
        lineEdit_9->setText(QApplication::translate("admin_infoborrow", "\344\271\246\345\220\215\357\274\232", Q_NULLPTR));
        pb_addborrow->setText(QApplication::translate("admin_infoborrow", "\345\242\236\345\212\240\345\200\237\351\230\205\350\256\260\345\275\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class admin_infoborrow: public Ui_admin_infoborrow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_INFOBORROW_H
