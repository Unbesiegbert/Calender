#include "calenderserver.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CalenderServer w;
    w.show();

    return a.exec();
}
