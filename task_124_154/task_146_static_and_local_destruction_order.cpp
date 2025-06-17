#include <iostream>

// Class A with constructor and destructor printing markers
class A {
public:
  A() { std::cout << "a"; }  // Constructor prints 'a'
  ~A() { std::cout << "A"; } // Destructor prints 'A'
};

// Class B with constructor and destructor
class B {
public:
  B() { std::cout << "b"; }  // Constructor prints 'b'
  ~B() { std::cout << "B"; } // Destructor prints 'B'
};

// Class C with constructor and destructor
class C {
public:
  C() { std::cout << "c"; }  // Constructor prints 'c'
  ~C() { std::cout << "C"; } // Destructor prints 'C'
};

// Global object with static storage duration
A a;

int main() {
  C c;  // Local automatic object, prints 'c' on construction
  B b;  // Local automatic object, prints 'b' on construction
}

