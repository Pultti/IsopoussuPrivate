#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // connect(senderAddress,SIGNAL(function1()),
    //           receiverAddress,SLOT(function2());
    connect(ui->CroneToEuro,SIGNAL(clicked()),
            this,SLOT(CroneToEuroHandler()));
    connect(ui->EuroToCrone,SIGNAL(clicked()),
            this,SLOT(euroToCroneHandler()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::euroToCroneHandler()
{
    QString luku = ui->Euros->text();
    euro = luku.toFloat();
    crone = euro / rate;
    ui->Crones->setText(QString::number(crone));
}

void MainWindow::CroneToEuroHandler()
{
    QString luku = ui->Euros->text();
    euro = luku.toFloat();
    crone = euro / rate;
    ui->Crones->setText(QString::number(crone));
}


