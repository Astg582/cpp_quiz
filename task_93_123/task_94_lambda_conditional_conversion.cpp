#include <iostream>

struct A {
    A() { std::cout << "a"; }

    void foo() { std::cout << "1"; }
};

struct B {
    B() { std::cout << "b"; }
    
    // Converting constructor from A
    B(const A&) { std::cout << "B"; }

    void foo() { std::cout << "2"; }
};

int main() {
    // Lambda returns either A{} or B{} based on flag.
    // Due to implicit conversion, the result is always of type B.
    auto L = [](auto flag) -> auto { return flag ? A{} : B{}; };

    L(true).foo();   // A{} is constructed → B(A) → calls B::foo()
    L(false).foo();  // B{} is constructed → calls B::foo()
}

