#include <iostream>

// This variable is declared at namespace scope (outside any function),
// so it has static storage duration.
// It will be zero-initialized by default.
int a;

int main () {
    // Print the value of 'a'.
    // Since 'a' was not explicitly initialized, its value is 0.
    std::cout << a;
}

