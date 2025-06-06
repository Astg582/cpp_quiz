#include <functional>
#include <iostream>

// Template function that takes a std::function and a value of type T
template <typename T>
void call_with(std::function<void(T)> f, T val)
{
    f(val); // call the function with the provided value
}

int main()
{
    // Define a lambda that prints an integer
    auto print = [](int x) { std::cout << x; };

    // Error without template argument: type deduction fails because lambda type doesn't match std::function exactly
    // call_with(print, 42); // would not compile unless we specify the template argument explicitly

    // Solution 1: Explicitly specify the template parameter
    call_with<int>(print, 42);
}

