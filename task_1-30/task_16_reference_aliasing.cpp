#include <iostream>

int f(int &a, int &b) {
  a = 3;
  b = 4;
  return a + b;
}

int main() {
  int a = 1;
  int b = 2;

  // f(a, a) means both 'a' and 'b' in f() refer to the same variable: main's 'a'.
  int c = f(a, a);

  std::cout << a << b << c;
}

/*
  f(a, a):
    - a and b are references to the same variable: main's 'a'.
    - First, a = 3 sets main's 'a' to 3.
    - Then, b = 4 also modifies main's 'a' (same reference), now a = 4.
    - return a + b = 4 + 4 = 8.

  main:
    - a becomes 4 (modified twice).
    - b remains 2 (unchanged).
    - c = 8 (sum of 4 + 4).

  Output:
    428
*/

