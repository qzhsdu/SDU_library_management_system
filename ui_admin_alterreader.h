/********************************************************************************
** Form generated from reading UI file 'admin_alterreader.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_ALTERREADER_H
#define UI_ADMIN_ALTERREADER_H

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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin_alterreader
{
public:
    QFrame *frame;
    QGraphicsView *Title;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pb_alterbook;
    QPushButton *pb_bookimport;
    QPushButton *pb_infoborrow;
    QPushButton *pb_alterreader_2;
    QPushButton *pb_queryself;
    QPushButton *pb_alterpwd;
    QFrame *line;
    QFrame *frame_2;
    QLineEdit *lineEdit_1;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_5;
    QLineEdit *name;
    QLineEdit *id;
    QRadioButton *sex_man;
    QRadioButton *sex_woman;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_6;
    QPushButton *pb_addreader;
    QComboBox *major;
    QDateEdit *intime;
    QDateEdit *outtime;
    QPushButton *pb_queryreader;
    QPushButton *pb_deletereader;

    void setupUi(QWidget *admin_alterreader)
    {
        if (admin_alterreader->objectName().isEmpty())
            admin_alterreader->setObjectName(QStringLiteral("admin_alterreader"));
        admin_alterreader->resize(1000, 800);
        frame = new QFrame(admin_alterreader);
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
        verticalLayoutWidget->setGeometry(QRect(0, 150, 202, 581));
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

        pb_alterreader_2 = new QPushButton(verticalLayoutWidget);
        pb_alterreader_2->setObjectName(QStringLiteral("pb_alterreader_2"));
        pb_alterreader_2->setMinimumSize(QSize(200, 80));
        pb_alterreader_2->setMaximumSize(QSize(200, 80));
        pb_alterreader_2->setStyleSheet(QStringLiteral("font: 16pt \"Adobe Devanagari\";"));

        verticalLayout->addWidget(pb_alterreader_2);

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
        lineEdit_1->setGeometry(QRect(70, 20, 61, 31));
        lineEdit_1->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:none;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        lineEdit_2 = new QLineEdit(frame_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(70, 70, 61, 31));
        lineEdit_2->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:none;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        lineEdit_3 = new QLineEdit(frame_2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(70, 160, 61, 31));
        lineEdit_3->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:none;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        lineEdit_5 = new QLineEdit(frame_2);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(70, 210, 101, 31));
        lineEdit_5->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:none;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        name = new QLineEdit(frame_2);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(170, 20, 271, 31));
        name->setStyleSheet(QString::fromUtf8("border:1px solid #cccccc;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        id = new QLineEdit(frame_2);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(170, 70, 271, 31));
        id->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:1px solid #cccccc;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        sex_man = new QRadioButton(frame_2);
        sex_man->setObjectName(QStringLiteral("sex_man"));
        sex_man->setGeometry(QRect(170, 110, 41, 31));
        sex_man->setTabletTracking(false);
        sex_man->setCheckable(true);
        sex_man->setChecked(true);
        sex_woman = new QRadioButton(frame_2);
        sex_woman->setObjectName(QStringLiteral("sex_woman"));
        sex_woman->setGeometry(QRect(240, 110, 41, 31));
        lineEdit_4 = new QLineEdit(frame_2);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(70, 110, 61, 31));
        lineEdit_4->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:none;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        lineEdit_6 = new QLineEdit(frame_2);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(70, 260, 101, 31));
        lineEdit_6->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:none;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        pb_addreader = new QPushButton(frame_2);
        pb_addreader->setObjectName(QStringLiteral("pb_addreader"));
        pb_addreader->setGeometry(QRect(100, 380, 261, 51));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pb_addreader->sizePolicy().hasHeightForWidth());
        pb_addreader->setSizePolicy(sizePolicy1);
        pb_addreader->setStyleSheet(QString::fromUtf8("\n"
"font-size:20px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"padding-top:5;\n"
"padding-bottom:5;"));
        major = new QComboBox(frame_2);
        major->setObjectName(QStringLiteral("major"));
        major->setGeometry(QRect(170, 150, 271, 41));
        major->setStyleSheet(QStringLiteral("font: 16pt \"Adobe Devanagari\";"));
        intime = new QDateEdit(frame_2);
        intime->setObjectName(QStringLiteral("intime"));
        intime->setGeometry(QRect(170, 211, 201, 31));
        intime->setStyleSheet(QLatin1String("\n"
"font: 16pt \"Adobe Devanagari\";"));
        outtime = new QDateEdit(frame_2);
        outtime->setObjectName(QStringLiteral("outtime"));
        outtime->setGeometry(QRect(170, 260, 201, 31));
        outtime->setStyleSheet(QLatin1String("\n"
"font: 16pt \"Adobe Devanagari\";"));
        pb_queryreader = new QPushButton(frame_2);
        pb_queryreader->setObjectName(QStringLiteral("pb_queryreader"));
        pb_queryreader->setGeometry(QRect(100, 320, 261, 51));
        sizePolicy1.setHeightForWidth(pb_queryreader->sizePolicy().hasHeightForWidth());
        pb_queryreader->setSizePolicy(sizePolicy1);
        pb_queryreader->setStyleSheet(QString::fromUtf8("\n"
"font-size:20px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"padding-top:5;\n"
"padding-bottom:5;"));
        pb_deletereader = new QPushButton(frame_2);
        pb_deletereader->setObjectName(QStringLiteral("pb_deletereader"));
        pb_deletereader->setGeometry(QRect(100, 440, 261, 51));
        sizePolicy1.setHeightForWidth(pb_deletereader->sizePolicy().hasHeightForWidth());
        pb_deletereader->setSizePolicy(sizePolicy1);
        pb_deletereader->setStyleSheet(QString::fromUtf8("\n"
"font-size:20px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"padding-top:5;\n"
"padding-bottom:5;"));

        retranslateUi(admin_alterreader);

        QMetaObject::connectSlotsByName(admin_alterreader);
    } // setupUi

    void retranslateUi(QWidget *admin_alterreader)
    {
        admin_alterreader->setWindowTitle(QApplication::translate("admin_alterreader", "Form", Q_NULLPTR));
        pb_alterbook->setText(QApplication::translate("admin_alterreader", "\345\233\276\344\271\246\344\277\241\346\201\257\345\217\230\346\233\264", Q_NULLPTR));
        pb_bookimport->setText(QApplication::translate("admin_alterreader", "\345\233\276\344\271\246\344\270\200\351\224\256\345\257\274\345\205\245", Q_NULLPTR));
        pb_infoborrow->setText(QApplication::translate("admin_alterreader", "\345\200\237\351\230\205\350\256\260\345\275\225\346\237\245\350\257\242", Q_NULLPTR));
        pb_alterreader_2->setText(QApplication::translate("admin_alterreader", "\350\257\273\350\200\205\344\277\241\346\201\257\345\217\230\346\233\264", Q_NULLPTR));
        pb_queryself->setText(QApplication::translate("admin_alterreader", "\346\237\245\350\257\242\344\270\252\344\272\272\344\277\241\346\201\257", Q_NULLPTR));
        pb_alterpwd->setText(QApplication::translate("admin_alterreader", "\344\277\256\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
        lineEdit_1->setText(QApplication::translate("admin_alterreader", "\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        lineEdit_2->setText(QApplication::translate("admin_alterreader", "\345\255\246\345\217\267\357\274\232", Q_NULLPTR));
        lineEdit_3->setText(QApplication::translate("admin_alterreader", "\344\270\223\344\270\232\357\274\232", Q_NULLPTR));
        lineEdit_5->setText(QApplication::translate("admin_alterreader", "\345\205\245\345\255\246\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        name->setText(QString());
        sex_man->setText(QApplication::translate("admin_alterreader", "\347\224\267", Q_NULLPTR));
        sex_woman->setText(QApplication::translate("admin_alterreader", "\345\245\263", Q_NULLPTR));
        lineEdit_4->setText(QApplication::translate("admin_alterreader", "\346\200\247\345\210\253\357\274\232", Q_NULLPTR));
        lineEdit_6->setText(QApplication::translate("admin_alterreader", "\346\257\225\344\270\232\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        pb_addreader->setText(QApplication::translate("admin_alterreader", "\345\242\236\345\212\240\350\257\245\350\257\273\350\200\205", Q_NULLPTR));
        pb_queryreader->setText(QApplication::translate("admin_alterreader", "\346\237\245\350\257\242\350\257\245\350\257\273\350\200\205", Q_NULLPTR));
        pb_deletereader->setText(QApplication::translate("admin_alterreader", "\345\210\240\351\231\244\350\257\245\350\257\273\350\200\205", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class admin_alterreader: public Ui_admin_alterreader {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_ALTERREADER_H
