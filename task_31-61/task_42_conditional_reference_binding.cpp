#include <iostream>

int main() {
    int i = 1;

    // Conditional expression: (i > 0 ? i : 1)
    // - `i` is an lvalue (a variable)
    // - `1` is a prvalue (a temporary value)
    // Since they are of different value categories, the result is a prvalue (temporary int)
    // So `a` is bound to that temporary, NOT directly to `i`
    int const& a = i > 0 ? i : 1;

    i = 2; // This modifies `i`, but not the temporary bound to `a`

    // Prints:
    // - value of `i`: 2
    // - value of `a`: still 1 (bound to the temporary created earlier)
    std::cout << i << a;
}

