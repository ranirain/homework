#include "search.hpp"

Searcher::Searcher(const std::string &searchTerm, const std::string &text)
    : searchTerm(searchTerm), text(text) {}

int Searcher::countOccurrences() {
    int count = 0;
    size_t pos = text.find(searchTerm);

    while (pos != std::string::npos) {
        count++;
        pos = text.find(searchTerm, pos + 1);
    }

    return count;
}
