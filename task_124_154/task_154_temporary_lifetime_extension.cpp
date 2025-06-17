#include <iostream>

class C {
public:
  C(int i) : i(i) { std::cout << i; }       ////// Constructor prints the initial value
  ~C() { std::cout << i + 5; }              ////// Destructor prints value + 5

private:
  int i;
};

int main() {
  const C &c = C(1);  ////// Temporary bound to const reference → lifetime extended to end of main()
  C(2);               ////// Temporary → destroyed at end of full-expression (end of this line)
  C(3);               ////// Same as above
}

