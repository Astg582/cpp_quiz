#include <iostream>

// Forward declaration of struct S
struct S;

// Declaration of function foo using incomplete type S
S foo(S s);

// Definition of struct S
struct S {};

// Definition of foo now that S is complete
S foo(S s) { return {}; }

int main() {
    const S s = foo(S{});
    std::cout << "ok";
}

// Explanation:
// It is valid to declare a function using a forward-declared (incomplete) class type,
// as long as the function is not defined or called at that point.
//
// A complete type is only needed:
// - For the function **definition** (§[dcl.fct.def.general]¶2)
// - For **calling** the function (§[expr.call]¶6)
//
// Therefore:
// - The declaration `S foo(S)` is valid when `S` is only forward-declared.
// - The definition `S foo(S s) { return {}; }` is valid after `S` is completed.
// - The call `foo(S{})` in `main()` is also valid, since `S` is complete at that point.
//
// Output: ok

