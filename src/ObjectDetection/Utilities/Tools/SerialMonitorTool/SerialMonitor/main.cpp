#include "serialmainwindow.h"
#include <QApplication>
#include <QTableView>
#include <serialportmodel.h>
#include <iostream>
#include <QTime>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SerialMainWindow w;
    w.show();
//    QTableView view;
//    SerialPortModel model;

//    view.setModel(&model);
////    QWidget widget;
//    view.show();
////    widget.setLayout();
    return a.exec();
}
