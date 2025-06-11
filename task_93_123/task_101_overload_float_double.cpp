#include <iostream>

void f(float) { std::cout << 1; }
void f(double) { std::cout << 2; }

int main() {
  // 2.5 is a double literal by default
  f(2.5);   // Calls f(double), prints 2

  // 2.5f is a float literal
  f(2.5f);  // Calls f(float), prints 1
}

