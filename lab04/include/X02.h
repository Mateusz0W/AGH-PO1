#pragma once
#include "X01.h"

class X02:public X01{
  private:
        int _x;
    public:
      X02():X01(5){};
      X02(int x): X01(x){}
      void Write() override;
};