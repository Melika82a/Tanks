#ifndef VIEW_H
#define VIEW_H
#include <QMediaPlayer>
#include <QObject>
#include <QGraphicsView>
#include "Controller.h"
#include <QTimer>

class View :  public QGraphicsView
{
    Q_OBJECT
    friend class mapcreator;
private:
    QTimer *viewTimer;
    Controller * viewController;
    QMediaPlayer * viewPlayer;
    int seconds;

public:
    explicit View();
    ~View();
    void increment_time();
signals:

};

#endif // VIEW_H
