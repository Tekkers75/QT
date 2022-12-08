/// @author Саранчин К.А. 
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "calc.h"

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
 double x = ui->lineEdit_x->text().toDouble();
 double y = ui->lineEdit_y->text().toDouble();
 double z = ui->lineEdit_z->text().toDouble();
 /// Вызов функции
 double a=A(x,y,z);
 double b=B(x);
 /// Вывод результата на label с помощью метки текста в класс QString который возвращает number
 ui->label_ResultA->setText(QString::number(a));
 ui->label_ResultB->setText(QString::number(b));
}
