#include <iostream>
#include <type_traits>

// Generic function template taking two arguments of (possibly) different types
template<typename T, typename U>
void f(T, U) {
    // Print whether T and U are exactly the same type
    std::cout << std::is_same_v<T, U>;
}

int main() {
    int i = 0;
    double d = 0.0;

    f(i, d);        ////// T = int (deduced), U = double (deduced) → different → prints 0
    f<int>(i, d);   ////// T = int (explicit), U = double (deduced) → different → prints 0
    f<double>(i, d); ////// T = double (explicit), U = double (deduced) → same → prints 1
                     ////// Note: 'i' is implicitly converted to double
}

