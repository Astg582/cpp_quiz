#include <initializer_list>
#include <iostream>

// Class A defines three constructors:
// - Default constructor (no parameters)
// - Constructor taking an int
// - Constructor taking an initializer_list<int>
struct A {
  A() { std::cout << "1"; } // prints "1" on default construction

  A(int) { std::cout << "2"; } // prints "2" if constructed from a single int

  A(std::initializer_list<int>) { std::cout << "3"; } // prints "3" for list-initialization
};

int main(int argc, char *argv[]) {
  A a1;         // Calls A::A(), prints "1"
  A a2{};       // Value-initialization: still calls A::A(), prints "1"
  A a3{ 1 };    // List-initialization with one element: chooses A::A(std::initializer_list<int>), prints "3"
  A a4{ 1, 2 }; // List-initialization with multiple elements: calls A::A(std::initializer_list<int>), prints "3"
}

