#include <iostream>

template <typename T>
struct A {
    static_assert(false);  // This static_assert is ignored until template A<T> is instantiated (since C++23)
};

int main() {
    std::cout << 1;  // Prints 1, because A<T> is never instantiated
}

