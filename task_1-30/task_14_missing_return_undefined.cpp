#include <iostream>

int f()
{
    std::cout << 1;
}

int main()
{
    f();
    std::cout << 2;
}


// This program compiles and runs, printing `12`, but it invokes undefined behavior.
//
// Function `f()` has return type `int`, but it does not return a value explicitly.
//
// According to the C++ standard (§[stmt.return]¶4):
// - Flowing off the end of a function with non-void return type (like `int`) 
//   without a return statement is **undefined behavior**.
// - The compiler is not required to diagnose this, and behavior may vary between compilers.
//
// In this particular case, `f()` prints `1`, then control returns to `main()` which prints `2`.
//
// Despite appearing to work, this code is **invalid and unsafe**.
// Always ensure that a function with non-void return type returns a value explicitly.

