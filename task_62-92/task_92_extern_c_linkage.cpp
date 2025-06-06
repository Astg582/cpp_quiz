#include <iostream>

namespace A {
    extern "C" int x; // Declare x with C linkage in namespace A
};

namespace B {
    extern "C" int x; // Declare x with C linkage in namespace B
};

int A::x = 0; // Define and initialize x in namespace A

int main() {
    std::cout << B::x; // Prints 0 because A::x and B::x are the same variable
    A::x = 1;          // Modify x via namespace A
    std::cout << B::x; // Prints 1, reflects the change since both refer to same x
}

