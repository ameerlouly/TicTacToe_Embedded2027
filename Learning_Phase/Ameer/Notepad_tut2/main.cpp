#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv); // Create application object
    MainWindow w;   // Create it
    w.show();   // Show the application on the screen


    return a.exec(); // Loops the application for handling
}
