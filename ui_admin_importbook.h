/********************************************************************************
** Form generated from reading UI file 'admin_importbook.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_IMPORTBOOK_H
#define UI_ADMIN_IMPORTBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin_importbook
{
public:
    QFrame *frame;
    QGraphicsView *Title;
    QLineEdit *path_name;
    QTextBrowser *textBrowser;
    QLineEdit *lineEdit_1;
    QPushButton *pushButton;
    QLineEdit *lineEdit_2;

    void setupUi(QWidget *admin_importbook)
    {
        if (admin_importbook->objectName().isEmpty())
            admin_importbook->setObjectName(QStringLiteral("admin_importbook"));
        admin_importbook->resize(800, 640);
        frame = new QFrame(admin_importbook);
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
        path_name = new QLineEdit(frame);
        path_name->setObjectName(QStringLiteral("path_name"));
        path_name->setGeometry(QRect(230, 420, 491, 28));
        path_name->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:1px solid #cccccc;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        textBrowser = new QTextBrowser(frame);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(80, 241, 691, 131));
        lineEdit_1 = new QLineEdit(frame);
        lineEdit_1->setObjectName(QStringLiteral("lineEdit_1"));
        lineEdit_1->setGeometry(QRect(80, 420, 111, 31));
        lineEdit_1->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:none;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(230, 500, 381, 41));
        pushButton->setStyleSheet(QStringLiteral("font: 16pt \"Adobe Devanagari\";"));
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(370, 190, 111, 31));
        lineEdit_2->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:none;\n"
"font-size:25px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));

        retranslateUi(admin_importbook);

        QMetaObject::connectSlotsByName(admin_importbook);
    } // setupUi

    void retranslateUi(QWidget *admin_importbook)
    {
        admin_importbook->setWindowTitle(QApplication::translate("admin_importbook", "Form", Q_NULLPTR));
        path_name->setText(QString());
        textBrowser->setHtml(QApplication::translate("admin_importbook", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif,SimHei,SimSun'; font-size:18px; color:#4d4d4d; background-color:#ffffff;\">\351\246\226\345\205\210\351\234\200\350\246\201\345\260\206\344\277\235\345\255\230\344\272\206\351\234\200\350\246\201\350\257\273\345\217\226\350\207\263\346\225\260\346\215\256\345\272\223\347\232\204excel\350\241\250\346\240\274\344\277\235</span><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQu"
                        "anYi Micro Hei,sans-serif,SimHei,SimSun'; font-size:11pt; color:#4d4d4d; background-color:#ffffff;\">\345\255\230\344\270\272csv\346\226\207\344\273\266\347\204\266\345\220\216\345\216\273\346\216\211\350\241\250\345\244\264\345\222\214\347\251\272\346\240\274</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">\350\267\257\345\276\204\347\232\204\346\255\243\347\241\256\346\240\274\345\274\217C:/Users/Tony/Desktop/import.csv</span></p></body></html>", Q_NULLPTR));
        lineEdit_1->setText(QApplication::translate("admin_importbook", "\350\267\257\345\276\204\345\220\215\347\247\260\357\274\232", Q_NULLPTR));
        pushButton->setText(QApplication::translate("admin_importbook", "\345\257\274\345\205\245\346\225\260\346\215\256\345\272\223", Q_NULLPTR));
        lineEdit_2->setText(QApplication::translate("admin_importbook", "\350\257\264\346\230\216", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class admin_importbook: public Ui_admin_importbook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_IMPORTBOOK_H
