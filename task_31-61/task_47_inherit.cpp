#include <iostream>
#include <typeinfo>

// A simple base class without any virtual functions
struct Base
{
//if Base is polymorphic output 1 if no output 0
//virtual ~Base(){ std::cout<<"\t" <<"Base polymorphic"<< std::endl;}
};

// Derived class inherits from Base
struct Derived : Base
{
};

int main()
{
    Derived d;       // Create an object of type Derived
    Base& b = d;     // Reference to Base, but actually refers to a Derived object

    // Use typeid to compare the dynamic type of 'b' with typeid(Derived)
    // However, Base is NOT a polymorphic type (it has no virtual functions),
    // so typeid(b) will return the static type Base, not the dynamic type Derived.
    std::cout << (typeid(b) == typeid(Derived));  // Prints: 0 (false)
}

