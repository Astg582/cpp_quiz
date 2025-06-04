#include <iostream>

struct A {
  A() { std::cout << "A"; }               // Default constructor
  A(const A &a) { std::cout << "B"; }     // Copy constructor
  virtual void f() { std::cout << "C"; }  // Virtual function
};

int main() {
  A a[2]; // Creates two objects of type A. Calls default constructor twice: prints "AA".

  for (auto x : a) {
    // Each element 'x' is a copy of the array element => copy constructor is called.
    // Then the method 'f' is called on the copy.
    x.f();
  }
  // This will print: "AA" from constructors, then "BCBC" from two copies and two function calls.
}

