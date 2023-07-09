#include "View.h"
#include <QMediaPlayer>

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

    //delete scrollbars
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    //set background music
    auto musicPlayer = new QMediaPlayer();
    musicPlayer->setMedia(QUrl("qrc:/music/Overlord-Battle.mp3"));
    musicPlayer->play();
}
