#include <iostream>
#include <utility>

// Class with user-declared copy constructor
class C
{
public:
    C() {}

    // User-declared copy constructor disables generation of implicit move constructor
    C(const C&) {}
};

int main()
{
    C c;

    // std::move(c) is an xvalue (expiring value)
    // Since move constructor is not available, the copy constructor is selected
    C c2(std::move(c));

    std::cout << "ok";
}

