
#include <iostream>

#include "square.h"


int add(int a, int b)
{
    return a + b;
}
int main()
{
    // int sides = getSquareSides();
    // std::cout << "A square has " << sides << " sides." << std::endl;
    int result = add(3, 4);
    std::cout << "The sum of 3 and 4 is " << result << std::endl;
    return 0;
}