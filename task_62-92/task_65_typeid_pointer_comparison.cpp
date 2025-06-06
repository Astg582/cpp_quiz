#include <iostream>
#include <typeinfo>

struct A {};

int main() {
    // Comparing addresses of two typeid(A) expressions
    std::cout << (&typeid(A) == &typeid(A));
}

