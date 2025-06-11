#include <vector>
#include <iostream>

std::vector<int> v;

int f1() {
  v.push_back(1);  // Side effect: add 1 to vector
  return 0;
}

int f2() {
  v.push_back(2);  // Side effect: add 2 to vector
  return 0;
}

void g(int, int) {}

void h() {
  // The order of evaluation of function arguments is unspecified
  g(f1(), f2());
}

int main() {
  h();
  h();
  // The vector v can have elements in different orders depending on evaluation order of f1() and f2()
  std::cout << (v[0] == v[2]);  // prints 0 or 1 depending on order of evaluation
}

