#include "MapGeneric.h"

#ifndef MAPTRIPLE_H
#define MAPTRIPLE_H

class MapTriple: public MapGeneric
{
private:
    int f(int x);
    std::vector<int> mapping(std::vector<int> vec, int count);
public:
    std::vector<int> map(std::vector<int> vec);
};

#endif