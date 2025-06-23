#include <type_traits>
#include <iostream>
#include <string>

template<typename T>
int f()	// return type int
{
    if constexpr (std::is_same_v<T, int>) {
        return 0; // ok
    } else {
        return std::string{}; // wrong return type
    }
}

int main()
{
    std::cout << f<int>();
}

