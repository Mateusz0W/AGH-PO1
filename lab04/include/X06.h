#pragma once
#include "X04.h"
class X06 :public X04{
  private:
        int _x;
    public:
        X06():_x(1){};
        X06(int x):_x(x){}
        void Write() override;
        int Get(){
            return _x;
        }
};