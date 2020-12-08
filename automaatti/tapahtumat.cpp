#include "tapahtumat.h"
#include "ui_tapahtumat.h"

tapahtumat::tapahtumat(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tapahtumat)
{
    ui->setupUi(this);
}

tapahtumat::~tapahtumat()
{
    delete ui;
}
