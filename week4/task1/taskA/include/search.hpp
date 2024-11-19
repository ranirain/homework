#ifndef SEARCH_HPP
#define SEARCH_HPP

#include <string>

class Searcher {
public:
    Searcher(const std::string &searchTerm, const std::string &text);
    int countOccurrences();

private:
    std::string searchTerm;
    std::string text;
};

#endif
