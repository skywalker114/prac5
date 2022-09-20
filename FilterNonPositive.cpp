#include <vector>
#include "FilterNonPositive.h"

bool FilterNonPositive::g(int x)
{
    return x < 0;
}

std::vector<int> FilterNonPositive::filtering(std::vector<int> vec, int count)
{
    if (count == 0) return vec;
    if (g(vec.at(count - 1))) vec.erase(vec.begin() + count - 1);
    return filtering(vec, count - 1);
}

std::vector<int> FilterNonPositive::filter(std::vector<int> vec)
{
    return filtering(vec, vec.size());
}