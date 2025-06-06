#include <iostream>

struct Base {
    void f(int) { std::cout << "i"; }  // Base version: takes int
};

struct Derived : Base {
    void f(double) { std::cout << "d"; }  // Derived version: takes double
    // This hides all Base::f overloads unless explicitly brought in with 'using'
};

int main() {
    Derived d;
    int i = 0;
    d.f(i);  // Calls Derived::f(double) even though f(int) exists in Base
}

