#include <iostream>

// Attempting to use extern "C" inside namespaces


namespace A {

// Declare x as an extern "C" variable

  extern "C" { int x; }
};

namespace B {

 // Declare x again as an extern "C" variable — in a different namespace

  extern "C" { int x; }
};


// Define the variable declared in namespace A

int A::x = 0;

int main() {
  std::cout << B::x;
  A::x=1;
  std::cout << B::x;
}

// ❌ **`extern "C"` and namespaces are incompatible**
// Error: extern "C" symbols can't be in different namespaces.
// A::x and B::x try to declare the same C symbol in separate namespaces.

