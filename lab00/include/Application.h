#pragma once
#include <string>

class Application{
    private:
        std::string _y;
        int _x;
    public:
        Application(std::string y):_y(y){}
        void Run();
        void ActivateLog();
};