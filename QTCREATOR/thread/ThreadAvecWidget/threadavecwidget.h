#ifndef THREADAVECWIDGET_H
#define THREADAVECWIDGET_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class ThreadAvecWidget; }
QT_END_NAMESPACE

class ThreadAvecWidget : public QMainWindow
{
    Q_OBJECT

public:
    ThreadAvecWidget(QWidget *parent = nullptr);
    ~ThreadAvecWidget();

private:
    Ui::ThreadAvecWidget *ui;
};
#endif // THREADAVECWIDGET_H
