#include "MapSquare.h"

int MapSquare::f(int x)
{
    return x * x;
}

std::vector<int> MapSquare::mapping(std::vector<int> vec, int count)
{
    if (count == 0) return vec;
    vec.at(count - 1) = f(vec.at(count - 1));
    return mapping(vec, count - 1);
}

std::vector<int> MapSquare::map(std::vector<int> vec)
{
    return mapping(vec, vec.size());    
}