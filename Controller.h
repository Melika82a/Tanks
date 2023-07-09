#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QObject>
#include <QGraphicsScene>
#include <QTimer>
#include <QGraphicsRectItem>
#include <Tank.h>
#include <objects.h>

class Controller : public QObject
{
    Q_OBJECT
    friend class View;
private:
    QGraphicsScene * scene;
    QTimer * ctimer;
    QGraphicsRectItem * holder;
    QList <Tank *> TankList;
    QList <objects *> objectsList;

public:
    explicit Controller(QObject *parent = nullptr);
    ~Controller();
    void addTank();
signals:

};

#endif // CONTROLLER_H
