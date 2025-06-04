#include <iostream>

// Template definition with a static assertion
// The assertion checks if T::value is true
template <typename T>
struct A {
    static_assert(T::value); // Will fail if instantiated with a type whose `value` is false
};

// Struct B with a constexpr static value set to false
struct B {
    static constexpr bool value = false;
};

int main() {
    // We're only declaring a pointer to A<B>, not an instance of A<B>
    // This does NOT require A<B> to be instantiated
    A<B>* a;

    // Since A<B> is never instantiated, the static_assert is never evaluated
    std::cout << 1; // This line is reached and executed
}

