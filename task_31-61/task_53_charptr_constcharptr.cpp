#include <iostream>

int main() {
    char* str = "X"; // ⚠️ Illegal conversion in modern C++

    // If you write:
    // const char* str = "X"; ✅ This is correct
    // then it compiles with no error.

    std::cout << str;
}

