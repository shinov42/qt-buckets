#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "filling.h"
#include <QMainWindow>
#include <QTimer>
#include <math.h>
#include <list>
#include "bucket.h"
#include <QLabel>
#include <QMessageBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);


    ~MainWindow();

private slots:

    //processing clicked buttons
    void on_from1_clicked();

    void on_to1_clicked();

    void on_from2_clicked();

    void on_to2_clicked();

    void on_from3_clicked();

    void on_to3_clicked();

    void on_newGame_clicked();

    void on_tip_clicked();

    //method for cleaning main window after user wins
    void cleaning();

    //method for choosing and setting picture
    void makepics(bucket*, QLabel*);

private:
    //an object of filling class to process the data
    filling *start = new filling(0, 0, 0, 0);

    //used for remembering where did player click
    QPushButton *from = nullptr;
    QPushButton *to = nullptr;

    //for timing
    QTimer *tmr;
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
