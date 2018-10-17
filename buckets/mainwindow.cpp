#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "filling.h"
#include <stdio.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    tmr = new QTimer(this); // Создаем объект класса QTimer и передаем адрес переменной
    tmr->setInterval(1000); // Задаем интервал таймера
    tmr->start();
}

MainWindow::~MainWindow()
{
    delete ui;
}

//when you click on this button
//it shows you a little hint, where does it belong
//also it remembers what you've clicked
void MainWindow::on_from1_clicked()
{
    ui->hint1->setText("from this");
    QTimer::singleShot(1000, ui->hint1, SLOT(clear()));
    from = ui->from1;
}

void MainWindow::on_to1_clicked()
{
    ui->hint1->setText("to this");
    QTimer::singleShot(1000, ui->hint1, SLOT(clear()));
    to = ui->to1;
    //checking is everything alright
    if ((from != nullptr) && (from != ui->from1)){
        //do refillings
        if (from == ui->from2){
            if (!(start->two->getVolume() + start->one->getVolume() >= start->one->getMaxVolume())){
           start->one->refilling(start->two->getVolume());
           start->two->refill(start->one);
            }
        }
        if (from == ui->from3){
            if (!(start->two->getVolume() + start->one->getVolume() >= start->one->getMaxVolume())){
            start->one->refilling(start->three->getVolume());
            start->three->refill(start->one);
        }
        }
        from = nullptr;
        to = nullptr;

        //renew pics
        makepics(start->one, ui->pic1);
        makepics(start->two, ui->pic2);
        makepics(start->three, ui->pic3);

        //renew numbers
        ui->vol1->setNum(start->one->getVolume());
        ui->vol2->setNum(start->two->getVolume());
        ui->vol3->setNum(start->three->getVolume());

        //if no way that you could go further
        if (!(start->check_bool(start))){
            QMessageBox::warning(this, "No chance", "From this position you can't win\n You'd better start a new game\n or take a step back");
            //message that YOU LOSE
        }

        //if you win it congrats you and cleans the mess
        if (start->one->getVolume() == start->getDesVolume()){
            QMessageBox::information(this, "End of game", "Congratulations!\n You've won!");
            cleaning();
        }
    }
}

void MainWindow::on_from2_clicked()
{
     ui->hint2->setText("from this");
     QTimer::singleShot(1000, ui->hint2, SLOT(clear()));
     from = ui->from2;
}

void MainWindow::on_to2_clicked()
{
     ui->hint2->setText("to this");
     QTimer::singleShot(1000, ui->hint2, SLOT(clear()));
     to = ui->to2;
     if ((from != nullptr) && (from != ui->from2)){
         //do refillings

         if (from == ui->from1){
            start->two->refilling(start->two->getVolume());
            start->one->refill(start->two);
         }

         from = nullptr;
         to = nullptr;

         makepics(start->one, ui->pic1);
         makepics(start->two, ui->pic2);
         makepics(start->three, ui->pic3);

         ui->vol1->setNum(start->one->getVolume());
         ui->vol2->setNum(start->two->getVolume());
         ui->vol3->setNum(start->three->getVolume());

         if (!(start->check_bool(start))){
             QMessageBox::warning(this, "No chance", "From this position you can't win\n You'd better start a new game\n or take a step back");
         }

         if (start->one->getVolume() == start->getDesVolume()){
             QMessageBox::information(this, "End of game", "Congratulations!\n You've won!");
             cleaning();
         }
}
}

void MainWindow::on_from3_clicked()
{
     ui->hint3->setText("from this");
     QTimer::singleShot(1000, ui->hint3, SLOT(clear()));
     from = ui->from3;
}

void MainWindow::on_to3_clicked()
{
     ui->hint3->setText("to this");
     QTimer::singleShot(1000, ui->hint3, SLOT(clear()));
     to = ui->to3;
     if (from != nullptr){

         //do refillings
         if (from == ui->from1){
             start->three->refilling(start->three->getVolume());
             start->one->refill(start->three);
         }
         from = nullptr;
         to = nullptr;

         makepics(start->one, ui->pic1);
         makepics(start->two, ui->pic2);
         makepics(start->three, ui->pic3);

         ui->vol1->setNum(start->one->getVolume());
         ui->vol2->setNum(start->two->getVolume());
         ui->vol3->setNum(start->three->getVolume());

         if (!(start->check_bool(start))){
             QMessageBox::warning(this, "No chance", "From this position you can't win\n You'd better start a new game\n or take a step back");
         }

         if (start->one->getVolume() == start->getDesVolume()){
             QMessageBox::information(this, "End of game", "Congratulations!\n You've won!");
             cleaning();
         }
     }
}

