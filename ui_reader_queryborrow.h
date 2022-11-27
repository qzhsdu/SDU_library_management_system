/********************************************************************************
** Form generated from reading UI file 'reader_queryborrow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READER_QUERYBORROW_H
#define UI_READER_QUERYBORROW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_reader_queryborrow
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
    QTableView *borrowview;
    QPushButton *pb_querynotreturn;
    QPushButton *pb_returnbook;
    QPushButton *pb_returnbook_2;
    QPushButton *pb_renewbook;

    void setupUi(QWidget *reader_queryborrow)
    {
        if (reader_queryborrow->objectName().isEmpty())
            reader_queryborrow->setObjectName(QStringLiteral("reader_queryborrow"));
        reader_queryborrow->resize(1000, 800);
        frame = new QFrame(reader_queryborrow);
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
        borrowview = new QTableView(frame);
        borrowview->setObjectName(QStringLiteral("borrowview"));
        borrowview->setGeometry(QRect(260, 200, 731, 331));
        pb_querynotreturn = new QPushButton(frame);
        pb_querynotreturn->setObjectName(QStringLiteral("pb_querynotreturn"));
        pb_querynotreturn->setGeometry(QRect(630, 590, 201, 51));
        pb_querynotreturn->setStyleSheet(QStringLiteral("font: 16pt \"Adobe Devanagari\";"));
        pb_returnbook = new QPushButton(frame);
        pb_returnbook->setObjectName(QStringLiteral("pb_returnbook"));
        pb_returnbook->setGeometry(QRect(370, 670, 201, 51));
        pb_returnbook->setStyleSheet(QStringLiteral("font: 16pt \"Adobe Devanagari\";"));
        pb_returnbook_2 = new QPushButton(frame);
        pb_returnbook_2->setObjectName(QStringLiteral("pb_returnbook_2"));
        pb_returnbook_2->setGeometry(QRect(370, 590, 201, 51));
        pb_returnbook_2->setStyleSheet(QStringLiteral("font: 16pt \"Adobe Devanagari\";"));
        pb_renewbook = new QPushButton(frame);
        pb_renewbook->setObjectName(QStringLiteral("pb_renewbook"));
        pb_renewbook->setGeometry(QRect(630, 670, 201, 51));
        pb_renewbook->setStyleSheet(QStringLiteral("font: 16pt \"Adobe Devanagari\";"));

        retranslateUi(reader_queryborrow);

        QMetaObject::connectSlotsByName(reader_queryborrow);
    } // setupUi

    void retranslateUi(QWidget *reader_queryborrow)
    {
        reader_queryborrow->setWindowTitle(QApplication::translate("reader_queryborrow", "Form", Q_NULLPTR));
        pb_querybook->setText(QApplication::translate("reader_queryborrow", "\345\233\276\344\271\246\346\237\245\350\257\242\344\270\216\345\200\237\351\230\205", Q_NULLPTR));
        pb_queryborrow->setText(QApplication::translate("reader_queryborrow", "\344\270\252\344\272\272\345\200\237\351\230\205\346\237\245\350\257\242", Q_NULLPTR));
        pb_querymyself->setText(QApplication::translate("reader_queryborrow", "\344\270\252\344\272\272\344\277\241\346\201\257\346\237\245\350\257\242", Q_NULLPTR));
        pb_alterpwd->setText(QApplication::translate("reader_queryborrow", "\344\277\256\346\224\271\344\270\252\344\272\272\345\257\206\347\240\201", Q_NULLPTR));
        pb_querynotreturn->setText(QApplication::translate("reader_queryborrow", "\346\237\245\350\257\242\346\234\252\350\277\230\345\233\276\344\271\246", Q_NULLPTR));
        pb_returnbook->setText(QApplication::translate("reader_queryborrow", "\345\275\222\350\277\230\351\200\211\344\270\255\345\233\276\344\271\246", Q_NULLPTR));
        pb_returnbook_2->setText(QApplication::translate("reader_queryborrow", "\346\237\245\350\257\242\345\200\237\351\230\205\350\256\260\345\275\225", Q_NULLPTR));
        pb_renewbook->setText(QApplication::translate("reader_queryborrow", "\347\273\255\345\200\237\351\200\211\344\270\255\345\233\276\344\271\246", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class reader_queryborrow: public Ui_reader_queryborrow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READER_QUERYBORROW_H
