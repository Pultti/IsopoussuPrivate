#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>

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

    void numberClickHandler();
    void enterClickHandler();
    void resetClickHandler();
    void addsupmuldivClickHandler();
    void resetLineEdits();


private:
    Ui::MainWindow *ui;
    QString number1, number2;
    int state;
    float result;
    short operand;
    void initializeVariables();


};
#endif // MAINWINDOW_H
