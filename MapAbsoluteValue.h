#include <vector>
#include "MapGeneric.h"

#ifndef MAPABSOLUTEVALUE_H
#define MAPABSOLUTEVALUE_H

class MapAbsoluteValue: public MapGeneric
{
private:
    int f(int x);
    std::vector<int> mapping(std::vector<int> vec, int count);
public:
    std::vector<int> map(std::vector<int> vec);
};

#endif