#include <iostream>

// Base case: returns the only argument
template<typename T>
T sum(T arg) {
    return arg;
}

// Recursive case: adds the first argument to the result of summing the rest
template<typename T, typename ...Args>
T sum(T arg, Args... args) {
    return arg + sum<T>(args...);  // T is explicitly specified here
}

int main() {
    // First argument is double → T deduced as double
    // All further arguments are converted to double during recursive calls
    auto n1 = sum(0.5, 1, 0.5, 1);  // Result: 3.0

    // First argument is int → T deduced as int
    // All further arguments (even 0.5) are truncated to int during recursion
    auto n2 = sum(1, 0.5, 1, 0.5);  // Result: 2

    std::cout << n1 << n2;  // Prints: 32
}

