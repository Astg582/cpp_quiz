#include <iostream>

int main() {
    // 'a' is a static local variable.
    // It has static storage duration and is automatically zero-initialized.
    static int a;

    // So the output will be '0'.
    std::cout << a;
}

