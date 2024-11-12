#include "mainwindow.h"
#include "glview.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    glView win;
    win.show();
    //win.showFullScreen();


    // MainWindow w;
    // w.show();

    return a.exec();
}
