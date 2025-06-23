#include <iostream>

int main() {
    int a = 0;
    decltype((a)) b = a;  // decltype((a)) — lvalue reference to int (int&)
    b++;                 
    std::cout << a << b;  // output "11"
}
