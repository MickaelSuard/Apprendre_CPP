#include "compte.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Compte w;
    w.show();
    return a.exec();
}
