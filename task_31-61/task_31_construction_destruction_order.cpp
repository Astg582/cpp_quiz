#include <iostream>

class A {
public:
  A() { std::cout << 'a'; }   // Constructor prints 'a'
  ~A() { std::cout << 'A'; }  // Destructor prints 'A'
};

class B {
public:
  B() { std::cout << 'b'; }   // Constructor prints 'b'
  ~B() { std::cout << 'B'; }  // Destructor prints 'B'

  A a;  // Member object of type A
};

int main() {
  B b;  // Create object of type B
}

