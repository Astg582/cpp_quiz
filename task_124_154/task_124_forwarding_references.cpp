#include <iostream>
#include <utility>

// Overloads of y() based on lvalue or rvalue references
int y(int &) { return 1; }   // Called for lvalue references
int y(int &&) { return 2; }  // Called for rvalue references

// Template function f takes a forwarding reference and passes x as is to y()
template <class T> int f(T &&x) { 
    // x is always an lvalue inside the function, so y(int&) is called
    return y(x); 
}

// Template function g takes a forwarding reference and passes std::move(x) to y()
// std::move casts x to an rvalue, so y(int&&) is called regardless of x's original value category
template <class T> int g(T &&x) { 
    return y(std::move(x)); 
}

// Template function h takes a forwarding reference and passes std::forward<T>(x) to y()
// std::forward preserves the original value category of x, calling y(int&) for lvalues and y(int&&) for rvalues
template <class T> int h(T &&x) { 
    return y(std::forward<T>(x)); 
}

int main() {
    int i = 10;
    
    // Calling with lvalue i and rvalue 20
    std::cout << f(i) << f(20);  // Output: 11
    std::cout << g(i) << g(20);  // Output: 22
    std::cout << h(i) << h(20);  // Output: 12
    
    return 0;
}
