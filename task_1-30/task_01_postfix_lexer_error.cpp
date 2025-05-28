#include <iostream>

int main() {
    int a = 5, b = 2;
    std::cout << a+++++b;
}

// ❌ Compilation error: invalid token sequence

// The expression `a+++++b` is not valid in C++ because of how the lexer tokenizes it.
// It tries to consume the longest possible valid tokens — this is called the **maximal munch rule**.

// Instead of parsing it as:
//     a++ + ++b
// The lexer interprets:
//     a++ ++ + b
// Which is a syntax error: `a++` is a prvalue (not a modifiable lvalue), and can't be incremented again.

// ✅ Fix suggestion:
// Use proper spacing or parentheses:
//     std::cout << a++ + ++b;

