#include <iostream>
#include <limits>  // For std::numeric_limits

int main() {
  // Set 'i' to the maximum value an unsigned int can hold
  unsigned int i = std::numeric_limits<unsigned int>::max();

  // Incrementing this value causes it to wrap around to 0 (modulo arithmetic)
  std::cout << ++i;  // Outputs: 0
}

