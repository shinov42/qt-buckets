/********************************************************************************
** Form generated from reading UI file 'buckets.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUCKETS_H
#define UI_BUCKETS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QListWidget *bucket1;
    QListWidget *bucket2;
    QListWidget *bucket3;
    QPushButton *from1;
    QPushButton *to1;
    QPushButton *to2;
    QPushButton *from2;
    QPushButton *to3;
    QPushButton *from3;
    QListWidget *volume1;
    QListWidget *volume2;
    QListWidget *volume3;
    QPushButton *tip;
    QPushButton *solution;
    QListWidget *score;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(514, 344);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        bucket1 = new QListWidget(centralwidget);
        bucket1->setObjectName(QString::fromUtf8("bucket1"));
        bucket1->setGeometry(QRect(30, 50, 111, 192));
        bucket2 = new QListWidget(centralwidget);
        bucket2->setObjectName(QString::fromUtf8("bucket2"));
        bucket2->setGeometry(QRect(200, 50, 111, 192));
        bucket3 = new QListWidget(centralwidget);
        bucket3->setObjectName(QString::fromUtf8("bucket3"));
        bucket3->setGeometry(QRect(370, 50, 111, 192));
        from1 = new QPushButton(centralwidget);
        from1->setObjectName(QString::fromUtf8("from1"));
        from1->setGeometry(QRect(30, 290, 51, 25));
        to1 = new QPushButton(centralwidget);
        to1->setObjectName(QString::fromUtf8("to1"));
        to1->setGeometry(QRect(90, 290, 51, 25));
        to2 = new QPushButton(centralwidget);
        to2->setObjectName(QString::fromUtf8("to2"));
        to2->setGeometry(QRect(260, 290, 51, 25));
        from2 = new QPushButton(centralwidget);
        from2->setObjectName(QString::fromUtf8("from2"));
        from2->setGeometry(QRect(200, 290, 51, 25));
        to3 = new QPushButton(centralwidget);
        to3->setObjectName(QString::fromUtf8("to3"));
        to3->setGeometry(QRect(430, 290, 51, 25));
        from3 = new QPushButton(centralwidget);
        from3->setObjectName(QString::fromUtf8("from3"));
        from3->setGeometry(QRect(370, 290, 51, 25));
        volume1 = new QListWidget(centralwidget);
        volume1->setObjectName(QString::fromUtf8("volume1"));
        volume1->setGeometry(QRect(30, 250, 111, 31));
        volume2 = new QListWidget(centralwidget);
        volume2->setObjectName(QString::fromUtf8("volume2"));
        volume2->setGeometry(QRect(200, 250, 111, 31));
        volume3 = new QListWidget(centralwidget);
        volume3->setObjectName(QString::fromUtf8("volume3"));
        volume3->setGeometry(QRect(370, 250, 111, 31));
        tip = new QPushButton(centralwidget);
        tip->setObjectName(QString::fromUtf8("tip"));
        tip->setGeometry(QRect(38, 10, 91, 25));
        solution = new QPushButton(centralwidget);
        solution->setObjectName(QString::fromUtf8("solution"));
        solution->setGeometry(QRect(380, 10, 89, 25));
        score = new QListWidget(centralwidget);
        score->setObjectName(QString::fromUtf8("score"));
        score->setGeometry(QRect(160, 10, 191, 31));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 140, 71, 17));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(220, 140, 81, 17));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 260, 67, 17));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(390, 140, 81, 17));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(230, 260, 67, 17));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(400, 260, 67, 17));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(240, 20, 31, 17));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        from1->setText(QApplication::translate("MainWindow", "\320\276\321\202\321\201\321\216\320\264\320\260", 0, QApplication::UnicodeUTF8));
        to1->setText(QApplication::translate("MainWindow", "\321\201\321\216\320\264\320\260", 0, QApplication::UnicodeUTF8));
        to2->setText(QApplication::translate("MainWindow", "\321\201\321\216\320\264\320\260", 0, QApplication::UnicodeUTF8));
        from2->setText(QApplication::translate("MainWindow", "\320\276\321\202\321\201\321\216\320\264\320\260", 0, QApplication::UnicodeUTF8));
        to3->setText(QApplication::translate("MainWindow", "\321\201\321\216\320\264\320\260", 0, QApplication::UnicodeUTF8));
        from3->setText(QApplication::translate("MainWindow", "\320\276\321\202\321\201\321\216\320\264\320\260", 0, QApplication::UnicodeUTF8));
        tip->setText(QApplication::translate("MainWindow", "\320\277\320\276\320\264\321\201\320\272\320\260\320\267\320\272\320\260", 0, QApplication::UnicodeUTF8));
        solution->setText(QApplication::translate("MainWindow", "\321\200\320\265\321\210\320\265\320\275\320\270\320\265", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "\320\272\320\260\321\200\321\202\320\270\320\275\320\272\320\2601", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "\320\272\320\260\321\200\321\202\320\270\320\275\320\272\320\260 2", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "\320\276\320\261\321\212\321\221\320\2741", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "\320\272\320\260\321\200\321\202\320\270\320\275\320\272\320\2603", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "\320\276\320\261\321\212\321\221\320\2742", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "\320\276\320\261\321\212\321\221\320\2743", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "\321\201\321\207\321\221\321\202", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUCKETS_H
