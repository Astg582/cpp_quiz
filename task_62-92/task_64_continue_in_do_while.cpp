#include <iostream>

int main() {
    int i = 1;
    do {
        std::cout << i;  // Print current value of i
        i++;             // Increment i
        if (i < 3)
            continue;    // Jump to end of the loop body (loop condition)
    } while (false);      // The loop condition is false, so loop ends
    return 0;
}

