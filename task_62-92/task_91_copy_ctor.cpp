#include <iostream>

struct C {
  // Default constructor
  C() { std::cout << "1"; }

  // Copy constructor
  C(const C& other) { std::cout << "2"; }

  // Copy assignment operator
  C& operator=(const C& other) { std::cout << "3"; return *this; }
};

int main() {
  C c1;         // Calls default constructor -> prints "1"
  C c2 = c1;    // Calls copy constructor (not assignment!) -> prints "2"
}

