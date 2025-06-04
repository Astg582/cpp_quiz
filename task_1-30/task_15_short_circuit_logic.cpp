#include <iostream>

int main() {
  int i = 1, j = 1, k = 1;

  std::cout << ++i || ++j && ++k;

  std::cout << i << j << k;
}

/*
  std::cout << ++i:
    - ++i increments i from 1 to 2.
    - std::cout << returns a std::ostream.
    - std::ostream has an operator bool() that returns true if the stream is in a good state.

  Because the left operand of the `||` operator is true,
  the right-hand side (++j && ++k) is not evaluated due to short-circuiting.

  Final values:
    i = 2 (incremented)
    j = 1 (unchanged)
    k = 1 (unchanged)

  Output:
    First prints "2" (from std::cout << ++i),
    then prints "211" (values of i, j, k).
    Final output: 2211
*/

