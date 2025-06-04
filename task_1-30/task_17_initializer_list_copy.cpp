#include <initializer_list>
#include <iostream>

class C {
public:
    C() = default;
    C(const C&) { std::cout << 1; }
};

void f(std::initializer_list<C> i) {}

int main() {
    C c;
    std::initializer_list<C> i{c};
    f(i);
    f(i);
}
/*
  Step-by-step analysis:

  1. C c;
     - Default constructor is called; no output.

  2. std::initializer_list<C> i{c};
     - Initializes 'i' with a copy of 'c'.
     - Calls C's copy constructor: outputs '1'.

  3. f(i);
     - Passes 'i' by value to function 'f'.
     - 'i' is copied; however, std::initializer_list is a lightweight object that holds pointers to the elements.
     - No additional copies of C objects are made; no output.

  4. f(i);
     - Same as step 3; no output.

  Final Output:
    1
*/

