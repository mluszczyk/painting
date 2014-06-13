#ifndef PAINTING_MAIN_WINDOW_H
#define PAINTING_MAIN_WINDOW_H

#include <QMainWindow>
#include <QGridLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include "SimplePaintableWidget.h"

namespace Ui {
class PaintingMainWindow;
}

class PaintingMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit PaintingMainWindow(QWidget *parent = 0);
    ~PaintingMainWindow();

public slots:
    void paint();

private:
    Ui::PaintingMainWindow *ui;
    SimplePaintableWidget *paintableWidget;
    QPushButton* paintLineButton;

};

#endif // PAINTING_MAIN_WINDOW_H
