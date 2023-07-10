#include "View.h"


View::View() : QGraphicsView()
{
    //create view controller
    viewController = new Controller();

    //create scene

    setScene(viewController->scene);

    //set background image
    setBackgroundBrush(QBrush(QImage(":/images/background.jpg")));

    //set fixed size
    setFixedSize(1620,780);

    //delete scrollbars
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    //set background music
    viewPlayer = new QMediaPlayer();
    viewPlayer->setMedia(QUrl("qrc:/music/Overlord-Battle.mp3"));
    viewPlayer->play();

    //initialize seconds to zero
    seconds = 0;

    //start timer
    viewTimer = new QTimer();
    viewTimer->start(1000);
    connect(viewTimer,SIGNAL(timeout),this,SLOT(increment_time()));
}

View::~View()
{
    delete viewTimer;
    delete viewPlayer;
    delete viewController;
}

void View::increment_time()
{
    ++seconds;
}