//method for giving a tip
void MainWindow::on_tip_clicked()
{
    //if game has started (checking by first bucket
    if (start->one->getVolume() != 0){
      filling::move next_move = start->get_tip(start);
      //checking what's inside the next_move
        if (next_move.from != nullptr && next_move.to != nullptr){
            if (next_move.to == start->two)
                QMessageBox::information(this, "Tip", "Put water from first bucket to the second one\n It should help");
            else
                QMessageBox::information(this, "Tip", "Put water from first bucket to the third one\n It should help");
    }
    else
        QMessageBox::information(this, "Tip", "It's strange, but there's no next move\nTry starting a new game\n or take a step back");

    }
}

//method for cleaning main window
void MainWindow::cleaning(){
    bucket* temp = new bucket(0);
    makepics(temp, ui->pic1);
    makepics(temp, ui->pic2);
    makepics(temp, ui->pic3);
    ui->vol1->clear();
    ui->vol2->clear();
    ui->vol3->clear();
    ui->desVolume->clear();
}

//starting new game
void MainWindow::on_newGame_clicked()
{
    QMessageBox::StandardButton newGame = QMessageBox::question(this, "New game", "Would you like to start a new game?\n",
                          QMessageBox::Yes | QMessageBox::No);
    if (newGame == QMessageBox::Yes){
        //if pressed "yes" generates numbers and sets pictures etc
        start->startNewGame();
        ui->vol1->setNum(start->one->getVolume());
        ui->vol2->setNum(start->two->getVolume());
        ui->vol3->setNum(start->three->getVolume());
        ui->shouldGet->setText("The volume you should get in 1st bucket to win:");
        ui->desVolume->setNum(start->getDesVolume());
        makepics(start->one, ui->pic1);
        makepics(start->two, ui->pic2);
        makepics(start->three, ui->pic3);
    }

}

//method for setting a picture
void MainWindow::makepics(bucket* buck, QLabel *pic){

    QPixmap halfpic(":/new/prefix1/pictures/half.png");
    QPixmap fullpic(":/new/prefix1/pictures/full.png");
    QPixmap emptypic(":/new/prefix1/pictures/empty.png");
    QPixmap ninepic(":/new/prefix1/pictures/nineTenth.png");
    QPixmap eightpic(":/new/prefix1/pictures/eightTenth.png");
    QPixmap sevenpic(":/new/prefix1/pictures/sevenTenth.png");
    QPixmap sixpic(":/new/prefix1/pictures/sixTenth.png");
    QPixmap fourpic(":/new/prefix1/pictures/fourTenth.png");
    QPixmap threepic(":/new/prefix1/pictures/threeTenth.png");
    QPixmap twopic(":/new/prefix1/pictures/twoTenth.png");
    QPixmap onepic(":/new/prefix1/pictures/oneTenth.png");
    //switch by closest multiple by ten
    //first bucket
    if (buck->getVolume() == 0)
        pic->setPixmap(emptypic);
    else if(buck->getVolume() > 0 && buck->getVolume() < 10)
        pic->setPixmap(onepic);
    else{
    switch(buck->getVolume() / 10 * 10){
    case(10):{
        pic->setPixmap(onepic);
        break;
    }
    case(20):{
        pic->setPixmap(twopic);
        break;
    }
    case(30):{
        pic->setPixmap(threepic);
        break;
    }
    case(40):{
        pic->setPixmap(fourpic);
        break;
        }
    case(50):{
        pic->setPixmap(halfpic);
        break;
    }
    case(60):{
        pic->setPixmap(sixpic);
        break;
    }
    case(70):{
        pic->setPixmap(sevenpic);
        break;
    }
    case(80):{
        pic->setPixmap(eightpic);
        break;
    }
    case(90):{
        pic->setPixmap(ninepic);
        break;
    }
    case(100):{
        pic->setPixmap(fullpic);
        break;
    }
    default:{
        pic->setPixmap(fullpic);
        break;
    }
    }
    }
    }
