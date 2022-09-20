#include <vector>
#include "FilterForTwoDigitPositive.h"
bool FilterForTwoDigitPositive::g(int x)
{
    return !(x >= 10 && x <= 99);
}

std::vector<int> FilterForTwoDigitPositive::filtering(std::vector<int> vec, int count)
{
    if (count == 0) return vec;
    if (g(vec.at(count - 1))) vec.erase(vec.begin() + count - 1);
    return filtering(vec, count - 1);
}

std::vector<int> FilterForTwoDigitPositive::filter(std::vector<int> vec)
{
    return filtering(vec, vec.size());
}