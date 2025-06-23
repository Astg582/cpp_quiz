#include <iostream>

struct Foo {
  ////// Conversion operator with deduced return type.
  ////// Allowed for non-template conversion operators.
  operator auto() {
    std::cout << "A";  ////// Prints "A" during the conversion
    return 1;          ////// Deduces return type as int
  }
};

int main() {
  int a = Foo();       ////// Calls implicit conversion operator → prints "A", returns 1
  std::cout << a;      ////// Outputs the value assigned: 1
}

