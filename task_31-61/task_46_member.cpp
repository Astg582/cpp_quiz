#include <iostream>

// A global function named foo
int foo()
{
    return 10;
}

struct foobar
{
    static int x; // Declaration of a static data member

    // Static member function named foo
    static int foo()
    {
        return 11;
    }
};

// Definition and initialization of static member x
// At this point, `foo()` is called without qualification
// Since this statement is inside the class scope of `foobar`,
// unqualified name lookup will find `foobar::foo()` first (before the global `foo()`),
// so this will call foobar::foo(), returning 11.
int foobar::x = foo();

int main()
{
    // Output the value of static member x
    std::cout << foobar::x; // Prints: 11
}

