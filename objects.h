#ifndef OBJECTS_H
#define OBJECTS_H
#include "game.h"
#include <QString>

class objects : public game
{
public:
    objects();
private:
    QString type;
    int health;
};

#endif // OBJECTS_H
