#include "toinenikkuna.h"
#include "ui_toinenikkuna.h"

ToinenIkkuna::ToinenIkkuna(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ToinenIkkuna)
{
    ui->setupUi(this);
}

ToinenIkkuna::~ToinenIkkuna()
{
    delete ui;
}
