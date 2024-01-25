#include "threedviewer.h"
#include "ui_threedviewer.h"

ThreeDViewer::ThreeDViewer(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ThreeDViewer)
{
    ui->setupUi(this);
}

ThreeDViewer::~ThreeDViewer()
{
    delete ui;
}
