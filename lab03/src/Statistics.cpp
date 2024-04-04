#include "Statistics.h"
#include <iostream>

using namespace std;

void Statistics::Print(){
    cout<<"Srednia z wyrazow ciagu: "<<average()<<endl;
    cout<<"Najmniejszy wyraz ciagu: "<<min()<<endl;
    cout<<"Najwiekszy wyraz ciagu: "<<max()<<endl;
}
float Statistics::average(){
    float average=0;
    for(const auto &element: _vec)
        average+=element;
    return average/_vec.size();
}
int Statistics::min(){
    int min=_vec[0];
    for(int i=1;i<_vec.size();i++)
       if(min>_vec[i])
            min=_vec[i];
    return min;
}
int Statistics::max(){
    int max=_vec[0];
    for(int i=1;i<_vec.size();i++)
       if(max<_vec[i])
            max=_vec[i];
    return max;
}