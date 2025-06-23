#include <iostream>

extern "C" int x;     // Declaration only — no definition provided
extern "C" { int y; } // Definition of y

int main() {
    std::cout << x << y;  // ODR-use of x and y
}
