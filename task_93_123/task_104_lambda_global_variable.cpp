
#include <iostream>

// Global variable 'a'
int a = 1;

int main() {
    // Lambda that takes an int 'b' and returns the sum of 'a' and 'b'
    // 'a' is not captured, but refers directly to the global variable
    auto f = [](int b) { return a + b; };

    // Call lambda with argument 4 -> output will be a (1) + 4 = 5
    std::cout << f(4);
}
