#ifndef CONTROLLER_H
#define CONTROLLER_H
#include <QGraphicsItem>
#include <QObject>
#include <QGraphicsScene>
#include <QTimer>
#include <QGraphicsRectItem>
#include <Tank.h>
#include <wall.h>

class Controller : public QObject
{
    Q_OBJECT
    friend class View;
    friend class mapcreator;
private:
    QGraphicsScene * scene;
    QTimer * ctimer;
    QGraphicsRectItem * holder;
    QList <Tank *> TankList;
    QList <wall *> wallList;

public:
    explicit Controller(QObject *parent = nullptr);
    ~Controller();
    void addTank();
    void addWall(int x, int y);
    void addBox(int x, int y);
    void addForest(int x, int y);


signals:

};

#endif // CONTROLLER_H
