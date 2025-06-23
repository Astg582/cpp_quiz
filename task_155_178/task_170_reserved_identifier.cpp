#include <iostream>

// Global variable with a name starting with underscore
// Names beginning with an underscore are reserved in the global namespace
int _global = 1;

int main() {
  // Prints the value of the global variable
  std::cout << _global;
}

