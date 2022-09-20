#include <vector>
#include "FilterGeneric.h"

#ifndef FilterOdd_H
#define FilterOdd_H

class FilterOdd : public FilterGeneric
{
private:
    bool g(int x);
    std::vector<int> filtering(std::vector<int> vec, int count);
public:
    std::vector<int> filter(std::vector<int> vec);
};

#endif 