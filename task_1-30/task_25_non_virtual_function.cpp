#include <iostream>

class A {
public:
  void f() { std::cout << "A"; }
};

class B : public A {
public:
  void f() { std::cout << "B"; }
};

void g(A &a) { a.f(); }

int main() {
  B b;
  g(b);
}

// Non-virtual function call resolves to static type.
// Despite passing B, A::f() is called because f() is not virtual.
// Output: A

