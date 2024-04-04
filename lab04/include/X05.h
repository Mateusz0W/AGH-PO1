#pragma once
#include "X06.h"

class X05 :public X06{
  private:
        int _x;
    public:
        X05(int x):X06(x){}
        void Write() override;
};