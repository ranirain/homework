#include <iostream>
#include <cmath>

class Octagon {
private:
    double innerRadius;

public:
    Octagon() : innerRadius(0) {}

    Octagon(double radius) : innerRadius(radius) {}

    void setInnerRadius(double radius) {
        innerRadius = radius;
    }

    double getInnerRadius() {
        return innerRadius;
    }

    double calculateArea() {
        return 2 * innerRadius * innerRadius * (1 + sqrt(2));
    }

    double calculatePerimeter() {
        return 8 * innerRadius;
    }
};

int main() {
    Octagon octagon(5.0); // Создаем восьмиугольник с внутренним радиусом 5.0

    // Выводим площадь и периметр восьмиугольника
    std::cout << "Area of the octagon: " << octagon.calculateArea() << std::endl;
    std::cout << "Perimeter of the octagon: " << octagon.calculatePerimeter() << std::endl;

    return 0;
}

