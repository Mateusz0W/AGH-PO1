#pragma once

class Window{
    private:
        int _x;
    public:
        Window(int x): _x(x){}
        void Run();
        void Maximize();
};