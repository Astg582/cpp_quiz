#include <iostream>

int main()
{
    int x = 3;

    // This looks like an arrow (-->) but is actually parsed as: (x-- > 0)
    // It decrements x after comparing its original value to 0
    while (x-- > 0)
    {
        std::cout << x; // prints the value of x after decrement
    }

    return 0;
}

