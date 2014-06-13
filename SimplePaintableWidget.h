#ifndef SIMPLE_PAINTABLE_WIDGET_H
#define SIMPLE_PAINTABLE_WIDGET_H

#include <QWidget>
#include <QPaintEvent>

class SimplePaintableWidget : public QWidget
{
    Q_OBJECT

public:
    SimplePaintableWidget(QWidget *parent);

    void paintDiagonal(QPaintEvent *event, QPainter painter);

protected:
    void paintEvent(QPaintEvent *event);

private:
    static const int widgetSize=200;
};

#endif // SIMPLE_PAINTABLE_WIDGET_H
