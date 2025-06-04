#include <iostream>

class C {
public:
  explicit C(int) {
    std::cout << "i";
  }
  C(double) {
    std::cout << "d";
  }
};

int main() {
  C c1(7);     // Direct-initialization: the explicit int constructor is considered and used => prints "i"
  C c2 = 7;    // Copy-initialization: explicit constructors are not considered => the double constructor is used => prints "d"
}

