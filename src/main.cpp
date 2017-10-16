#include "view/mainwindow.h"
#include <QApplication>
#include <iostream>
using namespace std;
// TODO add serial port and Bluetooth To allow x,y,r transfer
//TODO add Android and raspberry pi

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();

}
