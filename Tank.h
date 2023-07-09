#ifndef TANK_H
#define TANK_H

#include <QString>
class Tank
{
public:
    Tank();

private:
    int type;
    int damage;
    int speed;
    health tankHealth;
    QString tank_ID;
    //I dont know how we work with angles!
    int angle;

};

#endif // TANK_H
