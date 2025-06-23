#include <iostream>
#include <limits>

// This program demonstrates signed integer overflow.
// According to the standard, signed integer overflow is undefined behavior.

int main() {
    int i = std::numeric_limits<int>::max();  // Get the maximum value of int
    std::cout << ++i;  // This causes signed overflow (undefined behavior)
}
