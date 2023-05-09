#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QProgressBar>
#include <QLabel>
#include <QTimer>
#include <QInputDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void onStartGameClicked();
    void onSwitchPlayerClicked();
    void onTimerTimeout();

private:
    Ui::MainWindow *ui;
    void updateProgressBar();
    void setGameInfoText(QString text, short fontSize);

    QPushButton* m_startGameButton;
    QPushButton* m_switchPlayerButton;
    QProgressBar* m_player1ProgressBar;
    QProgressBar* m_player2ProgressBar;
    QLabel* m_gameInfoLabel;
    QTimer* m_timer;

    int m_player1Time;
    int m_player2Time;
    int m_gameTime;
    int m_currentPlayer; // 1 for player 1, 2 for player 2
    bool m_gameStarted;
};

#endif // MAINWINDOW_H
