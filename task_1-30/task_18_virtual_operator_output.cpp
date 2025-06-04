#include <iostream>

// Base class A with a virtual method for stream output
struct A {
  virtual std::ostream &put(std::ostream &o) const {
    return o << 'A';
  }
};

// Derived class B overrides the virtual put method
struct B : A {
  std::ostream &put(std::ostream &o) const override {
    return o << 'B';
  }
};

// Overload operator<< for class A references
std::ostream &operator<<(std::ostream &o, const A &a) {
  return a.put(o); // Polymorphic call to the appropriate put()
}

int main() {
  B b;
  std::cout << b; // Outputs 'B' due to virtual dispatch
}

