# Programming Basics — Основы Программирования на C++

## 📋 О дисциплине

Дисциплина «Основы программирования» является вводным курсом, который закладывает фундамент для всего последующего обучения. Курс охватывает базовые концепции программирования на языке **C++**: от переменных и типов данных до объектно-ориентированного программирования и работы с графикой (Qt).

### Цели изучения
- Освоение синтаксиса и семантики языка C++
- Понимание принципов структурного программирования
- Получение навыков работы с памятью (указатели, динамическая память)
- Изучение основных структур данных (массивы, строки, структуры)
- Подготовка к изучению объектно-ориентированного программирования

---

## 🛠 Технологический стек

| Технология | Назначение | Детали |
|---|---|---|
| **C++** | Основной язык | C++11 стандарт |
| **C** | Базовые концепции | Си-стиль программирования |
| **CMake** | Система сборки | Конфигурация проекта |
| **Qt 6** | GUI фреймворк | Графический интерфейс (pr21) |
| **iostream** | Ввод/вывод | cin, cout, cerr |
| **fstream** | Файловый ввод/вывод | ifstream, ofstream |

---

## 📁 Структура проекта

```
programming_basics/
├── README.md                     # Этот файл
├── pr1/                          # Введение. Переменные, типы данных
│   ├── practice1.cpp
│   └── test1.cpp
│
├── pr2/                          # Управляющие конструкции
│   ├── Practice2.cpp
│   └── test2.cpp
│
├── pr3/                          # Циклы
│   ├── practice3.cpp
│   └── test3.cpp
│
├── pr4/                          # Массивы (одномерные)
│   ├── practice4.cpp
│   └── test4.cpp
│
├── pr5/                          # Массивы (двумерные)
│   ├── practice5.cpp
│   └── test5.cpp
│
├── pr6/                          # Функции
│   ├── practise6.cpp
│   └── test6.cpp
│
├── pr7/                          # Перегрузка функций
│   ├── practise7.cpp
│   └── test7.cpp
│
├── pr8/                          # Указатели и ссылки
│   ├── practise8.cpp
│   └── test8.cpp
│
├── pr9/                          # Динамическая память
│   ├── practice9.cpp
│   └── test9.cpp
│
├── pr10/                         # Строки и символьные массивы
│   ├── pracitice10.cpp
│   └── test10.cpp
│
├── pr11/                         # Структуры
│   ├── practice11.cpp
│   └── test11.cpp (предположительно)
│
├── pr12/                         # Объединения и перечисления
│   ├── practice12.cpp
│   └── test12.cpp
│
├── pr13/                         # Файловый ввод/вывод
│   ├── practice13.cpp
│   └── test13.cpp
│
├── pr14/                         # Обработка исключений
│   ├── practice14.cpp
│   └── test14.cpp
│
├── pr15/                         # Шаблоны (templates)
│   ├── practice15.cpp
│   └── ...
│
├── pr16/                         # Классы (введение в ООП)
│   ├── practice16.cpp
│   └── ...
│
├── pr17/                         # Наследование
│   └── ...
│
├── pr18/                         # Полиморфизм
│   ├── practice18.cpp
│   └── ...
│
├── pr19/                         # Перегрузка операторов
│   ├── practice19.cpp
│   └── ...
│
├── pr20/                         # STL контейнеры
│   ├── practice20.cpp
│   └── ...
│
└── pr21/                         # Финальный проект (Qt GUI)
    ├── CMakeLists.txt
    ├── main.cpp
    ├── mainwindow.cpp / .h
    ├── magazine.cpp / .h
    ├── data.txt
    └── build/                    # Скомпилированный проект
```

---

## 📚 Выполненные практические работы

### pr1: Введение. Переменные и типы данных
**Файлы:** `pr1/practice1.cpp`, `pr1/test1.cpp`

#### Темы
- Структура программы на C++
- Переменные и константы
- Основные типы данных (int, float, double, char, bool)
- Операторы (арифметические, логические, сравнения)
- Ввод/вывод (cin, cout)

#### Пример кода
```cpp
#include <iostream>
using namespace std;

int main() {
    int age = 20;
    double gpa = 3.8;
    char grade = 'A';
    bool isStudent = true;
    
    cout << "Age: " << age << endl;
    cout << "GPA: " << gpa << endl;
    
    return 0;
}
```

