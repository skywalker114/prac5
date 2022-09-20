#include <vector>
#include "FilterOdd.h"

bool FilterOdd::g(int x)
{
    return x % 2 == 0;
}

std::vector<int> FilterOdd::filtering(std::vector<int> vec, int count)
{
    if (count == 0) return vec;
    if (g(vec.at(count - 1))) vec.erase(vec.begin() + count - 1);
    return filtering(vec, count - 1);
}

std::vector<int> FilterOdd::filter(std::vector<int> vec)
{
    return filtering(vec, vec.size());
}