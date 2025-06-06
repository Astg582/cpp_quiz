#include <iostream>

// This function takes two arguments by value and prints them
void print(int x, int y)
{
    std::cout << x << y;
}

int main() {
    int i = 0;

    // This call uses two pre-increment expressions: ++i and ++i
    // ⚠️ Key point: The order in which function arguments are evaluated is **unspecified** in C++
    //
    // According to the C++23 standard:
    // - The evaluation of function arguments is "indeterminately sequenced"
    // - This means one argument is fully evaluated (including side effects), then the other — 
    //   but it is **not specified** which goes first
    //
    // Possible correct outputs:
    //   - 12 → if the left ++i happens first (i becomes 1), then the right ++i (i becomes 2)
    //   - 21 → if the right ++i happens first (i becomes 1), then the left ++i (i becomes 2)
    //
    // ❌ Output like 22 is incorrect by the standard and indicates a **bug** in the compiler implementation (GCC had such a bug)
    //
    // Note: This is not **undefined behavior**, but **unspecified behavior** — the output may vary between compilers,
    // but must follow the rule that one ++i completes fully before the other begins.

    print(++i, ++i);

    return 0;
}

