#include <iostream>

int main() {
  // The expression 1["ABC"] is legal and valid in C++.
  // This is because the subscript operator a[b] is defined as *(a + b).
  // Hence, 1["ABC"] is equivalent to *("ABC" + 1), which is equivalent to "ABC"[1].
  // "ABC"[1] gives the second character, which is 'B', and printing it gives ASCII value of 'B', which is not desired.
  // BUT: std::cout is overloaded to print characters, so it prints 'B' directly.
  std::cout << 1["ABC"];  // Output: B
}

