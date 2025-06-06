#include <iostream>
#include <stdexcept>

struct A {
    A(char c) : c_(c) {}
    ~A() { std::cout << c_; }  // Prints character when object is destroyed
    char c_;
};

struct Y {
    ~Y() noexcept(false) { throw std::runtime_error(""); } // Throws an exception during destruction
};

A f() {
    try {
        A a('a'); // Will print 'a' when destroyed
        Y y;      // Destructor will throw
        A b('b'); // Will not be destroyed if exception is thrown earlier
        return {'c'}; // Temporary object 'c' is created, intended to be returned
    } catch (...) {
        // This catch won't be reached because an exception is thrown during stack unwinding
    }
    return {'d'}; // Will not be reached
}

int main() {
    f(); // Calling the function that throws an exception during destruction
}

// Explanation:
// The destructor of Y throws an exception during stack unwinding,
// which causes std::terminate to be called. As a result,
// no characters are printed, and the program is aborted before any destructor outputs.
// This is undefined behavior that leads to program termination.

