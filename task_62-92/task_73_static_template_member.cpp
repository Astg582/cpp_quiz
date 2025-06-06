#include <iostream>

// Constructor that prints 1 when a Printer object is created
struct Printer {
    Printer() { std::cout << 1; }
};

template <typename T>
struct C {
    // Constructor that prints the passed value
    C(T i) { std::cout << i; }

    // Static inline member of template class.
    // It will only be initialized if it is used somewhere in the code.
    static inline Printer printer{};
};

int main() {
    // Create an object of type C<int> with value 2.
    // This prints '2' only. The static member 'printer' is not used,
    // so it is never instantiated, and '1' is not printed.
    C c(2);
}

