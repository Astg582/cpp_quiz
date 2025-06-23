#include <iostream>

int main() {
  // First loop uses post-increment (i++)
  for (int i = 0; i < 3; i++)
    std::cout << i;

  // Second loop uses pre-increment (++i)
  for (int i = 0; i < 3; ++i)
    std::cout << i;
}

