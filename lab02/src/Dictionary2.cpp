#include "Dictionary2.h"

int& Dictionary::operator[](const std::string& key) {
    return data[key];
}

void Dictionary::print() const {
    std::cout << "[";
    for (const auto& pair : data) {
        std::cout << pair.first << "," << pair.second << "] ";
    }
    std::cout << std::endl;
}

void Dictionary::clear() {
    data.clear();
}
