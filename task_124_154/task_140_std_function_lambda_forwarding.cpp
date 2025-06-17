#include <functional>
#include <iostream>

// Define a struct Q with a value and several constructors
struct Q {
    int v = 0;

    Q() { std::cout << "D"; }           // Default constructor → prints 'D'
    Q(const Q&) { std::cout << "C"; }   // Copy constructor → prints 'C'
    Q(Q&&) { std::cout << "M"; }        // Move constructor → prints 'M'

    void change() { ++v; }              // Increments v
    void func() { std::cout << v; }     // Prints v
};

// Function that takes a std::function<void(Q)> argument
void takeQfunc(std::function<void(Q)> qfunc) {
    Q q;        // Default-construct Q → prints 'D'
    q.func();   // Prints current value of v (which is 0)
    qfunc(q);   // Copies q (prints 'C'), then calls lambda with forwarded copy
    q.func();   // Prints v again (still 0, because original q wasn't changed)
}

int main() {
    // Pass a lambda expecting Q&&, which modifies the value
    takeQfunc([](Q&& q) { q.change(); });
}

