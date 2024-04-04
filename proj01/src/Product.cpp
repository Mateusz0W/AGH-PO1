#include "Product.h"

using namespace std;

std::ostream& operator<<(std::ostream &out,const Product &product){
    out<<"typ: "<<product.GetX()<<", ilosc sztuk: "<<product.GetY()<<endl;
    return out;
}
int Product::GetX() const{
    return _x;
}
int Product::GetY() const{
    return _y;
}
int Product::operator[](int i){
    if(i==0)
        return _x;
    else
        return _y;
}
Product Product::operator++(int){
    Product temp=*this;
     _y++;
    return temp;
}
Product& Product::operator++(){
     ++_y;
    return *this;
}
Product Product::operator--(int){
    Product temp=*this;
    _y--;
    if(_y<0)
        _y=0;
    return temp;
}
Product& Product::operator--(){
     --_y;
     if(_y<0)
        _y=0;
    return *this;
}
Product& Product::operator+(int value){
    _y+=value;
    return *this;
}
Product& Product::operator-(int value){
    _y-=value;
    if(_y<0)
        _y=0;
    return *this;
}
Product& Product::operator*(int value){
    _y*=value;
    return *this;
}
bool Product::operator<(Product &product){
    return this->_y<product._y;     
}
bool Product::operator>(Product &product){
    return this->_y>product._y;
}
bool Product::operator<=(Product &product){
    return this->_y<=product._y;
}
bool Product::operator>=(Product &product){
    return this->_y>=product._y;
}
bool Product::operator==(Product &product){
    return this->_y == product._y;
}
bool Product::operator!=(Product &product){
    return this->_y != product._y;
}