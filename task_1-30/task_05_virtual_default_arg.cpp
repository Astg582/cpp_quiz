#include <iostream>

struct A {
    virtual void foo (int a = 1) {
        std::cout << "A" << a;
    }
};

struct B : A {
    virtual void foo (int a = 2) {
        std::cout << "B" << a;
    }
};

int main () {
    A *b = new B;
    b->foo();
}

// ✅ Virtual function with default argument:
//
// The call `b->foo()` is resolved in two parts:
// 1. The function is virtual → `B::foo` is called at runtime (dynamic dispatch).
// 2. The default argument `a = 1` is taken from the **static type** `A*` at compile time.
//
// So it calls: `B::foo(1)` → Output: B1

