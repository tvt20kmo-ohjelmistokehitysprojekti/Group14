#include "menu.h"
#include "ui_menu.h"
#include "nosto.h"
#include "saldo.h"
#include "tapahtumat.h"

menu::menu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::menu)
{
    ui->setupUi(this);
}

menu::~menu()
{
    delete ui;
}

void menu::on_btnNosto_clicked()
{

}

void menu::on_btnSaldo_clicked()
{

}

void menu::on_btnTapahtumat_clicked()
{

}
