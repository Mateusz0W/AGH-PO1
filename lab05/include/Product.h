#pragma once
#include <iostream>

class Product{
    private:
        int _x;
        int _y;
    public:
        Product(){}
        Product(int x, int y): _x(x), _y(y){}
        friend std::ostream& operator<<(std::ostream &out,const Product &product);
        int GetX() const;
        int GetY() const;
        int operator[](int i);
        Product operator++(int);
        Product& operator++();
        Product operator--(int);
        Product& operator--();
        Product& operator+(int value);
        Product& operator-(int value);
        Product& operator*(int value);
        bool operator<(Product &product);
        bool operator>(Product &product);
        bool operator<=(Product &product);
        bool operator>=(Product &product);
        bool operator==(Product &product);
        bool operator!=(Product &product);
};