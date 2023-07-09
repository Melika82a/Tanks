#ifndef PLAYER_H
#define PLAYER_H
#include <QString>
#include "Tank.h"
class Player
{
public:
    Player();

private:
    QString name;
    int score;
    Tank  chosenTank;


};

#endif // PLAYER_H
