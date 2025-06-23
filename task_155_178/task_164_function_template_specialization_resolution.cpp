
#include <iostream>

// Generic template for any type T
template<class T>
void f(T) { std::cout << 1; }

// Explicit specialization of f(T) for int*
template<>
void f<>(int*) { std::cout << 2; }

// Separate template specifically for pointer types
template<class T>
void f(T*) { std::cout << 3; }

int main() {
    int *p = nullptr;
    f(p);  // Which overload is selected?
}
