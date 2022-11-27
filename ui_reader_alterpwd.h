/********************************************************************************
** Form generated from reading UI file 'reader_alterpwd.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READER_ALTERPWD_H
#define UI_READER_ALTERPWD_H

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

class Ui_reader_alterpwd
{
public:
    QFrame *frame;
    QGraphicsView *Title_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pb_querybook_2;
    QPushButton *pb_queryborrow_2;
    QPushButton *pb_querymyself_2;
    QPushButton *pb_alterpwd_2;
    QFrame *line_2;
    QFrame *frame_3;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_8;
    QLineEdit *currentpwd;
    QLineEdit *modefied_pwd;
    QPushButton *pb_borrowsubmit_2;

    void setupUi(QWidget *reader_alterpwd)
    {
        if (reader_alterpwd->objectName().isEmpty())
            reader_alterpwd->setObjectName(QStringLiteral("reader_alterpwd"));
        reader_alterpwd->resize(1000, 800);
        frame = new QFrame(reader_alterpwd);
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
        Title_2 = new QGraphicsView(frame);
        Title_2->setObjectName(QStringLiteral("Title_2"));
        Title_2->setGeometry(QRect(0, 0, 1000, 130));
        Title_2->setStyleSheet(QString::fromUtf8("background-image: url(:/image/\346\215\225\350\216\267.PNG);"));
        verticalLayoutWidget_2 = new QWidget(frame);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(0, 150, 202, 599));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(3);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 20, 0, 0);
        pb_querybook_2 = new QPushButton(verticalLayoutWidget_2);
        pb_querybook_2->setObjectName(QStringLiteral("pb_querybook_2"));
        pb_querybook_2->setMinimumSize(QSize(200, 80));
        pb_querybook_2->setMaximumSize(QSize(200, 80));
        pb_querybook_2->setStyleSheet(QLatin1String("\n"
"font: 16pt \"Adobe Devanagari\";\n"
""));

        verticalLayout_2->addWidget(pb_querybook_2);

        pb_queryborrow_2 = new QPushButton(verticalLayoutWidget_2);
        pb_queryborrow_2->setObjectName(QStringLiteral("pb_queryborrow_2"));
        pb_queryborrow_2->setMinimumSize(QSize(200, 80));
        pb_queryborrow_2->setMaximumSize(QSize(200, 80));
        pb_queryborrow_2->setStyleSheet(QStringLiteral("font: 16pt \"Adobe Devanagari\";"));

        verticalLayout_2->addWidget(pb_queryborrow_2);

        pb_querymyself_2 = new QPushButton(verticalLayoutWidget_2);
        pb_querymyself_2->setObjectName(QStringLiteral("pb_querymyself_2"));
        pb_querymyself_2->setMinimumSize(QSize(200, 80));
        pb_querymyself_2->setMaximumSize(QSize(200, 80));
        pb_querymyself_2->setStyleSheet(QStringLiteral("font: 16pt \"Adobe Devanagari\";"));

        verticalLayout_2->addWidget(pb_querymyself_2);

        pb_alterpwd_2 = new QPushButton(verticalLayoutWidget_2);
        pb_alterpwd_2->setObjectName(QStringLiteral("pb_alterpwd_2"));
        pb_alterpwd_2->setMinimumSize(QSize(200, 80));
        pb_alterpwd_2->setMaximumSize(QSize(200, 80));
        pb_alterpwd_2->setStyleSheet(QStringLiteral("font: 16pt \"Adobe Devanagari\";"));

        verticalLayout_2->addWidget(pb_alterpwd_2);

        line_2 = new QFrame(frame);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(240, 150, 20, 621));
        line_2->setStyleSheet(QStringLiteral("font: 75 9pt \"Adobe Devanagari\";"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
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

        retranslateUi(reader_alterpwd);

        QMetaObject::connectSlotsByName(reader_alterpwd);
    } // setupUi

    void retranslateUi(QWidget *reader_alterpwd)
    {
        reader_alterpwd->setWindowTitle(QApplication::translate("reader_alterpwd", "Form", Q_NULLPTR));
        pb_querybook_2->setText(QApplication::translate("reader_alterpwd", "\345\233\276\344\271\246\346\237\245\350\257\242\344\270\216\345\200\237\351\230\205", Q_NULLPTR));
        pb_queryborrow_2->setText(QApplication::translate("reader_alterpwd", "\344\270\252\344\272\272\345\200\237\351\230\205\346\237\245\350\257\242", Q_NULLPTR));
        pb_querymyself_2->setText(QApplication::translate("reader_alterpwd", "\344\270\252\344\272\272\344\277\241\346\201\257\346\237\245\350\257\242", Q_NULLPTR));
        pb_alterpwd_2->setText(QApplication::translate("reader_alterpwd", "\344\277\256\346\224\271\344\270\252\344\272\272\345\257\206\347\240\201", Q_NULLPTR));
        lineEdit_5->setText(QApplication::translate("reader_alterpwd", "\345\275\223\345\211\215\345\257\206\347\240\201", Q_NULLPTR));
        lineEdit_8->setText(QApplication::translate("reader_alterpwd", "\344\277\256\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
        currentpwd->setText(QString());
        pb_borrowsubmit_2->setText(QApplication::translate("reader_alterpwd", "\344\277\256\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class reader_alterpwd: public Ui_reader_alterpwd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READER_ALTERPWD_H
