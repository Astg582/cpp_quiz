#include <iostream>

// Define a class and function inside namespace x
namespace x {
  class C {};

  // Function f that accepts a const reference to x::C
  void f(const C& i) {
    std::cout << "1";
  }
}

namespace y {
  // Another function f in a different namespace y
  // Also accepts a const reference to x::C
  void f(const x::C& i) {
    std::cout << "2";
  }
}

int main() {
  // Unqualified call to f with argument of type x::C
  f(x::C()); 
  // Due to argument-dependent lookup (ADL), this resolves to x::f
}

