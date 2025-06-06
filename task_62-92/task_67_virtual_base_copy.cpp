#include <iostream>

class A {
public:
    A() { std::cout << "A"; }            // Default constructor
    A(const A &) { std::cout << "a"; }   // Copy constructor
};

class B : public virtual A {
public:
    B() { std::cout << "B"; }            // Default constructor
    B(const B &) { std::cout << "b"; }   // Copy constructor
};

class C : public virtual A {
public:
    C() { std::cout << "C"; }            // Default constructor
    C(const C &) { std::cout << "c"; }   // Copy constructor
};

class D : B, C {
public:
    D() { std::cout << "D"; }            // Default constructor
    D(const D &) { std::cout << "d"; }   // User-defined copy constructor
};

int main() {
    D d1;      // Output: ABCD
    D d2(d1);  // Output: ABCd
}

