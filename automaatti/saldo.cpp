#include "saldo.h"
#include "ui_saldo.h"

saldo::saldo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::saldo)
{
    ui->setupUi(this);
}

saldo::~saldo()
{
    delete ui;
}
