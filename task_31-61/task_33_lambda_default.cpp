#include <iostream>

// Function with a default parameter initialized by a lambda call
void f(int a = []() {
    static int b = 1; // static variable inside the lambda
    return b++;       // returns b, then increments it
}())
{
    std::cout << a;
}

int main()
{
    f(); // First call
    f(); // Second call
}

