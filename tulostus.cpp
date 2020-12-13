#include "tulostus.h"
#include "ui_tulostus.h"

tulostus::tulostus(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tulostus)
{
    ui->setupUi(this);
}

tulostus::~tulostus()
{
    delete ui;
}
