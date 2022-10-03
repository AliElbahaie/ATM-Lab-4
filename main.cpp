#include "loginn.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Loginn w;
    w.show();
    return a.exec();
}
