#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->text1,SIGNAL(textChanged(QString)),
            this,SLOT(handleTextChanged(QString)));



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleTextChanged(QString s)
{
    qDebug()<<"handleTextChanged";
    static short n = 1;
    bool onnistuiko;
    short luku = s.toShort(&onnistuiko,10);

    if(onnistuiko == true)
    {
        qDebug()<<"QString => short onnistui luku = " << luku;
    }
    else
    {
        qDebug()<<"Qtring => short epäonnistui luku = "<< luku;
    }

    QString t = "Read:";
    t.append(s);
    //s = "";
    ui->Text2->setText(t);
    //ui->kolmas->setText(QString::number(n,16));
    n = n*10;

}

