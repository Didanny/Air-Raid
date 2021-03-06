#include <myrect.h>
#include <bullet.h>
#include <QKeyEvent>
#include <QGraphicsScene>

void MyRect::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Left)
    {
        setPos(x() - 10, y());
    }
    else if (event->key() == Qt::Key_Right)
    {
        setPos(x() + 10, y());
    }
    else if (event->key() == Qt::Key_Space)
    {
        // Create a bullet
        Bullet *bullet = new Bullet();
        bullet->setPos(x(),y());
        scene()->addItem(bullet);
    }
}
