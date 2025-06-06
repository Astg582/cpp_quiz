#include <iostream>

void f(float &&) { std::cout << "f"; }
void f(int &&) { std::cout << "i"; }

template <typename... T>
void g(T &&... v)
{
    // The fold expression calls f(v) for each argument v.
    // Note: v here are named rvalue references, but named rvalue references are treated as lvalues.
    (f(v), ...);
}

int main()
{
    g(1.0f, 2);
}

