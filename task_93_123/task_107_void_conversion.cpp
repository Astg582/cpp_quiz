#include <iostream>

struct S {
  // Conversion operator to void
  operator void() {
    std::cout << "F";
  }
};

int main() {
  S s;
  (void)s;                // C-style cast to void - does NOT call operator void()
  static_cast<void>(s);   // static_cast to void - does NOT call operator void()
  s.operator void();      // Explicit call to conversion operator - calls operator void()
}

