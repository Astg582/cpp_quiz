#include <iostream>

class A {};

class B {
public:
    int x = 0;
};

class C : public A, B {};    // Inherits B privately (default for 'class')
struct D : private A, B {};  // Inherits B publicly (default for 'struct')

int main()
{
    C c;
    c.x = 3; // ❌ Error: B is inherited privately in class C

    D d;
    d.x = 3; // ✅ OK: B is inherited publicly in struct D

    std::cout << c.x << d.x;
}

/*
⚠️ Access control confusion:

- In `class C : ..., B {}`, B is inherited **privately** by default.
  So `c.x` is not accessible from outside `C`.

- In `struct D : ..., B {}`, B is inherited **publicly** by default.
  So `d.x` is accessible.

✅ To fix the error:
Make the inheritance from B in class C public:
    class C : public A, public B {};
*/

