#include "PaintingMainWindow.h"
#include "ui_paintingmainwindow.h"

PaintingMainWindow::PaintingMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PaintingMainWindow)
{
    ui->setupUi(this);
    setWindowTitle(tr("PaintingProject"));

    paintableWidget = new SimplePaintableWidget(ui->centralWidget);
    paintLineButton = new QPushButton(ui->centralWidget);
    paintLineButton->setText("Paint line");


    QGridLayout *layout = new QGridLayout();
    layout->addWidget(paintableWidget, 0, 0);
    layout->addWidget(paintLineButton, 1, 0);;
    ui->centralWidget->setLayout(layout);

    connect(paintLineButton, SIGNAL(clicked()), this, SLOT(paint()));

}

void PaintingMainWindow::paint(){
    paintableWidget->repaint();
}

PaintingMainWindow::~PaintingMainWindow()
{
    delete ui;
}
