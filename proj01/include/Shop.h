#pragma  once
#include <vector>
#include "Product.h"
class Shop: public Product {
    private:
        std::vector <Product> _product;
    public:
    void Remove();
    void Add(Product &product);
    Shop(){}
    friend std::ostream& operator<<(std::ostream& out, Shop &shop);
    Product& operator [](int value);
    const std::vector<Product>& GetProducts() const { return _product; }
    Shop& operator+(int value);
    Shop& operator-(int value);
    Shop& operator*(int value);
    void Clear(){_product.clear();}
    Shop operator()(int i, int j);
};