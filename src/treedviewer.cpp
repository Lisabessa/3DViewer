#include "treedviewer.h"
#include "ui_treedviewer.h"

TreeDViewer::TreeDViewer(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TreeDViewer)
{
    ui->setupUi(this);
}

TreeDViewer::~TreeDViewer()
{
    delete ui;
}
