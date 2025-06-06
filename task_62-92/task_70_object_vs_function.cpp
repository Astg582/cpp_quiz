#include <iostream>

// A simple struct with a constructor that prints "X"
struct X {
  X() { std::cout << "X"; }
};

int main() {
  X x(); // This is NOT an object — it's a function declaration!
         // It declares a function named 'x' that takes no parameters and returns an X.
         // No object is created, so the constructor is never called.

  // To correctly create an object and call the constructor:
  // Use one of the following:

  // X x;      // OK — object creation (calls constructor)

  // X x{};    // OK since C++11 — uniform initialization (calls constructor)
}

