#include <iostream>

int main() {
    int a = '0';          // '0' char literal promoted to int (usually 48)
    char const &b = a;    // b is a reference to char const, cannot bind directly to int a
                          // so a temporary char is created with the value of 'a' converted to char,
                          // and b binds to this temporary (usually '0')
    std::cout << b;       // prints '0' (the temporary)
    a++;                  // increments a (to 49), does NOT affect the temporary
    std::cout << b;       // still prints '0', because b refers to the unchanged temporary
}

