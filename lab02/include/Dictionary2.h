#pragma once

#include <iostream>
#include <map>

class Dictionary {
private:
    std::map<std::string, int> data;

public:
    int& operator[](const std::string& key);
    void print() const;
    void clear();
};

