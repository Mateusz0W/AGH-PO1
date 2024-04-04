#pragma once
#include "X04.h"

class X01 : public X04{
    private:
        int _x;
        
    public:
        X01():_x(5){};
        X01(int x):_x(x){}
        void Write() override;
        int Get(){
            return _x;
        }
        
};