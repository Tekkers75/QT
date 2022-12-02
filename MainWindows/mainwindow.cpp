#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "calc.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_calc_clicked()
{
 double x = ui->lineEdit_x->text().toDouble();
 double y = ui->lineEdit_y->text().toDouble();
 double z = ui->lineEdit_z->text().toDouble();
 double a=A(x,y,z);
 double b=B(x);
 ui->label_ResultA->setText(QString::number(a));
 ui->label_ResultB->setText(QString::number(b));
}
