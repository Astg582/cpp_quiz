#include <iostream>

// Overloaded functions for different parameter types
void f(unsigned int) { std::cout << "u"; }
void f(int)          { std::cout << "i"; }
void f(char)         { std::cout << "c"; }

int main() {
    char x = 1;
    char y = 2;

    // x + y is promoted to int before calling f
    f(x + y);  // calls f(int), prints "i"
}

// Explanation:
// The expression (x + y) promotes both chars to int due to integral promotion.
// So, f(int) is called, outputting 'i'.

