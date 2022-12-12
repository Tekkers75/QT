/// @author Саранчин К.А. 
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "calc.h"
#include "ClassFunction.h"
#include <string>
#include <iostream>
#include <QMessageBox>

/// Конструктор
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

/// Деструктор
MainWindow::~MainWindow()
{
    delete ui;
}

/// Функция класса MainWindow к кнопке pushButton_calc
void MainWindow::on_pushButton_calc_clicked()
{
 /// Преобразования типа из Edit в Double
// double x = ui->lineEdit_x->text().toDouble();
// double y = ui->lineEdit_y->text().toDouble();
// double z = ui->lineEdit_z->text().toDouble();
 /// Вызов функции
// double a=A(x,y,z);
// double b=B(x);
 /// Вывод результата на label с помощью метки текста в класс QString который возвращает number
// ui->label_ResultA->setText(QString::number(a));
// ui->label_ResultB->setText(QString::number(b));
    p.A(ui->lineEdit_x->text().toDouble(), ui->lineEdit_y->text().toDouble(), ui->lineEdit_z->text().toDouble());
    p.B(ui->lineEdit_x->text().toDouble());
    p.set_x(ui->lineEdit_x->text().toDouble());
    p.set_y(ui->lineEdit_y->text().toDouble());
    p.set_z(ui->lineEdit_z->text().toDouble());

    ui->label_ResultA->setText(QString::number(p.A(ui->lineEdit_x->text().toDouble(), ui->lineEdit_y->text().toDouble(), ui->lineEdit_z->text().toDouble())));
    ui->label_ResultB->setText(QString::number(p.B(ui->lineEdit_x->text().toDouble())));
    ui->plainTextEdit_report->appendPlainText("При x = " + QString::number(p.get_x()) + "," + " y = " + QString::number(p.get_y()) + "," + " z = " + QString::number(p.get_z())  );
    ui->plainTextEdit_report->appendPlainText("A = " + QString::number(p.A(ui->lineEdit_x->text().toDouble(), ui->lineEdit_y->text().toDouble(), ui->lineEdit_z->text().toDouble())));/* + " При x = " + QString::number(p.get_x()) + " y = " + QString::number(p.get_y())); //+ " z = " + QString::number(p.get_z());*/
    ui->plainTextEdit_report->appendPlainText("При x = " + QString::number(p.get_x()));
    ui->plainTextEdit_report->appendPlainText("B = " + QString::number(p.B(ui->lineEdit_x->text().toDouble()))/* + " При X = " + QString::number(p.get_x())*/);

}

void MainWindow::on_action_clear_triggered()
{
    ui->plainTextEdit_report->clear();
}

void MainWindow::on_action_author_triggered()
{
     QMessageBox::about(this, "Об авторе", "Разработчик - Саранчин К.А.");
}




