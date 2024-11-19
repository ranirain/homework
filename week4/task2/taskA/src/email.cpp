#include "email.hpp"
#include <iostream>

bool EmailValid::Valid(const std::string& email) {
    return ValidFormat(email);
}

bool EmailValid::ValidFormat(const std::string& email) {
    size_t DogPos = email.find("@");
    if (DogPos == std::string::npos || DogPos == 0 || DogPos == email.length() - 1) {
        return false;
    }

    std::string AfterDog = email.substr(DogPos + 1);
    size_t lastDotPos = AfterDog.find_last_of(".");
    if (lastDotPos == std::string::npos || lastDotPos == 0 || lastDotPos == AfterDog.length() - 1) {
        return false;
    }

    std::string BeforeDog = email.substr(0, DogPos);
    return ValidLocalPart(BeforeDog) && ValidDomainPart(AfterDog);
}

bool EmailValid::ValidLocalPart(const std::string& localPart) {
    return localPart.length() >= 6 && localPart.length() <= 30;
}

bool EmailValid::ValidDomainPart(const std::string& domainPart) {
    return true;
}
