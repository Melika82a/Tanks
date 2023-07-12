#ifndef MAPCREATOR_H
#define MAPCREATOR_H
#include <QObject>
#include <QFile>
#include <QDebug>
#include <QTextStream>
#include <cstdlib>
#include "objects.h"
#include <QGraphicsPixmapItem>
#include "Controller.h"

class mapCreator : public QObject
{
    Q_OBJECT
public:
    mapCreator(QString str,int row = 13 , int col = 27);

private :
    int row;
    int col;
    QString character;
};

#endif // MAPCREATOR_H
