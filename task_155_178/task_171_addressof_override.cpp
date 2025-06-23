#include <iostream>
#include <memory>

// Struct S with an overloaded address-of operator
struct S {
    S(int i) : i_(i) {}

    // Custom operator& returns the address of a global S instance
    S* operator&() const;

    int i_;
};

// Global instance of S
S global{1};

// Implementation of the overloaded operator&
S* S::operator&() const {
    // If this line used plain &global, it would recursively call operator& again,
    // but since std::addressof is not used here, the overload still applies.
    return &global;
}

int main() {
    S s(2);

    // std::addressof bypasses the overloaded operator& and gets the true address of s
    S* ptr = std::addressof(s);

    // Access the actual object s (not global) and print its i_ value: 2
    std::cout << ptr->i_;
}

