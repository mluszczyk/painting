#include "SimplePaintableWidget.h"

#include <QPainter>
#include <QBrush>
#include <QWidget>

SimplePaintableWidget::SimplePaintableWidget(QWidget *parent)
    : QWidget(parent)
{
    setFixedSize(widgetSize, widgetSize);
}

void SimplePaintableWidget::paintEvent(QPaintEvent *event)
{
    QPainter painter;
    painter.begin(this);
    painter.fillRect(event->rect(), QBrush(Qt::red));
    painter.setPen(QPen(Qt::black));
    painter.setRenderHint(QPainter::Antialiasing);

    for(int i=0; i<event->rect().height();++i){
        painter.drawPoint(i,i);
    }

    painter.end();
}
