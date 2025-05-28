#include <iostream>

struct A {
    A() { std::cout << "A"; }
    ~A() { std::cout << "a"; }
};

int main() {
    std::cout << "main";
    // 'new A' is inside sizeof, so it is NOT executed.
    // Therefore, constructor and destructor are NOT called.
    return sizeof new A;
}

