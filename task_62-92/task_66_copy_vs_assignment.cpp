#include <iostream>

struct X {
  // Default constructor
  X() { std::cout << "a"; }

  // Copy constructor
  X(const X &x) { std::cout << "b"; }

  // Copy assignment operator
  const X &operator=(const X &x) {
    std::cout << "c";
    return *this;
  }
};

int main() {
  X x;     // calls default constructor -> a
  X y(x);  // direct-initialization -> calls copy constructor -> b
  X z = y; // copy-initialization -> also calls copy constructor -> b
  z = x;   // assignment -> calls assignment operator -> c
}

