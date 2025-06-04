#include <iostream>

int main() {
  void * p = &p;               // The pointer p is initialized with its own address.
  std::cout << bool(p);       // Convert p to bool and print it.
}

