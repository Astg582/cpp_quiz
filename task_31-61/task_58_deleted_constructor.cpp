#include <iostream>

// Struct S has a deleted default constructor.
// This makes it a non-aggregate, because a user-declared constructor exists.
// According to §[dcl.init.aggr], a class with a user-declared constructor is not an aggregate.
struct S
{
  S() = delete;  // Deleted constructor makes aggregate initialization invalid
  int x;
};

int main()
{
  // S{} attempts value-initialization because S is not an aggregate.
  // Value-initialization calls the default constructor.
  // Since the default constructor is deleted, this program is ill-formed.
  auto s = S{};
  std::cout << s.x;
}

