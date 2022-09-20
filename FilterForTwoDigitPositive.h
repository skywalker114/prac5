#include <vector>
#include "FilterGeneric.h"

#ifndef FilterForTwoDigitPositive_H
#define FilterForTwoDigitPositive_H

class FilterForTwoDigitPositive : public FilterGeneric
{
private:
    bool g(int x);
    std::vector<int> filtering(std::vector<int> vec, int count);
public:
    std::vector<int> filter(std::vector<int> vec);
};

#endif