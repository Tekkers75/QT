/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit_x;
    QPushButton *pushButton_calc;
    QLabel *label_ResultA;
    QLineEdit *lineEdit_y;
    QLineEdit *lineEdit_z;
    QLabel *label_ResultB;
    QLabel *label_Quest;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(380, 276);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        lineEdit_x = new QLineEdit(centralwidget);
        lineEdit_x->setObjectName("lineEdit_x");
        lineEdit_x->setGeometry(QRect(30, 80, 113, 22));
        lineEdit_x->setAutoFillBackground(false);
        pushButton_calc = new QPushButton(centralwidget);
        pushButton_calc->setObjectName("pushButton_calc");
        pushButton_calc->setGeometry(QRect(50, 180, 75, 24));
        label_ResultA = new QLabel(centralwidget);
        label_ResultA->setObjectName("label_ResultA");
        label_ResultA->setGeometry(QRect(180, 80, 171, 41));
        label_ResultA->setScaledContents(true);
        lineEdit_y = new QLineEdit(centralwidget);
        lineEdit_y->setObjectName("lineEdit_y");
        lineEdit_y->setGeometry(QRect(30, 110, 113, 22));
        lineEdit_z = new QLineEdit(centralwidget);
        lineEdit_z->setObjectName("lineEdit_z");
        lineEdit_z->setGeometry(QRect(30, 140, 113, 22));
        label_ResultB = new QLabel(centralwidget);
        label_ResultB->setObjectName("label_ResultB");
        label_ResultB->setGeometry(QRect(180, 120, 171, 41));
        label_Quest = new QLabel(centralwidget);
        label_Quest->setObjectName("label_Quest");
        label_Quest->setGeometry(QRect(30, 0, 341, 71));
        label_Quest->setPixmap(QPixmap(QString::fromUtf8("\320\267\320\260\320\264\320\260\320\275\320\270\320\265.png")));
        label_Quest->setScaledContents(false);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 380, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lineEdit_x->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 X", nullptr));
        pushButton_calc->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        label_ResultA->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202 A", nullptr));
        lineEdit_y->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 Y", nullptr));
        lineEdit_z->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 Z", nullptr));
        label_ResultB->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202 B", nullptr));
        label_Quest->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
