// task_21_const_default_initialization.cpp
// Demonstrates a compile-time error when default-initializing a const object
// of a class with no user-provided constructor and uninitialized members.

#include <iostream>

struct C {
    C() = default;  // Defaulted constructor (not user-provided)
    int i;          // Member without default initializer
};

int main() {
    const C c;              // Error: C is not const-default-constructible
    std::cout << c.i;
}

