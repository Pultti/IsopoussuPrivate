#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    initializeVariables();
    ui->setupUi(this);

    connect(ui->n0,SIGNAL(clicked()),
            this,SLOT(numberClickHandler()));

    connect(ui->n1,SIGNAL(clicked()),
            this,SLOT(numberClickHandler()));

    connect(ui->n2,SIGNAL(clicked()),
            this,SLOT(numberClickHandler()));

    connect(ui->n3,SIGNAL(clicked()),
            this,SLOT(numberClickHandler()));

    connect(ui->n4,SIGNAL(clicked()),
            this,SLOT(numberClickHandler()));

    connect(ui->n5,SIGNAL(clicked()),
            this,SLOT(numberClickHandler()));

    connect(ui->n6,SIGNAL(clicked()),
            this,SLOT(numberClickHandler()));

    connect(ui->n7,SIGNAL(clicked()),
            this,SLOT(numberClickHandler()));

    connect(ui->n8,SIGNAL(clicked()),
            this,SLOT(numberClickHandler()));

    connect(ui->n9,SIGNAL(clicked()),
            this,SLOT(numberClickHandler()));
//
    connect(ui->Enter,SIGNAL(clicked()),
            this,SLOT(enterClickHandler()));

    connect(ui->Reset,SIGNAL(clicked()),
            this,SLOT(resetClickHandler()));
//
    connect(ui->divHandler,SIGNAL(clicked()),
            this,SLOT(addsupmuldivClickHandler()));

    connect(ui->subHandler,SIGNAL(clicked()),
            this,SLOT(addsupmuldivClickHandler()));

    connect(ui->multiplyHandler,SIGNAL(clicked()),
            this,SLOT(addsupmuldivClickHandler()));

    connect(ui->addHandler,SIGNAL(clicked()),
            this,SLOT(addsupmuldivClickHandler()));
}

    MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numberClickHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();

    qDebug() << "1" << name;

     if (state==0)
     {
         //vastaanotetaan numero 1
         number1 = number1 + name.right(1);
         ui->num1->setText(number1);
     }
     else
     {
         //vastaanotetaan numero 2
         qDebug() << "else kohta";
         number2 = number2 + name.right(1);
         ui->num2->setText(number2);
     }

}

void MainWindow::enterClickHandler()
{
     float n1 = number1.toFloat();
     float n2 = number2.toFloat();

 //    qDebug() << "n1 = "<<n1 << "n2 = "<<n2 ;

     switch(operand){
     //tehdään caseja addsupmuldivClickHandleria varten
     case 0:
        result = n1 + n2;
         break;
     case 1:
         result = n1 - n2;
         break;
     case 2:
         result = n1 / n2;
         break;
     case 3:
         result = n1 * n2;
     break;
     default:
         qDebug() << "Operaatiota ei määritetty";

     }

    QString Qresult = QString::number(result);

     ui->result->setText(Qresult);


      // tehdään switch jolla valitaan oikea laskutoimitus operand muuttujan perusteella
      // number1 ja number2 on stringei jotka muutetaa floatiksi ennen laskutoimitusta
      // tulos tallennetaan result ja muutetaan takas Qstringiksi
      // result tulos esitetään 3 lineEditis

}


void MainWindow::resetClickHandler()
{
    initializeVariables();
  //    ui->num1->setText(number1);
  //  ui->num2->setText(number2);
  //   ui->result->setText(0);
     resetLineEdits();
     //Toinen tapa tyhjentää rivit
}



void MainWindow::addsupmuldivClickHandler()
{
    state = 1;

         QPushButton * button = qobject_cast<QPushButton*>(sender());
         QString name = button->objectName();

    if (name == "addHandler")
    {
        operand = 0;
    }
    else if (name == "subHandler")
    {
        operand = 1;
    }
    else if (name == "divHandler")
    {
        operand = 2;
    }
    else if (name == "multiplyHandler")
    {
        operand = 3;
    }
    else
    {
        operand = 0;
    }
}


void MainWindow::initializeVariables()
{
    //Tää koko määritelmä piti tehdä että reset toimii

    operand = -1;
    number1 = "";
    number2 = "";
    state = 0;
    result = 0;

}



void MainWindow::resetLineEdits()
{
    //Vaihtoehtoinen tapa rivien tyhjentämiseen
    ui->num1->clear();
    ui->num2->clear();
    ui->result->clear();
}

