#include <vector>

#ifndef FilterGeneric_H
#define FilterGeneric_H

class FilterGeneric
{
private:
    virtual bool g(int x) = 0;
public:
    virtual std::vector<int> filter(std::vector<int> vec) = 0;
};

#endif