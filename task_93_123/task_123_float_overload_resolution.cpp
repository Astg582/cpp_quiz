#include <iostream>

// Overloaded functions for different numeric types
void f(int)    { std::cout << "i"; }
void f(double) { std::cout << "d"; }
void f(float)  { std::cout << "f"; }

int main() {
    f(1.0);  // Calls the version with double
}