---

### pr2: Управляющие конструкции
**Файлы:** `pr2/Practice2.cpp`, `pr2/test2.cpp`

#### Темы
- Условный оператор if/else
- Тернарный оператор
- Конструкция switch/case
- Логические операторы (&&, ||, !)

#### Пример кода
```cpp
int score;
cin >> score;

if (score >= 90) {
    cout << "Grade: A" << endl;
} else if (score >= 80) {
    cout << "Grade: B" << endl;
} else {
    cout << "Grade: C" << endl;
}

// Switch
int day;
cin >> day;
switch (day) {
    case 1: cout << "Monday"; break;
    case 2: cout << "Tuesday"; break;
    default: cout << "Invalid";
}
```

---

### pr3-pr4: Циклы
**Файлы:** `pr3/practice3.cpp`, `pr4/practice4.cpp`

#### Темы
- Цикл for
- Цикл while
- Цикл do-while
- Операторы break и continue
- Вложенные циклы

#### Пример кода
```cpp
// For loop
for (int i = 0; i < 10; i++) {
    cout << i << " ";
}

// While loop
int i = 0;
while (i < 10) {
    cout << i << " ";
    i++;
}

// Вложенные циклы (таблица умножения)
for (int i = 1; i <= 10; i++) {
    for (int j = 1; j <= 10; j++) {
        cout << i * j << "\t";
    }
    cout << endl;
}
```

---

### pr5-pr6: Массивы
**Файлы:** `pr5/practice5.cpp`, `pr6/practise6.cpp`

#### Темы
- Одномерные массивы
- Двумерные массивы (матрицы)
- Инициализация и доступ к элементам
- Передача массивов в функции
- Поиск, сортировка в массивах

#### Пример кода
```cpp
// Одномерный массив
int arr[5] = {1, 2, 3, 4, 5};
int sum = 0;
for (int i = 0; i < 5; i++) {
    sum += arr[i];
}

// Двумерный массив
int matrix[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};

// Сумма диагонали
int diagSum = 0;
for (int i = 0; i < 3; i++) {
    diagSum += matrix[i][i];
}
```

---

### pr7-pr8: Функции
**Файлы:** `pr7/practise7.cpp`, `pr8/practise8.cpp`

#### Темы
- Объявление и определение функций
- Параметры и возвращаемые значения
- Перегрузка функций
- Рекурсия
- Передача по значению и по ссылке

#### Пример кода
```cpp
// Базовая функция
int add(int a, int b) {
    return a + b;
}

// Перегрузка
double add(double a, double b) {
    return a + b;
}

// Рекурсия (факториал)
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

// Передача по ссылке
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}
```

---

### pr9: Указатели и динамическая память
**Файлы:** `pr9/practice9.cpp`

#### Темы
- Объявление указателей
- Операции с указателями
- Динамическое выделение памяти (new/delete)
- Массивы в динамической памяти
- Утечки памяти

#### Пример кода
```cpp
// Указатель
int x = 10;
int* ptr = &x;
cout << *ptr << endl;  // Разыменование

// Динамическая память
int* arr = new int[100];
arr[0] = 42;
delete[] arr;  // Освобождение

// Двумерный динамический массив
int** matrix = new int*[rows];
for (int i = 0; i < rows; i++) {
    matrix[i] = new int[cols];
}
// ... использование ...
for (int i = 0; i < rows; i++) {
    delete[] matrix[i];
}
delete[] matrix;
```

---

### pr10: Строки
**Файлы:** `pr10/pracitice10.cpp`

#### Темы
- С-строки (char массивы)
- std::string
- Функции работы со строками
- Конкатенация, сравнение, поиск

#### Пример кода
```cpp
// C-string
char name[] = "Hello";
cout << strlen(name) << endl;

// std::string
#include <string>
string s1 = "Hello";
string s2 = "World";
string s3 = s1 + " " + s2;  // Конкатенация

cout << s3.length() << endl;
cout << s3.substr(0, 5) << endl;  // "Hello"

// Поиск
size_t pos = s3.find("World");
if (pos != string::npos) {
    cout << "Found at: " << pos << endl;
}
```

---

### pr11-pr12: Структуры, объединения, перечисления
**Файлы:** `pr11/practice11.cpp`, `pr12/practice12.cpp`, `pr12/test12.cpp`

