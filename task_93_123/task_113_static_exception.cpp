#include <iostream>
#include <exception>

int x = 0;

class A {
public:
  A() {
    std::cout << 'a';               // Print 'a' when A is constructed
    if (x++ == 0) {
      throw std::exception();       // Throw exception the first time A is constructed
    }
  }
  ~A() { std::cout << 'A'; }        // Print 'A' when A is destructed
};

class B {
public:
  B() { std::cout << 'b'; }         // Print 'b' when B is constructed
  ~B() { std::cout << 'B'; }        // Print 'B' when B is destructed
  A a;                              // Member of type A
};

void foo() {
  static B b;                       // Local static variable: initialized once
}

int main() {
  try {
    foo();                          // First call to foo(): A throws an exception
  }
  catch (std::exception &) {
    std::cout << 'c';               // Print 'c' after catching the exception
    foo();                          // Second call to foo(): initialization succeeds
  }
}
   
