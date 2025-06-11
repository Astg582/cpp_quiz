#include <iostream>
#include <type_traits>

int main()
{
  int i, &j = i;

  [=]
  {
    // decltype(E) differs if E is parenthesized or not.
    // Here j is captured by value in the lambda, so inside the lambda
    // j becomes a member of the closure class of type int (not int&).
    // But decltype((j)) treats j as an lvalue expression.
    //
    // The prints represent the following checks:
    // is decltype((j)) == int? (false, prints 0)
    // is decltype(((j))) == int&? (false, prints 0)
    // is decltype((((j)))) == const int&? (true, prints 1)
    // is decltype((((((j)))))) == int&&? (false, prints 0)
    // is decltype(((((((j))))))) == const int&&? (false, prints 0)

    std::cout << std::is_same<decltype    ((j)),     int         >::value
              << std::is_same<decltype   (((j))),    int      &  >::value
              << std::is_same<decltype  ((((j)))),   int const&  >::value
              << std::is_same<decltype (((((j))))),  int      && >::value
              << std::is_same<decltype((((((j)))))), int const&& >::value;
  }();
}