#### Темы
- Объявление структур
- Доступ к полям структуры
- Объединения (union)
- Перечисления (enum)

#### Пример кода
```cpp
// Структура
struct Student {
    string name;
    int age;
    double gpa;
};

Student s1 = {"Alice", 20, 3.9};
cout << s1.name << endl;

// Перечисление
enum Color { RED, GREEN, BLUE };
Color c = GREEN;

// Объединение
union Data {
    int i;
    float f;
    char str[4];
};
Data d;
d.i = 10;
```

---

### pr13: Файловый ввод/вывод
**Файлы:** `pr13/practice13.cpp`, `pr13/test13.cpp`

#### Темы
- Открытие/закрытие файлов
- Чтение из файла
- Запись в файл
- Бинарные файлы

#### Пример кода
```cpp
#include <fstream>

// Запись в файл
ofstream outFile("data.txt");
outFile << "Hello, File!" << endl;
outFile.close();

// Чтение из файла
ifstream inFile("data.txt");
string line;
while (getline(inFile, line)) {
    cout << line << endl;
}
inFile.close();

// Бинарный файл
ofstream binFile("data.bin", ios::binary);
int num = 42;
binFile.write(reinterpret_cast<char*>(&num), sizeof(num));
binFile.close();
```

---

### pr14: Обработка исключений
**Файлы:** `pr14/practice14.cpp`, `pr14/test14.cpp`

#### Темы
- try/catch блоки
- Типы исключений
- Создание собственных исключений
- Гарантия исключений (noexcept)

#### Пример кода
```cpp
#include <stdexcept>

double divide(double a, double b) {
    if (b == 0) {
        throw runtime_error("Division by zero");
    }
    return a / b;
}

try {
    double result = divide(10, 0);
    cout << result << endl;
} catch (const runtime_error& e) {
    cerr << "Error: " << e.what() << endl;
} catch (...) {
    cerr << "Unknown error" << endl;
}
```

---

### pr15: Шаблоны (Templates)
**Файлы:** `pr15/practice15.cpp`

#### Темы
- Шаблоны функций
- Шаблоны классов
- Специализация шаблонов

#### Пример кода
```cpp
// Шаблон функции
template <typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}

// Шаблон класса
template <typename T>
class Box {
private:
    T content;
public:
    Box(T c) : content(c) {}
    T get() { return content; }
};

Box<int> intBox(42);
Box<string> strBox("Hello");
```

---

### pr16-pr20: Основы ООП
**Файлы:** `pr16/practice16.cpp`, `pr18/practice18.cpp`, `pr19/practice19.cpp`, `pr20/practice20.cpp`

#### Темы
- Классы и объекты
- Конструкторы и деструкторы
- Наследование
- Полиморфизм и виртуальные функции
- Перегрузка операторов
- STL контейнеры (vector, list, map, set)

#### Пример кода
```cpp
// Класс
class Rectangle {
private:
    double width, height;
    
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    
    double area() const {
        return width * height;
    }
    
    // Перегрузка оператора
    bool operator<(const Rectangle& other) const {
        return area() < other.area();
    }
};

// Наследование
class Square : public Rectangle {
public:
    Square(double side) : Rectangle(side, side) {}
};

// STL контейнеры
vector<int> vec = {1, 2, 3};
map<string, int> scores;
scores["Alice"] = 95;
```

---

### pr21: Финальный проект — GUI приложение на Qt
**Файлы:** `pr21/` (полный проект Qt)

#### Описание
Приложение «Магазин» с графическим интерфейсом для управления товарами.

#### Структура проекта
```
pr21/
├── CMakeLists.txt            # Конфигурация CMake
├── main.cpp                  # Точка входа
├── mainwindow.cpp / .h       # Главное окно
├── magazine.cpp / .h         # Модель данных (товары)
├── data.txt                  # Файл данных
└── build/                    # Скомпилированный проект
```

#### Технологический стек
- **Qt 6.8.0** — фреймворк для GUI
- **CMake** — система сборки
- **MinGW 64-bit** — компилятор

#### Функционал
- Отображение списка товаров в таблице
- Добавление/редактирование/удаление товаров (CRUD)
- Сохранение и загрузка из файла
- Валидация ввода данных

