#include "MapAbsoluteValue.h"

int MapAbsoluteValue::f(int x)
{
    if (x < 0) return -x;
    return x;
}

std::vector<int> MapAbsoluteValue::map(std::vector<int> vec)
{
    return mapping(vec, vec.size());
}

std::vector<int> MapAbsoluteValue::mapping(std::vector<int> vec, int count)
{
    if (count == 0) return vec;
    vec.at(count - 1) = f(vec.at(count - 1));
    return mapping(vec, count - 1);
}