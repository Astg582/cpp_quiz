#include <iostream>
#include <vector>

// Function f prints 'f' and returns 0
int f() { std::cout << "f"; return 0; }

// Function g prints 'g' and returns 0
int g() { std::cout << "g"; return 0; }

// Function h takes a vector of integers
void h(std::vector<int> v) {}

int main() {
    // f() and g() are called in the context of initializer list
    // The order of evaluation is guaranteed to be from left to right
    h({f(), g()}); // Always prints "fg"
}

