#pragma once
#include "Shop.h"
#include <algorithm>
class SortShop :public Shop  {
    public:
       
        SortShop operator-(int value);
        SortShop operator+(int value);
        SortShop operator*(int value);
        SortShop operator()(int i, int j);
        Product& operator [](int value);
        friend std::ostream& operator<<(std::ostream& out, SortShop &shop);
        

};