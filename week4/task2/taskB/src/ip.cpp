#include "ip.hpp"
#include <regex>

std::string Validate(const std::string& IP) {
    std::regex ipv6("((([0-9a-fA-F]{1,4})\\:){7}([0-9a-fA-F]{1,4}))");

    if (std::regex_match(IP, ipv6)) {
        return "Валидный IP";
    }
    
    return "Невалидный IP";
}
