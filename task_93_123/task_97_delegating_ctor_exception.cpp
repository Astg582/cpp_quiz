#include <iostream>

struct Foo {
    Foo() {}  // Default constructor

    // Delegating constructor that calls Foo() and then throws
    Foo(int n) : Foo() {
        throw n;
    }

    ~Foo() {
        std::cout << "B";
    }
};

int main() {
    try {
        Foo(0);  // Delegating constructor will throw
    } catch (...) {
        std::cout << "A";
    }
}

