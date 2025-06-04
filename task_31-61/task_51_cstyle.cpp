#include <iostream>

int main() {
    // The following line uses alternative tokens for curly braces { }:
    // <% and %> are the same as { and } respectively.
    // So this line is equivalent to: int a[] = {1};
    int a[] = <%1%>;

    // This line uses alternative tokens for square brackets [ ]:
    // <: and :> are the same as [ and ] respectively.
    // So this is equivalent to: std::cout << a[0];
    std::cout << a<:0:>;
}

