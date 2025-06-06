#include <iostream>

// Define enum A with underlying type 'int' and cv-qualifiers const and volatile.
// According to the C++ standard (§[dcl.enum]¶2), cv-qualifiers on the underlying
// type of an enum are ignored. So the underlying type here is just 'int'.
enum A : const int volatile { x, y, z };

int main() {
  A a = A::x;  // Initialize a with enum value x
  a = A::y;    // Assign enum value y to a
  std::cout << "ok";  // Print "ok"
}

