#include <iostream>  

struct S {
    // Templated subscript operator that accepts any callable (e.g., lambda)
    template <typename Callable>
    void operator[](Callable f) {
        f(); // Call the provided callable
    }
};

int main() {
    auto caller = S{};  
    // Create an instance of struct S

    // The following line would NOT compile:
    // caller[ [] { std::cout << "C"; } ];
    //
    // Reason:
    // The compiler sees two consecutive '[' characters and interprets this
    // as the start of a C++ attribute syntax ([[...]]), not a lambda expression
    // inside operator[].
    //
    // According to the C++ standard [dcl.attr.grammar]¶7:
    // Two consecutive left square brackets '[[' are only valid for attributes.
    //
    // Solution: Add parentheses around the lambda to disambiguate the syntax.

    caller[ ([]{ std::cout << "C"; }) ];
    // Now the expression is parsed correctly:
    // - The lambda is wrapped in parentheses.
    // - It's passed to operator[].
    // - The lambda prints 'C' when called.
}

