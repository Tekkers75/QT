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
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_clear;
    QAction *action_author;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_Quest;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;
    QLabel *label_nameX;
    QLineEdit *lineEdit_x;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_nameY;
    QLineEdit *lineEdit_y;
    QVBoxLayout *verticalLayout;
    QLabel *label_nameZ;
    QLineEdit *lineEdit_z;
    QPushButton *pushButton_calc;
    QLabel *label_ResultA;
    QLabel *label_ResultB;
    QPlainTextEdit *plainTextEdit_report;
    QVBoxLayout *verticalLayout_4;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(339, 551);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("background: rgb(130, 178, 255)"));
        action_clear = new QAction(MainWindow);
        action_clear->setObjectName("action_clear");
        action_author = new QAction(MainWindow);
        action_author->setObjectName("action_author");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_8 = new QVBoxLayout(centralwidget);
        verticalLayout_8->setObjectName("verticalLayout_8");
        label_Quest = new QLabel(centralwidget);
        label_Quest->setObjectName("label_Quest");
        label_Quest->setStyleSheet(QString::fromUtf8("background: rgb(167, 236, 255)"));
        label_Quest->setPixmap(QPixmap(QString::fromUtf8(":/Image.png")));
        label_Quest->setScaledContents(false);

        verticalLayout_8->addWidget(label_Quest);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        label_nameX = new QLabel(centralwidget);
        label_nameX->setObjectName("label_nameX");
        label_nameX->setMaximumSize(QSize(111, 20));
        label_nameX->setStyleSheet(QString::fromUtf8("font: 14pt \"Courier New\";\n"
"color: rgb(0, 0, 0)"));

        verticalLayout_3->addWidget(label_nameX);

        lineEdit_x = new QLineEdit(centralwidget);
        lineEdit_x->setObjectName("lineEdit_x");
        lineEdit_x->setMaximumSize(QSize(113, 22));
        lineEdit_x->setAutoFillBackground(false);
        lineEdit_x->setStyleSheet(QString::fromUtf8("font: italic 12pt \"Courier New\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(lineEdit_x);


        verticalLayout_5->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_nameY = new QLabel(centralwidget);
        label_nameY->setObjectName("label_nameY");
        label_nameY->setStyleSheet(QString::fromUtf8("font: 14pt \"Courier New\";\n"
"\n"
"color: rgb(0, 0, 0)"));

        verticalLayout_2->addWidget(label_nameY);

        lineEdit_y = new QLineEdit(centralwidget);
        lineEdit_y->setObjectName("lineEdit_y");
        lineEdit_y->setMaximumSize(QSize(113, 22));
        lineEdit_y->setStyleSheet(QString::fromUtf8("font: italic 12pt \"Courier New\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(lineEdit_y);


        verticalLayout_5->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_nameZ = new QLabel(centralwidget);
        label_nameZ->setObjectName("label_nameZ");
        label_nameZ->setStyleSheet(QString::fromUtf8("font: 14pt \"Courier New\";\n"
"\n"
"color: rgb(0, 0, 0)"));

        verticalLayout->addWidget(label_nameZ);

        lineEdit_z = new QLineEdit(centralwidget);
        lineEdit_z->setObjectName("lineEdit_z");
        lineEdit_z->setMaximumSize(QSize(113, 22));
        lineEdit_z->setStyleSheet(QString::fromUtf8("font: italic 12pt \"Courier New\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(lineEdit_z);


        verticalLayout_5->addLayout(verticalLayout);


        verticalLayout_6->addLayout(verticalLayout_5);

        pushButton_calc = new QPushButton(centralwidget);
        pushButton_calc->setObjectName("pushButton_calc");
        pushButton_calc->setAutoFillBackground(true);
        pushButton_calc->setStyleSheet(QString::fromUtf8("font: 16pt \"Courier New\";\n"
"color: rgb(0, 0, 0);\n"
"background: rrgb(213, 213, 213)"));

        verticalLayout_6->addWidget(pushButton_calc);

        label_ResultA = new QLabel(centralwidget);
        label_ResultA->setObjectName("label_ResultA");
        label_ResultA->setStyleSheet(QString::fromUtf8("font: 14pt \"Courier New\";\n"
"\n"
"color: rgb(0, 0, 0)"));
        label_ResultA->setScaledContents(true);

        verticalLayout_6->addWidget(label_ResultA);

        label_ResultB = new QLabel(centralwidget);
        label_ResultB->setObjectName("label_ResultB");
        label_ResultB->setStyleSheet(QString::fromUtf8("font: 14pt \"Courier New\";\n"
"\n"
"color: rgb(0, 0, 0)"));

        verticalLayout_6->addWidget(label_ResultB);

        plainTextEdit_report = new QPlainTextEdit(centralwidget);
        plainTextEdit_report->setObjectName("plainTextEdit_report");
        plainTextEdit_report->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        verticalLayout_6->addWidget(plainTextEdit_report);


        verticalLayout_7->addLayout(verticalLayout_6);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");

        verticalLayout_7->addLayout(verticalLayout_4);


        verticalLayout_8->addLayout(verticalLayout_7);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 339, 22));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName("menu_2");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(action_clear);
        menu_2->addAction(action_author);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200 (\320\274\320\270\320\275\320\270)", nullptr));
        action_clear->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\262\321\201\320\265", nullptr));
        action_author->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261 \320\260\320\262\321\202\320\276\321\200\320\265", nullptr));
        label_Quest->setText(QString());
        label_nameX->setText(QCoreApplication::translate("MainWindow", "\320\245", nullptr));
        lineEdit_x->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        label_nameY->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        lineEdit_y->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        label_nameZ->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        lineEdit_z->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_calc->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\320\235\320\220\320\226\320\234\320\230 \320\235\320\220 \320\234\320\225\320\235\320\257 </p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_calc->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        label_ResultA->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202 A", nullptr));
        label_ResultB->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202 B", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\260\320\262\320\272\320\260", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
