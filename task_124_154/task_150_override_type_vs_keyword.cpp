#include <iostream>

struct override {};  // Define a user-defined type named 'override'

struct Base {
    virtual override f() = 0;  // Pure virtual function returning type 'override'
};

struct Derived : Base {
    // Override the base class function
    // First 'override' refers to the return type
    // Second 'override' is the specifier indicating the function overrides a base class method
    virtual auto f() -> override override {
        std::cout << "1";
        return override();  // Return a temporary object of type 'override'
    }
};

int main() {
    Derived().f();  // Call f() on a temporary Derived object; prints "1"
}

