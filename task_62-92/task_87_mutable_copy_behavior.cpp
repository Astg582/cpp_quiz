#include <iostream>
#include <utility>

struct X {
    X() { std::cout << "1"; }            // Default constructor
    X(X &) { std::cout << "2"; }         // Non-const lvalue copy constructor
    X(const X &) { std::cout << "3"; }   // Const lvalue copy constructor
    X(X &&) { std::cout << "4"; }        // Rvalue move constructor
    ~X() { std::cout << "5"; }           // Destructor
};

struct Y {
    mutable X x;                         // Mutable member allows modification in const context
    Y() = default;                       // Default constructor
    Y(const Y &) = default;              // Default copy constructor
};

int main() {
    Y y1;                // Calls X::X(), prints "1"
    Y y2 = std::move(y1); // std::move makes y1 an rvalue, but Y has no move ctor, so copy ctor is called
                          // x is mutable, so X(X&) is used (not X(const X&)), prints "2"
                          // Resulting output so far: "12"

    // Destruction order: y2.x, then y1.x → prints "5" "5"
}

