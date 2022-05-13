#include "basededonnees.h"
#include "ui_basededonnees.h"

BaseDeDonnees::BaseDeDonnees(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::BaseDeDonnees)
{
    ui->setupUi(this);
}

BaseDeDonnees::~BaseDeDonnees()
{
    delete ui;
}

