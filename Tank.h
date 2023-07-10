#ifndef TANK_H
#define TANK_H
#include <QObject>
#include <QTimer>
#include <QGraphicsPixmapItem>
#include "Health.h"
#include <QString>
#include <QMediaPlayer>
class Tank : public QObject , public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Tank(const int& pixPer20MiliSec,QGraphicsItem * parentf);

private:
    int type;
    int damage;
    int speed;
    Health tankHealth;
    QString tank_ID;
    //I dont know how we work with angles!
    int angle;
    int pixPer20MiliSec;
    QMediaPlayer * tankplayer;

};

#endif // TANK_H
