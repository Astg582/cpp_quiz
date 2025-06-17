#include <iostream>

// Create an alias for a function type: a function returning int and taking no parameters
using Func = int();

struct S {
    // Declare a member function using the typedef
    Func f;  // This is equivalent to: int f();
};

// Define the member function outside the class
int S::f() {
    return 1;
}

int main() {
    S s;
    // Call the member function and print the result
    std::cout << s.f();  // Output: 1
}

