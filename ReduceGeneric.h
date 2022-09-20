#include <vector>

#ifndef ReduceGeneric_H
#define ReduceGeneric_H

class ReduceGeneric
{
private:
    virtual int binaryOperation(int a, int b) = 0;
public:
    virtual int reduce(std::vector<int> vec) = 0;
};

#endif