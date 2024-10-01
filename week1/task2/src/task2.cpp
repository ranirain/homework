#include <iostream>
#include <limits>

int main() {
    // Целочисленный тип данных (int)
    int int_min = std::numeric_limits<int>::min();
    int int_max = std::numeric_limits<int>::max();

    // Беззнаковое целое число (unsigned int)
    unsigned int uint_min = 0;
    unsigned int uint_max = std::numeric_limits<unsigned int>::max();

    // Целочисленный тип данных с более широким диапазоном (long long)
    long long ll_min = std::numeric_limits<long long>::min();
    long long ll_max = std::numeric_limits<long long>::max();

    // Тип данных с плавающей запятой одинарной точности (float)
    float float_min = std::numeric_limits<float>::lowest();
    float float_max = std::numeric_limits<float>::max();

    // Тип данных с плавающей запятой двойной точности (double)
    double double_min = std::numeric_limits<double>::lowest();
    double double_max = std::numeric_limits<double>::max();

    std::cout << "Минимальные и максимальные значения:\n";
    std::cout << "int: " << int_min << " до " << int_max << "\n";
    std::cout << "unsigned int: " << uint_min << " до " << uint_max << "\n";
    std::cout << "long long: " << ll_min << " до " << ll_max << "\n";
    std::cout << "float: " << float_min << " до " << float_max << "\n";
    std::cout << "double: " << double_min << " до " << double_max << "\n";

    return 0;
}
