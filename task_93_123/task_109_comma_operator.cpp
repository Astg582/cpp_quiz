#include <iostream>

int main() {
  int a = 10;
  int b = 20;
  int x;
  
  // The comma operator has lower precedence than assignment.
  // So this is parsed as (x = a), then b is evaluated but ignored.
  x = a, b;
  
  std::cout << x; // Outputs 10
}

