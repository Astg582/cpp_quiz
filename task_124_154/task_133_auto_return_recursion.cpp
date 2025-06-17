#include <iostream>  

// Function that calculates the sum from 1 to i recursively
auto sum(int i)
{
  if (i == 1)
    return i;            // First return statement: deduces return type as int
  else
    return sum(i - 1) + i;  // Recursive call, now valid since return type is known to be int
}

int main()
{
    std::cout << sum(2);  // Outputs 3 (1 + 2)
}

