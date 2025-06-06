#include <variant>
#include <iostream>

int main() {
    std::variant<int, double, char> v; // default-constructed variant
    // Default constructor initializes the variant to hold a value of the first alternative type, here int,
    // value-initialized (i.e. int{} == 0)
    
    std::cout << v.index(); 
    // index() returns the zero-based index of the currently held type.
    // Since v holds int (the first alternative), index() returns 0.
}

