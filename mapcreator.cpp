#include "mapcreator.h"

mapCreator::mapCreator(QString str, int row, int col)
{
    QFile map(str);
    map.open(QFile::ReadOnly | QFile :: Text);
    QTextStream in(&map);
    character = in.read(1);
    for(int i=0; i<row; i++)
    {
        for (int j=0; j<col; j++)
        {
            qDebug()<<character;
            character = in.readLine();
            if(character==1)
            {
                 int x=i*60;
                 int y=j*60;
                 viewController->addwall(x,y);
                 //objects * wall = new objects(1);
                 //setPixmap(QPixmap(":/images/bricks.png"))
                 //wall->setpos(x,y);
            }
            else if(character==2)
            {
                //objects * box = new objects(2);

            }
            else if(character==3)
            {
                //objects * forest = new objects(3);
            }
        }
    }
    map.close();
}
