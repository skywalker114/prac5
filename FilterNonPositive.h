#include <vector>
#include "FilterGeneric.h"

#ifndef FILTERNONPOSITIVE_H
#define FILTERNONPOSITIVE_H

class FilterNonPositive : public FilterGeneric
{
private:
    bool g(int x);
    std::vector<int> filtering(std::vector<int> vec, int count);
public:
    std::vector<int> filter(std::vector<int> vec);
};

#endif