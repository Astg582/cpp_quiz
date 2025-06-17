#include <iostream>
#include <string>      

auto main() -> int {  
  // C++14-style main declaration with trailing return type

  std::string out{"Hello world"};
  // Create a std::string with contents "Hello world"

  std::cout << (out[out.size()] == '\0');
  // Access the character at index equal to the string's size
  // This does NOT cause undefined behavior in std::string
  // Instead, it returns a reference to a null character (value-initialized)
  // '\0' is an octal escape with value 0, so the comparison is true
  // Output will be 1
}

