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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
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
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_calc;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_ResultA;
    QLabel *label_ResultB;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(339, 395);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("background: rgb(130, 178, 255)"));
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
"color: rgb(4, 4, 131)"));

        verticalLayout_3->addWidget(label_nameX);

        lineEdit_x = new QLineEdit(centralwidget);
        lineEdit_x->setObjectName("lineEdit_x");
        lineEdit_x->setMaximumSize(QSize(113, 22));
        lineEdit_x->setAutoFillBackground(false);
        lineEdit_x->setStyleSheet(QString::fromUtf8("font: italic 12pt \"Courier New\";\n"
"color: rgb(0, 0, 0)"));

        verticalLayout_3->addWidget(lineEdit_x);


        verticalLayout_5->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_nameY = new QLabel(centralwidget);
        label_nameY->setObjectName("label_nameY");
        label_nameY->setStyleSheet(QString::fromUtf8("font: 14pt \"Courier New\";\n"
"\n"
"color: rgb(4, 4, 131)"));

        verticalLayout_2->addWidget(label_nameY);

        lineEdit_y = new QLineEdit(centralwidget);
        lineEdit_y->setObjectName("lineEdit_y");
        lineEdit_y->setMaximumSize(QSize(113, 22));
        lineEdit_y->setStyleSheet(QString::fromUtf8("font: italic 12pt \"Courier New\";\n"
"color: rgb(0, 0, 0)"));

        verticalLayout_2->addWidget(lineEdit_y);


        verticalLayout_5->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_nameZ = new QLabel(centralwidget);
        label_nameZ->setObjectName("label_nameZ");
        label_nameZ->setStyleSheet(QString::fromUtf8("font: 14pt \"Courier New\";\n"
"\n"
"color: rgb(4, 4, 131)"));

        verticalLayout->addWidget(label_nameZ);

        lineEdit_z = new QLineEdit(centralwidget);
        lineEdit_z->setObjectName("lineEdit_z");
        lineEdit_z->setMaximumSize(QSize(113, 22));
        lineEdit_z->setStyleSheet(QString::fromUtf8("font: italic 12pt \"Courier New\";\n"
"color: rgb(0, 0, 0)"));

        verticalLayout->addWidget(lineEdit_z);


        verticalLayout_5->addLayout(verticalLayout);


        verticalLayout_6->addLayout(verticalLayout_5);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);

        pushButton_calc = new QPushButton(centralwidget);
        pushButton_calc->setObjectName("pushButton_calc");
        pushButton_calc->setAutoFillBackground(true);
        pushButton_calc->setStyleSheet(QString::fromUtf8("font: 16pt \"Courier New\";\n"
"color: rgb(4, 4, 131);\n"
"background: rrgb(213, 213, 213)"));

        verticalLayout_6->addWidget(pushButton_calc);


        verticalLayout_7->addLayout(verticalLayout_6);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_ResultA = new QLabel(centralwidget);
        label_ResultA->setObjectName("label_ResultA");
        label_ResultA->setStyleSheet(QString::fromUtf8("font: 14pt \"Courier New\";\n"
"\n"
"color: rgb(4, 4, 131)"));
        label_ResultA->setScaledContents(true);

        verticalLayout_4->addWidget(label_ResultA);

        label_ResultB = new QLabel(centralwidget);
        label_ResultB->setObjectName("label_ResultB");
        label_ResultB->setStyleSheet(QString::fromUtf8("font: 14pt \"Courier New\";\n"
"\n"
"color: rgb(4, 4, 131)"));

        verticalLayout_4->addWidget(label_ResultB);


        verticalLayout_7->addLayout(verticalLayout_4);


        verticalLayout_8->addLayout(verticalLayout_7);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 339, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200 (\320\274\320\270\320\275\320\270)", nullptr));
        label_Quest->setText(QString());
        label_nameX->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\245", nullptr));
        lineEdit_x->setText(QString());
        label_nameY->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 Y", nullptr));
        lineEdit_y->setText(QString());
        label_nameZ->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 Z", nullptr));
        lineEdit_z->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_calc->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\320\235\320\220\320\226\320\234\320\230 \320\235\320\220 \320\234\320\225\320\235\320\257 </p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_calc->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        label_ResultA->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202 A", nullptr));
        label_ResultB->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202 B", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
