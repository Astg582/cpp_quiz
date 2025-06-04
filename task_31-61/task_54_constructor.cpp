#include <iostream>

struct X {
    X() { std::cout << "1"; }               // Default constructor
    X(const X &) { std::cout << "3"; }      // Copy constructor
    ~X() { std::cout << "2"; }              // Destructor

    void f() { std::cout << "4"; }          // Member function
} object;                                   // Global object initialized before main()

int main() {
    X(object);      // ⚠️ This is NOT a function call or a temporary object!
                    // It is interpreted as a **variable declaration**:
                    // "create a local variable named 'object' of type X,
                    // initialized via the copy constructor with the global 'object'"
                    // So: copy constructor is called → prints "3"

    object.f();     // Calls f() on the local 'object' → prints "4"

    // After main ends:
    // - Local 'object' (from inside main) is destroyed → prints "2"
    // - Then, global 'object' is destroyed → prints "2"
}

