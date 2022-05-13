#include "threadavecwidget.h"
#include "ui_threadavecwidget.h"

ThreadAvecWidget::ThreadAvecWidget(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ThreadAvecWidget)
{
    ui->setupUi(this);
}

ThreadAvecWidget::~ThreadAvecWidget()
{
    delete ui;
}

