// task_23_double_conversion_operators.cpp
// Demonstrates implicit double conversion via operator bool() -> int for operator+ and operator==

#include <iostream>

struct A {
  A(int i) : m_i(i) {}

  // User-defined conversion operator to bool
  operator bool() const { return m_i > 0; }

  int m_i;
};

int main() {
  A a1(1), a2(2);

  // a1 and a2 are implicitly converted to bool (true), then promoted to int (1)
  // So, 1 + 1 = 2, and 1 == 1 = true, i.e. output is 21
  std::cout << a1 + a2 << (a1 == a2);
}

