#include <iostream>

// Demonstrates reference aliasing and const-correctness
void f(int& a, const int& b) {
  std::cout << b;  // Print the value of b (which is x)
  a = 1;           // Modify the value of x through non-const reference a
  std::cout << b;  // Print the updated value of x through b
}

int main(){
  int x = 0;
  f(x, x);  // Pass the same variable x as both parameters
}

