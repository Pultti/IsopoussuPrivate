#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    pQTimer = new QTimer(this);

    ui->setupUi(this);

    connect(ui->pushButton_2,SIGNAL(clicked()),
            this,SLOT(startTimeHandler()));

    connect(pQTimer,SIGNAL(timeout()),
            this,SLOT(timeoutHandler()));

    connect(pQTimer,SIGNAL(timeout()),
            this,SLOT(timeoutHandler2()));



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::startTimeHandler()
{
   // QString luettu = ui->lyhyt->text();
    QString luettu = ui->lyhyt->text();
    bool gameStart;
    int luku = luettu.toInt(&gameStart);
    if(gameStart==true)
    {
        ui->progressBar->setValue(luku);
        ui->progressBar_2->setValue(luku);
    }
    else
    {
       qDebug()<<"ei ole luku ei onnistu muuttaminen";
    }
    pQTimer->start(100);   //Muuta takas 1000 kun valmis
}

void MainWindow::timeoutHandler()
{
    gameTime++;
    ui->progressBar->setValue(gameTime);

}

void MainWindow::timeoutHandler2()
{
    gameTime++;
    ui->progressBar_2->setValue(gameTime);
}


void MainWindow::switchPlayer()
{

}


/*
void MainWindow::handlePlayerTurn() {
    switch (m_turn) {
        case Turn::Player:
            // Handle the player's turn
            // ...

            // Switch to the opponent's turn
            m_turn = Turn::Opponent;

            // Start the opponent's timer
            startOpponentTimer();
            break;

        case Turn::Opponent:
            // It's not the player's turn, do nothing
            break;
    }
}
*/
