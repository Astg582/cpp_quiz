#include <iostream>

int i;

// Function that takes an int and prints it followed by the current global i
void f(int x) {
    std::cout << x << i;
}

int main() {
    i = 3;
    f(i++); // Argument expression i++ is evaluated before entering the function body
}

