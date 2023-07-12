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

        //

}

Controller::~Controller()
{
    delete holder;
    delete scene;
    delete ctimer;

}

void Controller::addWall(int x , int y)
{
    wallList.push_back(new wall {1,holder});
    //add to the scene
    scene->addItem(wallList.last());
    objectsList.last()->setpos(x,y);
}
