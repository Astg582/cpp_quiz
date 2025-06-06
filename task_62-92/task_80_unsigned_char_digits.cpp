#include <limits>
#include <iostream>

int main() {
    // Print the number of digits (bits excluding sign) in an unsigned char
    // std::numeric_limits<unsigned char>::digits gives the number of value bits,
    // which excludes any sign bit (unsigned types have no sign bit).
    // According to the standard, the minimum width for (signed) char is 8 bits,
    // and unsigned char has the same width as signed char.
    // So this will print at least 8, but it is not guaranteed to be exactly 8 on all systems.
    std::cout << std::numeric_limits<unsigned char>::digits;
}

