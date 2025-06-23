#include <iostream>

struct E
{
  E() { std::cout << "1"; }              ////// Constructor prints 1
  E(const E&) { std::cout << "2"; }      ////// Copy constructor prints 2 (not used here)
  ~E() { std::cout << "3"; }             ////// Destructor prints 3
};

E f()
{
  return E();                            ////// Returns a prvalue (temporary E)
}

int main()
{
  f();                                   ////// Calls f(), constructs E, returns prvalue
}

