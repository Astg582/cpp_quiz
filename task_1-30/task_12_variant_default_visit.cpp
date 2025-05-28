#include <iostream>
#include <variant>

struct C
{
    C() : i(1) {}
    int i;
};

struct D
{
    D() : i(2) {}
    int i;
};

int main()
{
    // Default constructs the first alternative C in the variant
    const std::variant<C,D> v;

    // Visits the held alternative (C) and prints its member 'i'
    std::visit([](const auto& val) { std::cout << val.i; }, v);
}

// Explanation:
// std::variant<C, D> default-initializes the first type C,
// since C is default-constructible.
// So the variant holds C with i = 1 by default.
// std::visit applies the lambda to the active alternative,
// which is C, so it prints '1'.

