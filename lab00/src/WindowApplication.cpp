#include "WIndowApplication.h"
#include <iostream>

void WindowApplication::Run(){
    Window::Run();
    Application::Run();
    std::cout<<"Aplikacja okienkowa o id = "<< _ID<<" jest uruchomiona !"<<std::endl;
}
