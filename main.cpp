#include <iostream>
#include "MapTriple.h"
#include "MapSquare.h"
#include "MapAbsoluteValue.h"
#include "FilterOdd.h"
#include "FilterNonPositive.h"
#include "FilterForTwoDigitPositive.h"
#include "ReduceMinimum.h"
#include "ReduceGCD.h"

int main()
{
    std::vector<int> testVector = {-5, -24, -123, -81, 200, 157, 84, 67, -83, -60, -72, 192, -25, -20, -50, -181,-70, -15, -108, -123};
    MapTriple tri;
    MapAbsoluteValue abs;
    FilterForTwoDigitPositive twoDigit;
    FilterOdd odd;
    ReduceMinimum min;
    ReduceGCD gcd;
    testVector = tri.map(testVector);
    testVector = abs.map(testVector);
    testVector = twoDigit.filter(testVector);
    testVector = odd.filter(testVector);
    for (int i = 0; i < testVector.size(); i++)
    {
        std::cout << testVector[i] << " ";
    }
    std::cout << std::endl << min.reduce(testVector) << " " << gcd.reduce(testVector) << std::endl;
    return 0;
}