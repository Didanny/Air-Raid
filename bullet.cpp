#include <bullet.h>
#include <QTimer>
#include <QGraphicsScene>

Bullet::Bullet()
{
    // Draw rectangle
    setRect(0,0,10,50);

    // Connect to timer signal to bullet move slot
    QTimer *timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    // Start the timer
    timer->start(50);
}

void Bullet::move()
{
    // Move the bullet up
    setPos(x(),y() - 10);

    // Check if off screen, and delete if it is
    if (pos().y() + rect().height() < 0)
    {
        scene()->removeItem(this);
        delete this;
    }
}
