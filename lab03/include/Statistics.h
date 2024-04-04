#pragma once

#include <vector>

class Statistics{
    private:
        std::vector<int> _vec;
    public:
        void operator()(int x){
            _vec.push_back(x);
        }
        void Print();
        float average();
        int min();
        int max();
};