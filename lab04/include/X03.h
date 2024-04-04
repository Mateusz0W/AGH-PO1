#pragma once
#include "X06.h"
class X03: public X06{
  private:
        int _x;
    public:
        X03():X06(1){};
        X03(int x):X06(x){}
        void Write() override;
};