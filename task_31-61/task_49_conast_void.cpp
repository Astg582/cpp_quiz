#include <iostream>
#include <string>

// Overload of function f that takes a const reference to std::string
void f(const std::string &) { std::cout << 1; }

// Overload of function f that takes a pointer to const void
void f(const void *) { std::cout << 2; }

int main() {
  // "foo" is a string literal, which is of type const char[4]
  // It decays to const char* and then implicitly converts to const void*
  // f(const void*) is a better match than f(const std::string&) because
  // converting to std::string requires a user-defined conversion.
  f("foo");  // Outputs: 2

  const char *bar = "bar";

  // bar is already a const char*, which again converts to const void* with no cost
  // So, f(const void*) is selected again
  f(bar);    // Outputs: 2
}

