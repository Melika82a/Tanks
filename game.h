#ifndef GAME_H
#define GAME_H
#include "Player.h"
#include <QObject>

class game : public QObject
{
    Q_OBJECT
private:
    Player player1,player2;
    int object;
public:
    explicit game(QObject *parent = nullptr);

signals:

};

#endif // GAME_H
