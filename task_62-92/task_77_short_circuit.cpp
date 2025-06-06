#include <iostream>

int main() {
    int I = 1, J = 1, K = 1;

    // Expression breakdown:
    // Operator precedence: && has higher precedence than ||
    // So: (++I || (++J && ++K))
    //
    // Evaluation order and short-circuiting:
    // - ++I is evaluated first, increments I to 2, returns true (non-zero).
    // - Since the first operand of || is true, the right side (++J && ++K) is NOT evaluated.
    // - Therefore, J and K remain unchanged.
    //
    // The entire expression evaluates to true (1), which is printed.
    std::cout << (++I || ++J && ++K);

    // Print current values of I, J, and K after expression evaluation:
    // I = 2 (incremented)
    // J = 1 (not incremented)
    // K = 1 (not incremented)
    std::cout << I << J << K;
}

