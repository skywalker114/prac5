#include <vector>

#ifndef MAPGENERIC_H
#define MAPGENERIC_H

class MapGeneric
{
private: 
    virtual int f(int x) = 0;
public:
    virtual std::vector<int> map(std::vector<int> vec) = 0;
};

#endif // !MAPGENERIC_H