#include <cstddef>   // For std::nullptr_t
#include <iostream> 

// Overload for any pointer type (void*)
void f(void*) {
    std::cout << 1;
}

// Overload specifically for std::nullptr_t (the type of nullptr)
void f(std::nullptr_t) {
    std::cout << 2;
}

int main() {
    int* a{};      // a is a null pointer of type int*

    f(a);          // Calls f(void*) because a is int* (converted to void*)
    f(nullptr);    // Calls f(std::nullptr_t), exact match

    // f(NULL) call is ambiguous on many compilers because:
    // NULL is an implementation-defined null pointer constant.
    // Often defined as integer 0 or 0L, causing ambiguity between f(void*) and f(std::nullptr_t).
    f(NULL);
}

