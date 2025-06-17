#include <iostream>  

// Overload 1: takes an rvalue reference to a pointer to char
void f(char*&&) { std::cout << 1; }

// Overload 2: takes an lvalue reference to a pointer to char
void f(char*&)  { std::cout << 2; }

int main() {
    char c = 'a';  
    // Declare a char variable (lvalue)

    f(&c);
    // &c is a pointer to c, and although c is an lvalue,
    // the result of &c is a prvalue (pure rvalue) of type char*
    //
    // So the function call resolves to f(char*&&)
    // because the pointer itself is a temporary rvalue
    //
    // Output: 1
}

