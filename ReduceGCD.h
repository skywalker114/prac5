#include <vector>
#include "ReduceGeneric.h"

#ifndef REDUCEGCD_H
#define REDUCEGCD_H

class ReduceGCD
{
private:
    int binaryOperation(int a, int b);
public:
    int reduce(std::vector<int> vec);
};

#endif