#ifndef CLIENTWIDGET_H
#define CLIENTWIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class ClientWidget; }
QT_END_NAMESPACE

class ClientWidget : public QWidget
{
    Q_OBJECT

public:
    ClientWidget(QWidget *parent = nullptr);
    ~ClientWidget();

private:
    Ui::ClientWidget *ui;
};
#endif // CLIENTWIDGET_H
