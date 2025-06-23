#include <iostream>

template<typename T>
void adl(T)
{
  std::cout << "T"; // generic template
}

struct S
{
};

template<typename T>
void call_adl(T t)
{
  adl(S()); // non-dependent -> resolved immediately -> calls adl<T>
  adl(t);   // dependent -> resolved at instantiation -> uses argument-dependent lookup
}

void adl(S)
{
  std::cout << "S"; // non-template overload for S
}

int main ()
{
  call_adl(S());
}

