#include <iostream>

int main()
{
    unsigned short x = 0xFFFF;  // 65535
    unsigned short y = 0xFFFF;  // 65535

    // Multiplication: both x and y are promoted before multiplication
    auto z = x * y;

    // Prints whether z > 0
    std::cout << (z > 0);
}

