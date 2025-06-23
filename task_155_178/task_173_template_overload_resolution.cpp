#include <iostream>

// Primary template: accepts a non-const reference
template <class T>
void f(T &i) {
    std::cout << 1;
}

// Explicit specialization: accepts a const reference to int
template <>
void f(const int &i) {
    std::cout << 2;
}

int main() {
    int i = 42;

    // Calls f(i): both overloads are viable
    f(i);  // Which one is selected?
}

