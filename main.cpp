#include "pizzashopmenu.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PizzaShopMenu w;
    w.show();
    return a.exec();
}
