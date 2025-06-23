#include <iostream>

template <typename ...Ts>
struct X {
  X(Ts ...args) : Var(0, args...) {}  // Invalid if args... is non-empty
  int Var;
};

int main() {
  X<> x;  // OK: empty parameter pack
}
