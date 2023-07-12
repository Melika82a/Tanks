#ifndef OBJECTS_H
#define OBJECTS_H
#include <QGraphicsItem>
#include "game.h"
#include <QString>

class objects : public game
{
public:
    objects(int type, QGraphicsItem * parent);
private:

protected:
    int type;

};

#endif // OBJECTS_H
