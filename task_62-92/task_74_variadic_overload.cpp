#include <iostream>

// Legacy variadic function template:
// Takes one parameter of type T, followed by a C-style ellipsis (...).
// Example: foo₁(int, ...)
// This does *not* support type safety or parameter pack expansion.
template<typename T>
void foo(T...) { std::cout << 'A'; }

// Variadic *template* function using parameter packs:
// Supports zero or more arguments, all types deduced into parameter pack T...
// Example: foo₂(T...)
template<typename... T>
void foo(T...) { std::cout << 'B'; }

int main() {
    foo(1);    // prints A
    foo(1, 2); // prints B
}

