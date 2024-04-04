#pragma once
#include "Window.h"
#include "Application.h"

class WindowApplication: public Window ,public Application{
    private:
        int _ID;
    public:
        WindowApplication(int id,int x ,std::string y): _ID(id), Window(x),Application(y){}
        void Run();
    
};