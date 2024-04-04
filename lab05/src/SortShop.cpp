#include "SortShop.h"

using namespace std;

bool CompareByY(const Product &a, const Product &b){
    return a.GetY()<b.GetY();
}
std::ostream& operator<<(std::ostream& out, SortShop &shop) {
    sort(shop.GetProducts().begin(), shop.GetProducts().end(), CompareByY);
    out << static_cast<Shop&>(shop);

    return out;
}

SortShop SortShop::operator-(int value){
     Shop::operator-(value);
     return *this;
}
SortShop SortShop::operator+(int value){
    Shop::operator+(value);
     return *this;
}
SortShop SortShop::operator*(int value){
    Shop::operator*(value);
     return *this;
}
SortShop SortShop::operator()(int i, int j){
   SortShop temp;
   sort(_product.begin(), _product.end(), CompareByY);
    for (int index = i; index <= j; ++index) {
        temp.Add(_product[index]);
    }
    return temp;
    }
Product& SortShop::operator [](int value){
    sort(_product.begin(), _product.end(), CompareByY);
    return _product[value];
}

