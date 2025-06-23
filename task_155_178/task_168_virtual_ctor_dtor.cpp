#include <iostream>

// Base class A defines a constructor, destructor, and a virtual function foo()
struct A {
  // Constructor calls foo(), but at this point virtual dispatch is disabled
  A() { foo(); }

  // Destructor also calls foo(); again, virtual dispatch is disabled here
  virtual ~A() { foo(); }

  // Virtual function intended to be overridden
  virtual void foo() { std::cout << "1"; }

  // Regular member function that calls virtual foo(); virtual dispatch works here
  void bar() { foo(); }
};

// Derived class B overrides foo()
struct B : public A {
  virtual void foo() { std::cout << "2"; }
};

int main() {
  B b;       // Constructor of A runs first and calls A::foo() (prints "1")
             // Then B's constructor completes
  b.bar();   // Virtual call works here and B::foo() is invoked (prints "2")
}

