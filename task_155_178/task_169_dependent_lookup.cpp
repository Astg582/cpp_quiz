#include <iostream>

// Global function f()
void f()
{
    std::cout << "1";
}

// Class template B<T> defines a member function f()
template<typename T>
struct B
{
    void f()
    {
        std::cout << "2";
    }
};

// D<T> inherits from B<T> but does not qualify f() with this-> or B<T>::f()
template<typename T>
struct D : B<T>
{
    void g()
    {
        // Unqualified and non-dependent name 'f' triggers unqualified lookup at definition time
        // Since B<T> is a dependent base, its members are not considered in unqualified lookup
        f();  // Resolves to global ::f(), NOT B<T>::f()
    }
};

int main()
{
    D<int> d;
    d.g();  // Outputs: 1
}

