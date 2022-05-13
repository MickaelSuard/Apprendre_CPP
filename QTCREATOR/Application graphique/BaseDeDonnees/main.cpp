#include "basededonnees.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BaseDeDonnees w;
    w.show();
    return a.exec();
}
