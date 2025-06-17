#include <type_traits>
#include <iostream>

// A struct X with a member function f that can only be called
// on an rvalue of const-qualified X (const &&)
struct X {
    int f() const&& {
        return 0;
    }
};

int main() {
    // Take the address of member function f
    auto ptr = &X::f;

    // Check if the type of ptr is plain function type: int()
    std::cout << std::is_same_v<decltype(ptr), int()>;

    // Check if the type of ptr is pointer to member function: int(X::*)()
    std::cout << std::is_same_v<decltype(ptr), int(X::*)()>;
}

