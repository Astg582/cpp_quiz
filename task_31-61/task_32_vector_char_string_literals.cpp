#include <vector>
#include <iostream>

int main() {
  std::vector<char> delimiters = { ",", ";" };  // ⛔ Problematic initializer
  std::cout << delimiters[0];
}

