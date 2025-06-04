#include <iostream>

typedef long long ll;

// Function that takes an unsigned parameter named 'll' (not of type 'll'!)
void foo(unsigned ll) {
    std::cout << "1";
}

// Function that takes an unsigned long long
void foo(unsigned long long) {
    std::cout << "2";
}

int main() {
    foo(2ull); // Calls the second overload
}

