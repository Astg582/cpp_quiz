#include <iostream>

class A {
public:
  A() { std::cout << "a"; }
  ~A() { std::cout << "A"; }
};

class B {
public:
  B() { std::cout << "b"; }
  ~B() { std::cout << "B"; }
};

class C {
public:
  C() { std::cout << "c"; }
  ~C() { std::cout << "C"; }
};

// Global variable with static storage duration.
// Its initialization is dynamic (constructor is not constexpr).
// Per §[basic.start.dynamic]¶5, it is guaranteed to be initialized before main().
A a;

void foo() {
  // Static local variable: initialized on first pass through declaration.
  static C c;
}

int main() {
  // Local automatic variable: constructed at this point.
  B b;

  // Function call causes initialization of static local C c.
  foo();

  // Destruction order on exit:
  // 1. b is destroyed (B)
  // 2. c is destroyed (C)
  // 3. a is destroyed (A)
}

