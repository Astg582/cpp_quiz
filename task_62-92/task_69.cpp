#include <iostream>
#include <type_traits>

int main()
{
  int i, &j = i;
  [=]
  {
    std::cout << std::is_same<decltype    ((j)),     int         >::value
              << std::is_same<decltype   (((j))),    int      &  >::value
              << std::is_same<decltype  ((((j)))),   int const&  >::value
              << std::is_same<decltype (((((j))))),  int      && >::value
              << std::is_same<decltype((((((j)))))), int const&& >::value;
  }();
}
