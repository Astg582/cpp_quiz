#include <iostream>

int main() {
    int a = 10;
    int b = 20;
    int x;

    // Comma operator: evaluates `a` first (discarded),
    // then evaluates `b` and returns its value.
    // So, (a, b) results in the value of b, which is 20.
    x = (a, b);

    std::cout << x;  // Prints 20
}

