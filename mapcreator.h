#ifndef MAPCREATOR_H
#define MAPCREATOR_H
#include <QObject>
#include <QFile>
#include "objects.h"

class mapCreator
{
    Q_OBJECT
public:
    mapCreator();

private :

    int row;
    int col;
    char character;
};

#endif // MAPCREATOR_H