#### Пример кода (MainWindow)
```cpp
#include <QMainWindow>
#include <QTableWidget>
#include <QPushButton>

class MainWindow : public QMainWindow {
    Q_OBJECT
    
public:
    MainWindow(QWidget *parent = nullptr);
    
private:
    QTableWidget* table;
    QPushButton* addButton;
    
private slots:
    void addRow();
    void saveData();
    void loadData();
};
```

#### CMakeLists.txt
```cmake
cmake_minimum_required(VERSION 3.16)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

find_package(Qt6 COMPONENTS Widgets REQUIRED)

qt_standard_code_setup()

add_executable(untitled
    main.cpp
    mainwindow.cpp
    magazine.cpp
)

target_link_libraries(untitled PRIVATE Qt6::Widgets)
```

---

## 🎯 Приобретённые навыки

### Базовое программирование
- **Синтаксис C++:** переменные, типы, операторы
- **Управляющие конструкции:** if/else, switch, циклы
- **Функции:** объявление, перегрузка, рекурсия

### Работа с памятью
- **Указатели:** объявление, арифметика, разыменование
- **Динамическая память:** new/delete, массивы
- **Утечки памяти:** обнаружение и предотвращение

### Структуры данных
- **Массивы:** одномерные, двумерные
- **Строки:** C-строки, std::string
- **Структуры и классы:** объявление, использование

### Продвинутые темы
- **Шаблоны:** обобщённое программирование
- **Исключения:** обработка ошибок
- **ООП:** классы, наследование, полиморфизм
- **STL:** vector, map, set, algorithm

### Инструменты
- **CMake:** конфигурация сборки
- **Qt Creator:** разработка GUI
- **Git:** контроль версий

---

## 📊 Прогресс обучения

| Семестр | Темы | Работ |
|---|---|---|
| **1** | Введение, циклы, массивы, функции | pr1-pr10 |
| **2** | Указатели, структуры, ООП, шаблоны | pr11-pr20 |
| **Итог** | Qt GUI проект | pr21 |

---

## 🔗 Связь с другими дисциплинами

| Дисциплина | Связь |
|---|---|
| **Алгоритмы и структуры данных** | Базовые навыки для реализации алгоритмов |
| **ООП** | Прямая подготовка к курсу OPPO |
| **Базы данных** | Работа с файлами → работа с БД |
| **Веб-разработка** | Понимание MVC из Qt проекта |

---

## 💼 Практическая ценность

### Для резюме
```
Навыки: C++, STL, Qt, CMake, ООП, работа с файлами
Проекты:
  - GUI приложение «Магазин» на Qt 6 (CRUD, файлы)
  - 21 лабораторная работа по программированию на C++
```

### Для портфолио
- Демонстрация эволюции от базового синтаксиса до GUI
- Пример полноценного приложения с архитектурой
- Работа с внешними файлами данных

### Для собеседований
- Понимание управления памятью в C++
- Опыт работы с указателями и ссылками
- Знание STL контейнеров и алгоритмов

---

## 📝 Оценки и достижения

- **Все практические работы:** зачтено
- **Финальный проект (pr21):** зачтено
- **Итоговая оценка:** ожидается по результатам экзамена

---

## 🔮 Идеи для развития

### Краткосрочные
- [ ] Добавить unit-тесты для проекта
- [ ] Изучить Modern C++ (C++17/20/23)
- [ ] Освоить умные указатели (unique_ptr, shared_ptr)

### Долгосрочные
- [ ] Изучить паттерны проектирования
- [ ] Разработать крупный проект на Qt
- [ ] Освоить кроссплатформенную разработку

---

## 📚 Рекомендованные ресурсы

### Книги
- **Липпман, Лажойе, Му** — «Язык программирования C++. Базовый курс»
- **Шилдт** — «C++: Базовый курс»
- **Саттер** — «Эффективное программирование на C++»

### Онлайн-ресурсы
- [LearnCpp.com](https://www.learncpp.com/) — подробный учебник
- [CppReference.com](https://en.cppreference.com/) — справочник
- [Qt Documentation](https://doc.qt.io/) — документация по Qt

### Инструменты
- **Visual Studio / VS Code** — IDE
- **Qt Creator** — IDE для Qt
- **Valgrind** — анализатор памяти