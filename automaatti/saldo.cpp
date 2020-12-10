#include "saldo.h"
#include "ui_saldo.h"
#include "nosto.h"
#include "menu.h"

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

void saldo::on_btnPalaa1_clicked()
{
    menu *me = new menu();
    me->show();
    this->close();
}
