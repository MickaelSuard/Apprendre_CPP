#ifndef IHM_H
#define IHM_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class IHM; }
QT_END_NAMESPACE

class IHM : public QMainWindow
{
    Q_OBJECT

public:
    IHM(QWidget *parent = nullptr);
    ~IHM();

private:
    Ui::IHM *ui;
};
#endif // IHM_H
