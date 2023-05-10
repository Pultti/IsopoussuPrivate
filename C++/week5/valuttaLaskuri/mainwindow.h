#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void euroToCroneHandler();
    void CroneToEuroHandler();


private:
    Ui::MainWindow *ui;
    float euro,crone;
    float rate = 0.088;
};
#endif // MAINWINDOW_H
