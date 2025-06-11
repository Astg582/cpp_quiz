#include <iostream>

// Function template with a static local variable
template <typename T>
void f() {
    // Each instantiation gets its own copy of 'stat'
    static int stat = 0;
    std::cout << stat++;  // Print current value, then increment
}

int main() {
    f<int>();        // First call with T = int → prints 0
    f<int>();        // Second call with T = int → prints 1
    f<const int>();  // First call with T = const int → prints 0 (separate instance)
}

