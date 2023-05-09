#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "qlabel.h"
#include "qprogressbar.h"
#include "qpushbutton.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
   explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    // UI elements
    QLabel *player1TimeLabel;
    QLabel *player2TimeLabel;
    QProgressBar *player1TimeBar;
    QProgressBar *player2TimeBar;
    QPushButton *player1TimeButton;
    QPushButton *player2TimeButton;
    QPushButton *startGameButton;
    QPushButton *switchPlayer1Button;
    QPushButton *switchPlayer2Button;

      int player1Time = 0;
      int player2Time = 0;
      bool isPlayer1Turn = false;
      QTimer *timer;
};
#endif // MAINWINDOW_H
