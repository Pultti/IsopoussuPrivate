#include "ui.h"
#include "ui_ui.h"

UI::UI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UI)
{
    ui->setupUi(this);
}

UI::~UI()
{
    delete ui;
}
