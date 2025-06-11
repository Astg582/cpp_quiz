#include <iostream>
#include <vector>

struct Foo
{
    Foo() { std::cout << "a"; }               // Default constructor
    Foo(const Foo&) { std::cout << "b"; }     // Copy constructor
};

int main()
{
    std::vector<Foo> bar(5);  // Creates vector of 5 default-constructed Foos
}

