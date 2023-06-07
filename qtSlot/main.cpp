#include "slot.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Slot w;
    w.show();
    return a.exec();
}
