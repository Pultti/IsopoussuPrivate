#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QVBoxLayout>
#include <QHBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    m_player1Time = 0;
    m_player2Time = 0;
    m_gameTime = 0;
    m_currentPlayer = 1;
    m_gameStarted = false;


    // Set progress bar range and initial value
    m_player1ProgressBar->setRange(0, 100);
    m_player1ProgressBar->setValue(100);
    m_player2ProgressBar->setRange(0, 100);
    m_player2ProgressBar->setValue(100);



    // Create timer and connect timeout signal to onTimerTimeout slot
    m_timer = new QTimer(this);
    connect(m_timer, &QTimer::timeout, this, &MainWindow::onTimerTimeout);

    // Connect button signals to slots
    connect(m_startGameButton, &QPushButton::clicked, this, &MainWindow::onStartGameClicked);
    connect(m_switchPlayerButton, &QPushButton::clicked, this, &MainWindow::onSwitchPlayerClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onStartGameClicked()
{

    // Prompt user to select game time
    bool ok;
   int gameTime = QInputDialog::getInt(this, tr("Select game time"), tr("Minutes:"), 1, 1, 60, 1, &ok);
   if (!ok) {
        return;
    }


    //
}
