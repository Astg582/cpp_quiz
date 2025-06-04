#include <iostream>

template <class T>
void f(T) {
    static int i = 0;
    std::cout << ++i;
}

int main() {
    f(1);   // T = int → i = 1
    f(1.0); // T = double → i = 1 (separate static variable)
    f(1);   // T = int → i = 2
}

