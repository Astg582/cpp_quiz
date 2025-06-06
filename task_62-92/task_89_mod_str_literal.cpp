#include <iostream>

int main() {
  // "Hello" is a string literal of type 'const char[6]'
  // const_cast removes the const qualifier (not safe here)
  char* a = const_cast<char*>("Hello");

  // Attempt to modify the 5th character ('o' → '\0')
  // This is undefined behavior because string literals are typically stored in read-only memory
  a[4] = '\0';

  // Output the modified string
  std::cout << a;
}

