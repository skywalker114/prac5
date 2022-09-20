#include <vector>
#include "ReduceMinimum.h"

int ReduceMinimum::binaryOperation(int a, int b)
{
    if (a < b) return a;
    return b;
}

int ReduceMinimum::reduce(std::vector<int> vec)
{
    if (vec.size() == 1) return vec.at(0);
    vec.erase(vec.begin() + (int)(binaryOperation(vec.at(0), vec.at(1)) == vec.at(0)));
    return reduce(vec);
}