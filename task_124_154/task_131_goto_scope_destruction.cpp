#include <iostream> 

class A {
public:
  A()  { std::cout << "a"; }  // Constructor prints 'a'
  ~A() { std::cout << "A"; }  // Destructor prints 'A'
};

int i = 1;  // Global variable to control loop

int main() {
label:           // A label for goto
  A a;           // Create local object 'a' of class A
                 // Constructor prints 'a'

  if (i--)       // Decrement i and check if it's non-zero
    goto label;  // Jump back to 'label' if i was 1

  // On each goto, control leaves the scope of object 'a',
  // so its destructor is called before jumping
  // This means output will be: "aA" (first iteration), then "aA" (second)
  // Final output: aAaA
}

