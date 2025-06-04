#include <iostream>
#include <stdexcept>
#include <type_traits>

// A struct with a constructor and destructor that both throw exceptions
struct S {
    S() {
        throw std::runtime_error(""); // Constructor throws an exception
    }
    ~S() {
        throw std::runtime_error(""); // Destructor also throws an exception
    }
};

int main() {
    std::cout
        // Check if S is nothrow constructible
        // This will be false because the constructor is potentially throwing
        << (std::is_nothrow_constructible_v<S> ? 'y' : 'n')
        // Check if S is nothrow destructible
        // This will be true because destructors are assumed noexcept
        // unless subobjects or base classes have throwing destructors
        << (std::is_nothrow_destructible_v<S> ? 'y' : 'n');
}

