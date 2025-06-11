#include <iostream>
#include <type_traits>

int main() {
    // First case: void(int) vs void(const int)
    // Top-level const is ignored in function parameter types.
    std::cout << std::is_same_v<
        void(int),        // parameter passed by value
        void(const int)>; // same parameter with top-level const

    // Result: true (1), types are the same after removing top-level const

    // Second case: void(int*) vs void(const int*)
    // const here is not top-level — it applies to the pointee type.
    std::cout << std::is_same_v<
        void(int*),         // pointer to mutable int
        void(const int*)>;  // pointer to const int

    // Result: false (0), pointer types differ
}

