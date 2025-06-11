#include <iostream>

int main() {
    // The empty string literal "" has one character: the terminating null character '\0'
    // So sizeof("") returns the size of the entire array: 1 byte (1 character of type const char)
    std::cout << sizeof("");
}
