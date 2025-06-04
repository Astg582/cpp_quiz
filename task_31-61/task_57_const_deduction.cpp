#include <iostream>
#include <type_traits>

// Template that takes T by non-const reference
template <typename T>
void foo(T& x) {
    // Check if T is exactly const int
    std::cout << std::is_same_v<const int, T>;
}

// Template that takes T by const reference
template <typename T>
void bar(const T& x) {
    // Check if T is exactly const int
    std::cout << std::is_same_v<const int, T>;
}

int main() {
    const int i{};  // i has type const int
    int j{};        // j has type int

    foo(i);  // T deduced as const int → prints 1
    foo(j);  // T deduced as int       → prints 0
    bar(i);  // T deduced as int       → prints 0
    bar(j);  // T deduced as int       → prints 0
}

