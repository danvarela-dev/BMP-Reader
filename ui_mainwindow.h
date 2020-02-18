/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BMP_Viewer
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *BMP_Viewer)
    {
        if (BMP_Viewer->objectName().isEmpty())
            BMP_Viewer->setObjectName(QString::fromUtf8("BMP_Viewer"));
        BMP_Viewer->resize(800, 600);
        centralwidget = new QWidget(BMP_Viewer);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        BMP_Viewer->setCentralWidget(centralwidget);
        menubar = new QMenuBar(BMP_Viewer);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        BMP_Viewer->setMenuBar(menubar);
        statusbar = new QStatusBar(BMP_Viewer);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        BMP_Viewer->setStatusBar(statusbar);

        retranslateUi(BMP_Viewer);

        QMetaObject::connectSlotsByName(BMP_Viewer);
    } // setupUi

    void retranslateUi(QMainWindow *BMP_Viewer)
    {
        BMP_Viewer->setWindowTitle(QCoreApplication::translate("BMP_Viewer", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BMP_Viewer: public Ui_BMP_Viewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
