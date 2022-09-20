#include <vector>
#include "ReduceGCD.h"

int ReduceGCD::binaryOperation(int a, int b)
{
    if (a == b) return a;
    if (a > b) return binaryOperation(a - b, b);
    return binaryOperation(a, b - a);
}

int ReduceGCD::reduce(std::vector<int> vec)
{
    if (vec.size() == 1) return vec.at(0);
    vec.at(0) = binaryOperation(vec.at(0), vec.at(1));
    vec.erase(vec.begin() + 1);
    return reduce(vec);
}