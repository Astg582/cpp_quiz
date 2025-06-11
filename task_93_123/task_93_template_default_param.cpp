#include <iostream>

// Empty structs used as type markers
struct A {};
struct B {};

// Primary template declaration with default type parameter A
template<typename T = A>
struct X;

// Full specialization for type A
template<>
struct X<A> {
    static void f() { std::cout << 1; }
};

// Full specialization for type B
template<>
struct X<B> {
    static void f() { std::cout << 2; }
};

// Function template taking a template template-parameter C,
// which itself has a default type parameter B
template<template<typename T = B> class C>
void g() {
    // C<> is equivalent to C<B> because of the default parameter
    C<>::f();
}

int main() {
    g<X>();  // Output: 2
}

