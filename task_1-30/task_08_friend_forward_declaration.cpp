#include <iostream>

class A; // Forward declaration of class A

class B {
public:
  B() { std::cout << "B"; }

  // ❌ Invalid friend declaration:
  // At this point, class A is only forward-declared.
  // The compiler does not yet know if A has a member function named createB.
  friend B A::createB(); 
};

class A {
public:
  A() { std::cout << "A"; }

  // This member function returns an object of type B.
  B createB() { return B(); }
};

int main() {
  A a;           // prints "A"
  B b = a.createB(); // prints "B"
}

