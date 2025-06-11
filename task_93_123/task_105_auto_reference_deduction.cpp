#include <iostream>

class A {
  int foo = 0;

public:
  // Returns a reference to the member variable 'foo'
  int& getFoo() { return foo; }

  // Prints the value of 'foo'
  void printFoo() { std::cout << foo; }
};

int main() {
  A a;

  // 'bar' is deduced as 'int' (not 'int&') because auto drops references
  auto bar = a.getFoo();

  // This increments a copy of 'foo', not the original
  ++bar;

  // Prints the original value of 'foo', which is still 0
  a.printFoo();
}
