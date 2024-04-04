#include"X01.h"
#include "X02.h"
#include"X03.h"
#include "X04.h"
#include "X06.h"
#include "X05.h"
#include "X07.h"

#include <iostream>

using namespace std;

// W pliku X04.cpp
void X04::Write() {
    cout << "1"; // X04 zawsze wypisuje "1"
}

// W pliku X01.cpp
void X01::Write() {
    for(int i=0;i<_x;i++)
        cout << "&"; // X01 zawsze zaczyna od pięciu '&'
    cout << _x; // następnie wypisuje swoją wartość _x
    for(int i=0;i<_x;i++)
        cout << "&"; // i kończy na pięciu '&'
}

// W pliku X02.cpp
void X02::Write() {
    for(int i=0;i<X01::Get();i++)
        cout << "$"; // X02 zawsze zaczyna od pięciu '$'
        X01::Write();
    for(int i=0;i<X01::Get();i++)
        cout << "$";
}

// W pliku X03.cpp
void X03::Write() {
    for(int i=0;i<X06::Get();i++)
        cout << "!"; // X03 zaczyna od trzech '*'
    X06::Write(); // następnie wypisuje to, co X04, czyli "1"
    for(int i=0;i<X06::Get();i++)
        cout << "!"; // i kończy na trzech '*'
}

// W pliku X05.cpp
void X05::Write() {
    for(int i=0;i<X06::Get();i++)
        cout << "%"; // X05 zaczyna od sześciu '!'
    X06::Write(); // X05 to rozszerzenie X06, więc tutaj użyjemy Write z X06
    for(int i=0;i<X06::Get();i++)
        cout << "%"; // i kończy na sześciu '!'
}

// W pliku X06.cpp
void X06::Write() {
    for(int i=0;i<_x;i++)
        cout << "*"; // X06 zawsze wypisuje sześć '*'
    cout <<_x; // jeśli X06 ma wartość _x, wypisuje ją
    for(int i=0;i<_x;i++)
        cout << "*"; // i kończy na sześciu '*'
}

// W pliku X07.cpp
void X07::Write() {
    for(int i=0;i<X06::Get();i++)
        cout << "@"; // X07 zaczyna od "@*"
    X06::Write(); // następnie wypisuje to, co X04, czyli "1"
    for(int i=0;i<X06::Get();i++)
        cout << "@"; // i kończy na "*@"
}
