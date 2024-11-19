#include "entropy.hpp"
#include <map>
#include <cmath>
#include <iomanip>
#include <iostream>

double calculateEntropy(const std::string& input) {
    std::map<char, int> frequency;
    int totalCharacters = 0;

    for (char c : input) {
        frequency[c]++;
        totalCharacters++;
    }

    double entropy = 0.0;

    for (const auto& pair : frequency) {
        double probability = static_cast<double>(pair.second) / totalCharacters;
        entropy -= probability * log2(probability);
    }

    return entropy;
}

void printEntropy(double entropy) {
    std::cout << "Энтропия текста: " << std::fixed << std::setprecision(2) << entropy << std::endl;
}
