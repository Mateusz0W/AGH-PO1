#include "Shop.h"

using namespace std;

void Shop::Remove(){
    if(_product.size()==0)
        cout<<"BLAD: Pusto !"<<endl;
    else
        _product.pop_back();
}
void Shop::Add(Product &product){
    _product.push_back(product);
}
std::ostream& operator<<(std::ostream& out,Shop& shop){
    out<<"---\n# Zawartosc/sklad: \n";
    for(const auto &el: shop.GetProducts())
        out<<el;
    out<<"---\n";
    return out;
}
Product& Shop::operator [](int value){
    return _product[value];
}
Shop& Shop::operator+(int value){
    for(auto &el: _product)
        el=el+value;
    return *this;
}
Shop& Shop::operator-(int value){
    for(auto &el: _product)
        el=el-value;
    return *this;
}
Shop& Shop::operator*(int value){
    for(auto &el: _product)
        el=el*value;
    return *this;
}
Shop Shop::operator()(int i, int j){
    Shop temp;
    for(i;i<=j;i++)
        temp.Add(_product[i]);
    return temp;
}
