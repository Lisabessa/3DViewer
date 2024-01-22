/********************************************************************************
** Form generated from reading UI file 'treedviewer.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TREEDVIEWER_H
#define UI_TREEDVIEWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TreeDViewer
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TreeDViewer)
    {
        if (TreeDViewer->objectName().isEmpty())
            TreeDViewer->setObjectName("TreeDViewer");
        TreeDViewer->setWindowModality(Qt::WindowModal);
        TreeDViewer->resize(800, 600);
        centralwidget = new QWidget(TreeDViewer);
        centralwidget->setObjectName("centralwidget");
        TreeDViewer->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TreeDViewer);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 43));
        TreeDViewer->setMenuBar(menubar);
        statusbar = new QStatusBar(TreeDViewer);
        statusbar->setObjectName("statusbar");
        TreeDViewer->setStatusBar(statusbar);

        retranslateUi(TreeDViewer);

        QMetaObject::connectSlotsByName(TreeDViewer);
    } // setupUi

    void retranslateUi(QMainWindow *TreeDViewer)
    {
        TreeDViewer->setWindowTitle(QCoreApplication::translate("TreeDViewer", "TreeDViewer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TreeDViewer: public Ui_TreeDViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TREEDVIEWER_H
