
#include "View.h"
#include <cstdlib>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // seed random number generator
    srand( time (0) );
    //objects wall,box,jungle;      //wrong i guess
    // create the game
    auto myView= new View();
    myView->show();

    return a.exec();
}
