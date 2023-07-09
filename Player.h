#ifndef PLAYER_H
#define PLAYER_H
#include <QString>

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
