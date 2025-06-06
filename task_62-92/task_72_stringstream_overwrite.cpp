#include <iostream>
#include <sstream>

int main() {
  std::stringstream ss("a");
  std::cout << ss.str();  // Outputs: a
  ss << "b";
  std::cout << ss.str();  // Outputs: b
}

