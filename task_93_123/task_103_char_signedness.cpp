#include <iostream>
#include <type_traits>

int main() {
    // Check whether 'char' is a signed type on this implementation
    if (std::is_signed<char>::value) {
        // If true, check if 'char' is the same type as 'signed char'
        std::cout << std::is_same<char, signed char>::value;
    } else {
        // If false, check if 'char' is the same type as 'unsigned char'
        std::cout << std::is_same<char, unsigned char>::value;
    }
}

