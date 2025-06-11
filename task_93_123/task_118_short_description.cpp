#include <iostream>

class A {
public:
  A() { std::cout << 'a'; }   // Base class constructor prints 'a'
  ~A() { std::cout << 'A'; }  // Base class destructor prints 'A'
};

class B : public A {
public:
  B() { std::cout << 'b'; }   // Derived class constructor prints 'b'
  ~B() { std::cout << 'B'; }  // Derived class destructor prints 'B'
};

int main() { 
  B b;  // Construct and destruct object b of type B
}

