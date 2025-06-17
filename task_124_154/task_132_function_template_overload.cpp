#include <iostream>  

// General function template
template<typename T>
void f(T) {
    std::cout << 1;  // Printed when no better match is found
}

// Explicit specialization of the template for int
template<>
void f(int) {
    std::cout << 2;  // Printed only when the template is explicitly selected
}

// Non-template overload for int
void f(int) {
    std::cout << 3;  // Printed when regular overload resolution prefers this
}

int main() {
    f(0.0);    // Call with double: selects f(double) from template => prints 1
    f(0);      // Call with int: both f(int) (template specialization) and non-template f(int) are viable,
               // but non-template is preferred => prints 3
    f<>(0);    // Explicit template call: only template is considered => prints 2
}

