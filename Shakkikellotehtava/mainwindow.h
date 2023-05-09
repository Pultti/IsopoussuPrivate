#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    /* enum class Turn {
           Player,
           Opponent
       }; */

public slots:
    void startTimeHandler();
    void timeoutHandler();
    void timeoutHandler2();

    void switchPlayer();


private:
    Ui::MainWindow *ui;
    QTimer* pQTimer;
    int gameTime = 0;

    int player1Time;
    int player2Time;
    bool currentPlayer;
 //  Turn m_turn;
};
#endif // MAINWINDOW_H

