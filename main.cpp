#include "hostinfo.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HostInfo w;
    w.show();

    return a.exec();
}
