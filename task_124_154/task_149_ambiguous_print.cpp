#include <iostream>

// Overload for const char* (C-style string)
void print(char const *str) { std::cout << str; }

// Overload for short integer
void print(short num) { std::cout << num; }

int main() {
  print("abc");  // Calls print(const char*) - prints string "abc"
  
  print(0);      // Ambiguous call!
                 // 0 can be interpreted as null pointer (char const*) or as int convertible to short
                 // Both overloads are equally viable, so compilation error occurs here
  
  print('A');    // 'A' is char, promoted to int, convertible to short, so calls print(short)
}

