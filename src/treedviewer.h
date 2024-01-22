#ifndef TREEDVIEWER_H
#define TREEDVIEWER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class TreeDViewer;
}
QT_END_NAMESPACE

class TreeDViewer : public QMainWindow
{
    Q_OBJECT

public:
    TreeDViewer(QWidget *parent = nullptr);
    ~TreeDViewer();

private:
    Ui::TreeDViewer *ui;
};
#endif // TREEDVIEWER_H
