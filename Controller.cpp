#include "Controller.h"

Controller::Controller(QObject *parent) : QObject(parent)
{
        //create scene
    scene = new QGraphicsScene();
    scene->setSceneRect(0, 0, 1620, 780);

        //create holder
    holder = new QGraphicsRectItem();
    holder->setRect(0, 0, 1620,780);

        //create and start ctimer
    ctimer = new QTimer();
    ctimer->start(50);

}

Controller::~Controller()
{
    delete holder;
    delete scene;
    delete ctimer;

}
