// Защита от повторного включения
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
// Определение UI-класса наперёд, чтобы визуальное редактирование не приводило
// к крупным перекомпиляциям
namespace Ui { class MainWindow; }
QT_END_NAMESPACE
// Класс формы
class MainWindow : public QMainWindow
{
    // Макрос, который добавляет файл в компиляцию MOC’ом,
    // а также реализует пару функций
    Q_OBJECT

public:
    // Конструктор-деструктор.
    // Форма семантически не эквивалентна parent’у,
    // потому конструктор explicit
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    // Слоты — фишка Qt, которая обрабатывается MOC’ом
private slots:
    void on_pushButton_calc_clicked();

private:
     // Указатель на UI (для него в Qt есть ещё одна программа, UIC)
    Ui::MainWindow *ui;
     // Поля
    double x,y,z;
};
// Защита от повторного включения
#endif // MAINWINDOW_H
