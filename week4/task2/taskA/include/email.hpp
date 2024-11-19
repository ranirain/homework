#ifndef EMAIL_HPP
#define EMAIL_HPP

#include <string>

class EmailValid {
public:
    bool Valid(const std::string& email);
private:
    bool ValidFormat(const std::string& email);
    bool ValidLocalPart(const std::string& localPart);
    bool ValidDomainPart(const std::string& domainPart);
};

#endif
