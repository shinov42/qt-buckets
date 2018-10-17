/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *to3;
    QPushButton *to2;
    QPushButton *from1;
    QPushButton *tip;
    QPushButton *to1;
    QPushButton *from2;
    QPushButton *from3;
    QLabel *hint3;
    QPushButton *newGame;
    QLabel *pic1;
    QLabel *pic2;
    QLabel *pic3;
    QLabel *vol1;
    QLabel *vol2;
    QLabel *vol3;
    QLabel *hint2;
    QLabel *hint1;
    QLabel *shouldGet;
    QLabel *desVolume;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuBuckets;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(492, 410);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        to3 = new QPushButton(centralWidget);
        to3->setObjectName(QString::fromUtf8("to3"));
        to3->setGeometry(QRect(420, 310, 51, 25));
        to2 = new QPushButton(centralWidget);
        to2->setObjectName(QString::fromUtf8("to2"));
        to2->setGeometry(QRect(250, 310, 51, 25));
        from1 = new QPushButton(centralWidget);
        from1->setObjectName(QString::fromUtf8("from1"));
        from1->setGeometry(QRect(20, 310, 51, 25));
        tip = new QPushButton(centralWidget);
        tip->setObjectName(QString::fromUtf8("tip"));
        tip->setGeometry(QRect(18, 30, 151, 25));
        to1 = new QPushButton(centralWidget);
        to1->setObjectName(QString::fromUtf8("to1"));
        to1->setGeometry(QRect(80, 310, 51, 25));
        from2 = new QPushButton(centralWidget);
        from2->setObjectName(QString::fromUtf8("from2"));
        from2->setGeometry(QRect(190, 310, 51, 25));
        from3 = new QPushButton(centralWidget);
        from3->setObjectName(QString::fromUtf8("from3"));
        from3->setGeometry(QRect(360, 310, 51, 25));
        hint3 = new QLabel(centralWidget);
        hint3->setObjectName(QString::fromUtf8("hint3"));
        hint3->setGeometry(QRect(370, 260, 81, 20));
        newGame = new QPushButton(centralWidget);
        newGame->setObjectName(QString::fromUtf8("newGame"));
        newGame->setGeometry(QRect(308, 30, 161, 25));
        pic1 = new QLabel(centralWidget);
        pic1->setObjectName(QString::fromUtf8("pic1"));
        pic1->setGeometry(QRect(20, 70, 121, 191));
        pic2 = new QLabel(centralWidget);
        pic2->setObjectName(QString::fromUtf8("pic2"));
        pic2->setGeometry(QRect(180, 70, 121, 191));
        pic3 = new QLabel(centralWidget);
        pic3->setObjectName(QString::fromUtf8("pic3"));
        pic3->setGeometry(QRect(350, 70, 121, 191));
        vol1 = new QLabel(centralWidget);
        vol1->setObjectName(QString::fromUtf8("vol1"));
        vol1->setGeometry(QRect(20, 280, 111, 20));
        vol2 = new QLabel(centralWidget);
        vol2->setObjectName(QString::fromUtf8("vol2"));
        vol2->setGeometry(QRect(190, 280, 111, 20));
        vol3 = new QLabel(centralWidget);
        vol3->setObjectName(QString::fromUtf8("vol3"));
        vol3->setGeometry(QRect(360, 280, 111, 20));
        hint2 = new QLabel(centralWidget);
        hint2->setObjectName(QString::fromUtf8("hint2"));
        hint2->setGeometry(QRect(210, 260, 81, 20));
        hint1 = new QLabel(centralWidget);
        hint1->setObjectName(QString::fromUtf8("hint1"));
        hint1->setGeometry(QRect(40, 260, 81, 20));
        shouldGet = new QLabel(centralWidget);
        shouldGet->setObjectName(QString::fromUtf8("shouldGet"));
        shouldGet->setGeometry(QRect(36, 0, 341, 20));
        desVolume = new QLabel(centralWidget);
        desVolume->setObjectName(QString::fromUtf8("desVolume"));
        desVolume->setGeometry(QRect(400, 0, 67, 21));
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 492, 22));
        menuBuckets = new QMenu(menuBar);
        menuBuckets->setObjectName(QString::fromUtf8("menuBuckets"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuBuckets->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        to3->setText(QApplication::translate("MainWindow", "to", 0, QApplication::UnicodeUTF8));
        to2->setText(QApplication::translate("MainWindow", "to", 0, QApplication::UnicodeUTF8));
        from1->setText(QApplication::translate("MainWindow", "from", 0, QApplication::UnicodeUTF8));
        tip->setText(QApplication::translate("MainWindow", "Hint", 0, QApplication::UnicodeUTF8));
        to1->setText(QApplication::translate("MainWindow", "to", 0, QApplication::UnicodeUTF8));
        from2->setText(QApplication::translate("MainWindow", "from", 0, QApplication::UnicodeUTF8));
        from3->setText(QApplication::translate("MainWindow", "from", 0, QApplication::UnicodeUTF8));
        hint3->setText(QString());
        newGame->setText(QApplication::translate("MainWindow", "New game", 0, QApplication::UnicodeUTF8));
        pic1->setText(QString());
        pic2->setText(QString());
        pic3->setText(QString());
        vol1->setText(QString());
        vol2->setText(QString());
        vol3->setText(QString());
        hint2->setText(QString());
        hint1->setText(QString());
        shouldGet->setText(QString());
        desVolume->setText(QString());
        menuBuckets->setTitle(QApplication::translate("MainWindow", "Buckets", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
