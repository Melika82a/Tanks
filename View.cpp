#include "View.h"

View::View() : QGraphicsView()
{
    //create scene
    scene = new QGraphicsScene();
    scene->setSceneRect(0, 0, 1620,780);
    setScene(scene);

    //set background image
    setBackgroundBrush(QBrush(QImage(":/images/background.jpg")));

    //set fixed size
    setFixedSize(1620,780);

}
