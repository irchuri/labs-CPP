// laba9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// найти длину окружности

// найти длину окружности с использованием абстракции и инкапсуляции класса

#include <iostream>

class Circle {
    // Абстракция
private:
    const double pi = 3.14;
    double m_length = 0;
    double m_radius = 0;
    // Инкапсуляция
public:
    // Конструктор
    Circle(double radius) {
        if (SetRadius(radius)) {
            m_radius = radius;
            m_length = 2 * pi * m_radius;
        }
    }
    // Деструктор
    ~Circle() {}

    bool SetRadius(double radius) {
        if (radius < 0) {
            std::cout << "Bad value, enter something bigger than 0 )=" << std::endl;
            return false;
        }
        else {
            return true;
        }
    }
    double get_length() {
        return m_length;
    }
};

int main()
{

    double radius = 0;
    std::cout << "Enter circle radius:" << std::endl;
    std::cin >> radius;

    Circle circle1(radius);
    std::cout << circle1.get_length() << std::endl;
}