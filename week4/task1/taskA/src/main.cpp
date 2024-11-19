#include <iostream>
#include <string>
#include "search.hpp"

int main() {
    std::string search;
    std::string text;
    int num;

    std::cout << "Введите символы для поиска: ";
    std::getline(std::cin, search);

    std::cout << "Введите количество строк для поиска: ";
    std::cin >> num;
    std::cin.ignore();

    std::cout << "Введите текст для поиска: \n";

    for (int i = 0; i < num; i++) {
        std::string line;
        std::getline(std::cin, line);
        text += line + "\n";
    }


    Searcher searcher(search, text);
    int count = searcher.countOccurrences();

    std::cout << "'" << search << "' найдено " << count << " раз(а)." << std::endl;

    return 0;
}

