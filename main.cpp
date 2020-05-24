#include "mainwindow.h"
#include "books.h"
#include <QApplication>
#include <QString>
#include <QVector>
#include <iostream>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
