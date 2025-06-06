#include <iostream>
#include <memory>
#include <vector>

class C {
public:
  void foo()       { std::cout << "A"; } // non-const version of foo()
  void foo() const { std::cout << "B"; } // const version of foo()
};

struct S {
  std::vector<C> v;       // vector of C; respects constness (returns const C& when const)
  std::unique_ptr<C> u;   // unique_ptr<C>; pointer is const, but object can still be modified
  C *const p;             // const pointer to a non-const C object

  S()
    : v(1)                // initialize vector with one C object
    , u(new C())          // allocate one C object and assign to unique_ptr
    , p(u.get())          // store raw pointer to the same object managed by u
  {}
};

int main() {
  S s;              // non-const instance of S
  const S &r = s;   // const reference to s

  // Calls via non-const object 's':
  s.v[0].foo();     // A — operator[] returns C&, so non-const foo() is called
  s.u->foo();       // A — u points to a modifiable C, so non-const foo()
  s.p->foo();       // A — p points to a modifiable C, so non-const foo()

  // Calls via const reference 'r':
  r.v[0].foo();     // B — vector returns const C& → const foo() is called
  r.u->foo();       // A — unique_ptr is const, but *u is still modifiable → non-const foo()
  r.p->foo();       // A — pointer is to a non-const C → non-const foo()
}

