#include <iostream>

struct Base {
    virtual int f() = 0; // Pure virtual function
};

// Definition of the pure virtual function outside the class
int Base::f() { return 1; }

struct Derived : Base {
    int f() override; // Override the pure virtual function
};

int Derived::f() { return 2; }

int main() {
    Derived object;

    std::cout << object.f();            // Calls Derived::f() → prints 2
    std::cout << ((Base&)object).f();   // Still calls Derived::f() due to virtual dispatch → prints 2
}

