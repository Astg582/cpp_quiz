#include <iostream>

struct A {
    A() { std::cout << "A"; }
};

struct B {
    B() { std::cout << "B"; }
};

class C {
public:
    // Constructor initializes 'a' then 'b' in the list,
    // but actual initialization order follows the declaration order.
    C() : a(), b() {}

private:
    B b; // Declared first → initialized first
    A a; // Declared second → initialized second
};

int main() {
    C();  // Output: B then A
}

