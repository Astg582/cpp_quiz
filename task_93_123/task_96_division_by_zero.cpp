#include <iostream>

int main() {
    int i = 42;
    int j = 1;

    // Pre-decrement j to 0, then divide by it
    std::cout << i / --j;  // Undefined behavior: division by zero
}

