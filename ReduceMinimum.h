#include <vector>
#include "ReduceGeneric.h"

#ifndef ReduceMinimum_H
#define ReduceMinimum_H

class ReduceMinimum : public ReduceGeneric
{
private:
    int binaryOperation(int a, int b);
public:
    int reduce(std::vector<int> vec);
};

#endif