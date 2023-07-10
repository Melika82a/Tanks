#include "Tank.h"

Tank::Tank(const int& pixPer20MiliSec, QGraphicsItem * parent):QObject(), QGraphicsPixmapItem(parent)
{
    //set picture
    setPixmap(QPixmap(":/images/tankpic.png"));

    //create player for tank sound
    tankplayer = new QMediaPlayer();
    tankplayer->setMedia(QUrl("qrc:/music/tankride.wav"));
    tankplayer->play();
}
