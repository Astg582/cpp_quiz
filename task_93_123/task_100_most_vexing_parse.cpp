#include <iostream>

struct X {
  X() { std::cout << "X"; }
};

struct Y {
  Y(const X &x) { std::cout << "Y"; }
  void f() { std::cout << "f"; }
};

int main() {
  // This line does NOT create an object 'y'
  // Instead, it's interpreted as a function declaration:
  // A function named 'y', which takes a function (that returns X) as parameter, and returns Y.
  Y y(X());

  // This will fail to compile, because 'y' is not an object, but a function declaration.
  y.f();  // Error: 'y' is a function, not an object
}

