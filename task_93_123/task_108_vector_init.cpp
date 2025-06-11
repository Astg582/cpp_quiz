#include <iostream>
#include <vector>

int main() {
  // Constructs a vector with 1 element of value 2
  std::vector<int> v1(1, 2);
  
  // Constructs a vector with elements 1 and 2 (initializer list constructor)
  std::vector<int> v2{ 1, 2 };
  
  std::cout << v1.size() << v2.size(); // Outputs: 12
}

