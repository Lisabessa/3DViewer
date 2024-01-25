#ifndef THREEDVIEWER_H
#define THREEDVIEWER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class ThreeDViewer;
}
QT_END_NAMESPACE

class ThreeDViewer : public QMainWindow
{
    Q_OBJECT

public:
    ThreeDViewer(QWidget *parent = nullptr);
    ~ThreeDViewer();

private:
    Ui::ThreeDViewer *ui;
};
#endif // THREEDVIEWER_H
