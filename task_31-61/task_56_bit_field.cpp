#include <iostream>

struct X {
    int var1 : 3;  // Bit-field: uses only 3 bits for storage
    int var2;      // Normal integer member
};

int main() {
    X x;
    // Error: you cannot take the address of a bit-field (like x.var1)
    std::cout << (&x.var1 < &x.var2);  // ❌ Invalid: operator& not allowed on bit-fields
}

