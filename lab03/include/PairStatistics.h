#pragma once
#include <iostream>

using namespace std;

class PairStatistics{
    private:
        int _euqal;
        int _min;
        int _max;

    public:
        void operator()(int a,int b){
            if(a==b)
                _euqal++;
            else if (a<b)
                _min++;
            else if( a>b)
                _max++;
        }   
        PairStatistics():_euqal(0),_min(0),_max(0){}
        void Print(){
           cout<< "Liczba par rownych: "<<_euqal<<endl;
            cout<<"Liczba par rosnacych: "<<_min<<endl;
            cout<<"Liczba par malejacych: "<<_max<<endl;
        }
};