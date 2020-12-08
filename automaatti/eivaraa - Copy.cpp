#include "eivaraa.h"
#include "ui_eivaraa.h"

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
