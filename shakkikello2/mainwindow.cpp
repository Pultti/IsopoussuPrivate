#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtWidgets>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    // Initialize member variables
    player1TimeBar = new QProgressBar(this);
    player1TimeBar->setValue(100);
    player1TimeLabel = new QLabel("Player 1 Time", this);
    player1TimeButton = new QPushButton("Switch Player", this);
    player2TimeBar = new QProgressBar(this);
    player2TimeBar->setValue(100);
    player2TimeLabel = new QLabel("Player 2 Time", this);
    player2TimeButton = new QPushButton("Switch Player", this);
    startGameButton = new QPushButton("START GAME", this);
    isPlayer1Turn = true;
    player1Time = 0;
    player2Time = 0;

    connect(player1TimeButton, &QPushButton::clicked, this, &MainWindow::player1Time);
    connect(player2TimeButton, &QPushButton::clicked, this, &MainWindow::player2Time);
    connect(startGameButton, &QPushButton::clicked, this, &::MainWindow::timer);
      connect(switchPlayer1Button, &QPushButton::clicked, this, &MainWindow::switchPlayer1Button);
      connect(switchPlayer2Button, &QPushButton::clicked, this, &MainWindow::switchPlayer2Button);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void setPlayer1Time() {
        // get the player 1 time from the user and update the progress bar
        player1Time = QInputDialog::getInt(this, "Player 1 Time", "Enter the time for Player 1 in seconds:");
        player1TimeBar->setValue(100);
    }

    void setPlayer2Time() {
        // get the player 2 time from the user and update the progress bar
        player2Time = QInputDialog::getInt(this, "Player 2 Time", "Enter the time for Player 2 in seconds:");
        player2TimeBar->setValue(100);
    }

    void startGame() {
        // start the game by setting the turn to player 1 and starting their timer
        isPlayer1Turn = true;
        player1TimeBar->setValue(100);
    }
