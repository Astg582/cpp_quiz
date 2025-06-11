#include <iostream>

volatile int a;  // volatile variable with static storage duration, implicitly initialized to 0

int main() {
  // The expression reads 'a' twice without sequencing between reads,
  // causing undefined behavior due to unsequenced side effects on volatile object.
  std::cout << (a + a);
}

