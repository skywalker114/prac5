#include <vector>
#include "MapGeneric.h"

#ifndef MAPSQUARE_H
#define MAPSQUARE_H

class MapSquare: public MapGeneric
{
private:
    int f(int x);
    std::vector<int> mapping(std::vector<int> vec, int count);
public:
    std::vector<int> map(std::vector<int> vec);
};

#endif