#include <string>
#include <iostream>

int main() {
  using namespace std::string_literals; // Enables use of "..."s for std::string literal suffix.

  // Constructor #1: C-string + length → takes first 5 characters from the C-string.
  std::string s1("hello world", 5);  // Result: "hello"

  // Constructor #2: std::string + position → takes substring starting from index 5 to the end.
  std::string s2("hello world"s, 5);  // Result: " world"

  // Outputs: "hello world"
  std::cout << s1 << s2;
}

