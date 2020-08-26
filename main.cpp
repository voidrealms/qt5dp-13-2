#include <QCoreApplication>

/*
 What
 Cmake starting a script

 Desription
 Optional in Qt 5x
 Preferred in Qt 6x

 Why
 This is the industry standard

 Example
 Running a python file

 */

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    return a.exec();
}
