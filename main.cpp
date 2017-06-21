/* Name: Joe Samuel David
 * Emal: joe.david@student.tut.fi
 * Student Ref: 267598 */

#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
