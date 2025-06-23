#include <iostream>
#include <stdexcept>

struct A {
    A(char c) : c_(c) {}
    ~A() { std::cout << c_; }  // Destructor prints its character
    char c_;
};

struct Y {
    ~Y() noexcept(false) { throw std::runtime_error(""); } // Destructor throws
};

A f() {
    try {
        A a('a');
        Y y;
        A b('b');
        return {'c'};  // Returning temporary A{'c'}
    } catch (...) {
        // catch any exception silently
    }
    return {'d'};
}

int main() {
    f();
}

