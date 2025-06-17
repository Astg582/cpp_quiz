#include <iostream>

// Base class A with virtual method f
class A {
public:
  virtual void f() { std::cout << "A"; }
};

// Derived class B overrides virtual method f
class B : public A {
public:
  void f() { std::cout << "B"; }
};

// Function g takes A by value (not reference or pointer)
void g(A a) {
  // Calls A::f(), because slicing has occurred
  a.f();
}

int main() {
  B b;
  // Passes B object to g, but g takes it by value,
  // so slicing occurs and only base part is preserved
  g(b);  // Prints "A"
}

