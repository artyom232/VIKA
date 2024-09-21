#include <QApplication> // Подключение библиотеки для создания приложения
#include <QWidget> // Подключение библиотеки для создания виджета
#include <QLabel> // Подключение библиотеки для создания текстовой метки
#include <QCheckBox> // Подключение библиотеки для создания чекбоксов
#include <QPushButton> // Подключение библиотеки для создания кнопки
#include <QVBoxLayout> // Подключение библиотеки для создания вертикального макета

int main(int argc, char* argv[]) {
    QApplication app(argc, argv); // Создание приложения

    QWidget window; // Создание главного окна
    window.setWindowTitle("Simple GUI"); // Установка заголовка окна

    QLabel* label = new QLabel("Выберите опции:", &window); // Создание текстовой метки

    QCheckBox* checkBox1 = new QCheckBox("Опция 1", &window); // Создание первого чекбокса
    QCheckBox* checkBox2 = new QCheckBox("Опция 2", &window); // Создание второго чекбокса
    QCheckBox* checkBox3 = new QCheckBox("Опция 3", &window); // Создание третьего чекбокса

    QPushButton* button = new QPushButton("Ок", &window); // Создание кнопки "Ок"

    QVBoxLayout* layout = new QVBoxLayout(); // Создание вертикального макета
    layout->addWidget(label); // Добавление текстовой метки в макет
    layout->addWidget(checkBox1); // Добавление первого чекбокса в макет
    layout->addWidget(checkBox2); // Добавление второго чекбокса в макет
    layout->addWidget(checkBox3); // Добавление третьего чекбокса в макет
    layout->addWidget(button); // Добавление кнопки в макет

    window.setLayout(layout); // Установка макета для главного окна
    window.show(); // Отображение главного окна

    return app.exec(); // Запуск цикла обработки событий