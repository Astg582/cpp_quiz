#include <iostream>

int main() {
    int n = 3;
    int i = 0;

    // Use switch on n % 2 (either 0 or 1)
    switch (n % 2) {
    case 0:
        // If n % 2 == 0, enter here and continue into the do-while loop
        do {
            ++i;        // This executes on both paths (case 0 and 1)
    case 1:
            ++i;        // This executes only when case 1 is active (initially true for n = 3)
        } while (--n > 0); // Loop continues while n decrements and stays > 0
    }

    std::cout << i;  // Print the final value of i
}

