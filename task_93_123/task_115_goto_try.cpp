#include <iostream>
#include <stdexcept>

int main()
{
    goto inside;  // Jump to label inside, which is inside the try block (illegal)

    try
    {
    inside:          // Label inside is inside the try block
        throw std::runtime_error("oops");
    }
    catch(...)
    {
        std::cout << 1;
    }

    std::cout << 2;
}

