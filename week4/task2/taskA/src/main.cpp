#include <iostream>
#include "email.hpp"

int main() {
    std::string email;

    // Ввод адреса электронной почты
    std::cout << "Введите адрес электронной почты(имя почты от 6 до 30 символов): ";
    std::cin >> email;

    EmailValid validator;

    if (validator.Valid(email)) {
        size_t DogPos = email.find("@");
        std::string BeforeDog = email.substr(0, DogPos);
        std::string AfterDog = email.substr(DogPos + 1);
        
        size_t lastDotPos = AfterDog.find_last_of(".");
        std::string DomainName = AfterDog.substr(0, lastDotPos);
        std::string Domain = AfterDog.substr(lastDotPos + 1);
        
        std::cout << BeforeDog << "@" << DomainName << "." << Domain << " - Валидная почта!" << std::endl;
    } else {
        std::cout << "Неверный адрес электронной почты!" << std::endl;
        return 1;
    }

    return 0;
}
