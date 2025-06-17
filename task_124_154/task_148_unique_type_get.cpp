#include <iostream>
#include <tuple>

int main()
{
    // Create a tuple with int, double, and int types
    const auto t = std::make_tuple(42, 3.14, 1337);
    
    // std::get<T>(tuple) requires that T appears exactly once in the tuple's types
    // Since 'int' appears twice (first and third elements), this causes a compilation error
    // So this code won't compile as is
    
    std::cout << std::get<int>(t);
}

