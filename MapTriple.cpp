#include "MapTriple.h"

int MapTriple::f(int x)
{
    return x * 3;
}

std::vector<int> MapTriple::map(std::vector<int> vec)
{
    return mapping(vec, vec.size());
}

std::vector<int> MapTriple::mapping(std::vector<int> vec, int count)
{
    if (count == 0) return vec;
    vec.at(count - 1) = f(vec.at(count - 1));
    return mapping(vec, count - 1);
}