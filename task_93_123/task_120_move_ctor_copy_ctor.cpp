#include <iostream>
#include <utility>

struct A
{
    A() { std::cout << "1"; }              // Default constructor
    A(const A&) { std::cout << "2"; }      // Copy constructor
    A(A&&) { std::cout << "3"; }           // Move constructor
};

struct B
{
    A a;

    B() { std::cout << "4"; }              // Default constructor
    B(const B& b) : a(b.a) { std::cout << "5"; }  // Copy constructor (calls A's copy ctor)
    B(B&& b) : a(b.a) { std::cout << "6"; }       // Move constructor, but b.a is lvalue → copy
};

int main()
{
    B b1;             // Calls B's default constructor → A(), then B() → prints "14"
    B b2 = std::move(b1); // Calls B's move constructor:
                          // b.a is lvalue → copy constructor of A → prints "2"
                          // then prints "6"
}

