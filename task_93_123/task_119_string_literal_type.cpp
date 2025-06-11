#include <iostream>
#include <type_traits>

int main() {
    // "Hello, World!" is a string literal of type const char[14]
    auto a = "Hello, World!";

    // decltype("Hello, World!") is const char(&)[14], i.e., reference to array of 14 const chars
    // decltype(a) is const char* because auto deduces pointer type due to array-to-pointer decay

    // std::is_same_v compares these two types:
    // const char(&)[14] vs const char* which are different
    std::cout << std::is_same_v<decltype("Hello, World!"), decltype(a)>;  // prints 0 (false)

    return 0;
}

