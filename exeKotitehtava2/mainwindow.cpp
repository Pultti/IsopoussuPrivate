#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->nappi,SIGNAL(clicked(bool)),
            this,SLOT(clickHandler()));


    pDLL = new Dllkotitehtava1(this);
    connect(pDLL, SIGNAL(sendNumberToExe(int)),
            this,SLOT(receiveNumberFromDLL(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::clickHandler()
{
    pDLL->generate();
}

void MainWindow::receiveNumberFromDLL(int n)
{
    qDebug()<<"Exe vastaanotti numeron DLL:sta";
    ui->naytto->setText(QString::number(n));

}

