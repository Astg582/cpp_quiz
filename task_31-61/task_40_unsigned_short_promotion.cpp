#include <iostream>

int main() {
  unsigned short zero = 0, one = 1;
  
  // zero and one are unsigned short, but in arithmetic expressions they are promoted to int
  // because int can represent all values of unsigned short.
  // So zero - one is evaluated as int(0) - int(1) == -1.
  // The comparison -1 < 0 is true, so "less" will be printed.
  // If unsigned short and int have the same size, promotion may differ,
  // and the subtraction would wrap around, printing "more".
  if (zero - one < zero)
    std::cout << "less";
  else
    std::cout << "more";
}

