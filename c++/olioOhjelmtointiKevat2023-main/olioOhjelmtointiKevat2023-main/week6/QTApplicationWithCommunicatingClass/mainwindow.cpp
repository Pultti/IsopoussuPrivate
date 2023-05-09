#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pmyClass = new myClass(this);

    connect(ui->nappi,SIGNAL(clicked()),
            this,SLOT(nappiHandler()),Qt::QueuedConnection);

    connect(pmyClass,SIGNAL(mySignal(QString)),
            this,SLOT(mySignalHandler(QString)),Qt::QueuedConnection);



}

MainWindow::~MainWindow()
{
    delete ui;
    //delete pmyClass;
}

void MainWindow::nappiHandler()
{
   pmyClass->sendSignal();
}

void MainWindow::mySignalHandler(QString s)
{
   ui->teksti->setText(s);
}

