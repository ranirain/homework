#include <iostream>
#include "ip.hpp"

int main() {
    std::string IP;

    std::cout << "Введите IPv6 адрес: ";
    std::getline(std::cin, IP); 
    
    std::cout << Validate(IP) << std::endl;

    return 0;
}
