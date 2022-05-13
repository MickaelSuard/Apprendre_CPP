#ifndef BASEDEDONNEES_H
#define BASEDEDONNEES_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class BaseDeDonnees; }
QT_END_NAMESPACE

class BaseDeDonnees : public QWidget
{
    Q_OBJECT

public:
    BaseDeDonnees(QWidget *parent = nullptr);
    ~BaseDeDonnees();

private:
    Ui::BaseDeDonnees *ui;
};
#endif // BASEDEDONNEES_H
