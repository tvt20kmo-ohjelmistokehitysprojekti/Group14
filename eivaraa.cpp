#include "eivaraa.h"
#include "ui_eivaraa.h"
#include "nosto.h"

eivaraa::eivaraa(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::eivaraa)
{
    ui->setupUi(this);
}

eivaraa::~eivaraa()
{
    delete ui;
}

void eivaraa::on_btnPalaa3_clicked()
{
    nosto *no = new nosto();
    no->show();
    this->close();
}
