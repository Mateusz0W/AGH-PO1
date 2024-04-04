#pragma once
#include "X06.h"

class X07:public X06{
      private:
        int _x;
    public:
        X07():X06(1){};
        X07(int x):X06(x){}
        void Write() override;
};