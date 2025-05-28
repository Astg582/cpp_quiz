#include <iostream>

int main() {
  constexpr unsigned int id = 100;

  // Initialize array with modulo operations on id
  unsigned char array[] = { id % 3, id % 5 };

  // Print elements of array as unsigned integers
  std::cout << static_cast<unsigned int>(array[0])
            << static_cast<unsigned int>(array[1]);
}

// Explanation:
// id = 100
// array[0] = 100 % 3 = 1
// array[1] = 100 % 5 = 0
// Output: 10

