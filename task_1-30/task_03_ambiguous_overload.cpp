#include <iostream>

void f(int) { std::cout << 1; }
void f(unsigned) { std::cout << 2; }

int main() {
  f(-2.5); // -2.5 is literal sign double type
}

// ❌ Ambiguous overload resolution:
// -2.5 is a `double` literal, but no `f(double)` is defined.
// Both `f(int)` and `f(unsigned)` are considered via standard conversion,
// but neither is better than the other → results in a compile-time error.

