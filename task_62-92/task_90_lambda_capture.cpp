#include <iostream>
#include <utility>

struct A {
  A() = default;

  // Copy constructor
  A(const A &a) { std::cout << '1'; }

  // Move constructor
  A(A &&a) { std::cout << '2'; }
};

// Global variable of type A
A a;

int main() {
  // Outer lambda capturing global 'a' by move
  [a = std::move(a)]() {
    // Inner lambda capturing 'a' from outer lambda, also by move
    [a = std::move(a)]() {};
  }();
}

