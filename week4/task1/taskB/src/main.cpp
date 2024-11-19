#include <iostream>
#include "entropy.hpp"

int main() {
    std::string input;
    
    std::cout << "Введите текст для расчета энтропии: ";
    std::getline(std::cin, input);

    if (input.empty()) {
        std::cout << "Ошибка: ввод пуст." << std::endl;
        return 1;
    }

    double entropy = calculateEntropy(input);
    printEntropy(entropy);

    return 0;
}

