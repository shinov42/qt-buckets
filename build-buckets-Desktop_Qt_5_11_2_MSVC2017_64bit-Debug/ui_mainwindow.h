/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

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
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(492, 410);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        to3 = new QPushButton(centralWidget);
        to3->setObjectName(QStringLiteral("to3"));
        to3->setGeometry(QRect(420, 310, 51, 25));
        to2 = new QPushButton(centralWidget);
        to2->setObjectName(QStringLiteral("to2"));
        to2->setGeometry(QRect(250, 310, 51, 25));
        from1 = new QPushButton(centralWidget);
        from1->setObjectName(QStringLiteral("from1"));
        from1->setGeometry(QRect(20, 310, 51, 25));
        tip = new QPushButton(centralWidget);
        tip->setObjectName(QStringLiteral("tip"));
        tip->setGeometry(QRect(18, 30, 151, 25));
        to1 = new QPushButton(centralWidget);
        to1->setObjectName(QStringLiteral("to1"));
        to1->setGeometry(QRect(80, 310, 51, 25));
        from2 = new QPushButton(centralWidget);
        from2->setObjectName(QStringLiteral("from2"));
        from2->setGeometry(QRect(190, 310, 51, 25));
        from3 = new QPushButton(centralWidget);
        from3->setObjectName(QStringLiteral("from3"));
        from3->setGeometry(QRect(360, 310, 51, 25));
        hint3 = new QLabel(centralWidget);
        hint3->setObjectName(QStringLiteral("hint3"));
        hint3->setGeometry(QRect(370, 260, 81, 20));
        newGame = new QPushButton(centralWidget);
        newGame->setObjectName(QStringLiteral("newGame"));
        newGame->setGeometry(QRect(308, 30, 161, 25));
        pic1 = new QLabel(centralWidget);
        pic1->setObjectName(QStringLiteral("pic1"));
        pic1->setGeometry(QRect(20, 70, 121, 191));
        pic2 = new QLabel(centralWidget);
        pic2->setObjectName(QStringLiteral("pic2"));
        pic2->setGeometry(QRect(180, 70, 121, 191));
        pic3 = new QLabel(centralWidget);
        pic3->setObjectName(QStringLiteral("pic3"));
        pic3->setGeometry(QRect(350, 70, 121, 191));
        vol1 = new QLabel(centralWidget);
        vol1->setObjectName(QStringLiteral("vol1"));
        vol1->setGeometry(QRect(20, 280, 111, 20));
        vol2 = new QLabel(centralWidget);
        vol2->setObjectName(QStringLiteral("vol2"));
        vol2->setGeometry(QRect(190, 280, 111, 20));
        vol3 = new QLabel(centralWidget);
        vol3->setObjectName(QStringLiteral("vol3"));
        vol3->setGeometry(QRect(360, 280, 111, 20));
        hint2 = new QLabel(centralWidget);
        hint2->setObjectName(QStringLiteral("hint2"));
        hint2->setGeometry(QRect(210, 260, 81, 20));
        hint1 = new QLabel(centralWidget);
        hint1->setObjectName(QStringLiteral("hint1"));
        hint1->setGeometry(QRect(40, 260, 81, 20));
        shouldGet = new QLabel(centralWidget);
        shouldGet->setObjectName(QStringLiteral("shouldGet"));
        shouldGet->setGeometry(QRect(36, 0, 341, 20));
        desVolume = new QLabel(centralWidget);
        desVolume->setObjectName(QStringLiteral("desVolume"));
        desVolume->setGeometry(QRect(400, 0, 67, 21));
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 492, 22));
        menuBuckets = new QMenu(menuBar);
        menuBuckets->setObjectName(QStringLiteral("menuBuckets"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuBuckets->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        to3->setText(QApplication::translate("MainWindow", "to", nullptr));
        to2->setText(QApplication::translate("MainWindow", "to", nullptr));
        from1->setText(QApplication::translate("MainWindow", "from", nullptr));
        tip->setText(QApplication::translate("MainWindow", "Hint", nullptr));
        to1->setText(QApplication::translate("MainWindow", "to", nullptr));
        from2->setText(QApplication::translate("MainWindow", "from", nullptr));
        from3->setText(QApplication::translate("MainWindow", "from", nullptr));
        hint3->setText(QString());
        newGame->setText(QApplication::translate("MainWindow", "New game", nullptr));
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
        menuBuckets->setTitle(QApplication::translate("MainWindow", "Buckets", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
