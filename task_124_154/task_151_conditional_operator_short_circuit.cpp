#include <iostream>

bool f() { std::cout << 'f'; return false; }  ////// Prints 'f' and returns false
char g() { std::cout << 'g'; return 'g'; }    ////// Would print 'g' and return 'g', but won't be called
char h() { std::cout << 'h'; return 'h'; }    ////// Prints 'h' and returns 'h'

int main() {
    // Conditional (ternary) operator:
    // If f() returns true → evaluate g()
    // If f() returns false → evaluate h()
    char result = f() ? g() : h();

    std::cout << result;  ////// Print the result of h()
}

