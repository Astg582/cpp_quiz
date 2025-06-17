#include <iostream>
#include <type_traits>
#include <utility>

// Overload for lvalue reference
void g(int&) { std::cout << 'L'; }

// Overload for rvalue reference
void g(int&&) { std::cout << 'R'; }

template<typename T>
void f(T&& t) {
    // Print 1 if T is exactly int
    if (std::is_same_v<T, int>) { std::cout << 1; }

    // Print 2 if T is int lvalue reference
    if (std::is_same_v<T, int&>) { std::cout << 2; }

    // Print 3 if T is int rvalue reference
    if (std::is_same_v<T, int&&>) { std::cout << 3; }

    // Forward t as either lvalue or rvalue, depending on T
    g(std::forward<T>(t));
}

int main() {
    f(42);   // T deduced to int, prints 1R
    int i = 0;
    f(i);    // T deduced to int&, prints 2L
}

