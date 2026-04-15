#include "mainwindow.h"
#include "vueEchiquier.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    VueEchiquier v;
    v.show();
    // w.show();
    return QCoreApplication::exec();
}
