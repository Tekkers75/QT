/// @author Саранчин К.А. 
#include "mainwindow.h"

#include <QApplication>

/// Главная программа
int main(int argc, char *argv[])
{   /// Класс QApplication руководит управляющей логикой ГПИ и основными настройками.
    QApplication a(argc, argv);
    /// Класс окна
    MainWindow w;
    /// Показывает окно
    w.show();
    /// Входит в основной цикл обработки событий и ждет, пока не будет вызвана функция exit(),
    /// а затем возвращает значение, установленное для функции exit() (которое равно 0,
    /// если функция exit() вызывается через quit()).
    return a.exec();
}
