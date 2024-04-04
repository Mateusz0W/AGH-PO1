#pragma  once
#include <vector>
#include "Product.h"
class Shop: public Product {
    protected:
        std::vector <Product> _product;
    public:
    void Remove();
    void Add(Product &product);
    Shop(){}
    friend std::ostream& operator<<(std::ostream& out, Shop &shop);
    Product& operator [](int value);
    std::vector<Product>& GetProducts()  { return _product; }
    Shop& operator+(int value);
    Shop& operator-(int value);
    Shop& operator*(int value);
    void Clear(){_product.clear();}
    Shop operator()(int i, int j);
    int Total();
    bool operator<(Shop &shop);
    bool operator>(Shop &shop);
};