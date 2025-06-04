#include <iostream> // Includes the standard input-output stream library

int main() {
    int a = 0;               // Declare an integer variable 'a' and initialize it to 0
    decltype(a) b = a;       // 'decltype(a)' yields 'int', so 'b' is also of type int and is initialized with a copy of 'a'
    b++;                     // Increment 'b'; now 'b' is 1, while 'a' remains 0
    std::cout << a << b;     // Print 'a' and 'b'; output will be "01"
}

