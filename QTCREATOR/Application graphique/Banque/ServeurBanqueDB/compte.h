#ifndef COMPTE_H
#define COMPTE_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Compte; }
QT_END_NAMESPACE

class Compte : public QWidget
{
    Q_OBJECT

public:
    Compte(QWidget *parent = nullptr);
    ~Compte();

private:
    Ui::Compte *ui;
};
#endif // COMPTE_H
