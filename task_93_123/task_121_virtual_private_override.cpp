#include <iostream>

class A {
public:
  virtual void f() { std::cout << "A"; }  // Base class virtual method
};

class B : public A {
private:
  void f() override { std::cout << "B"; } // Overrides A::f, but is private
};

void g(A &a) {
  a.f();  // Virtual dispatch happens here
}

int main() {
  B b;
  g(b);   // Calls B::f() even though it's private
}

