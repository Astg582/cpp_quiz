#include <iostream>

int main() {
    std::cout << +!!"";  ////// Step-by-step: "" → pointer → bool(true) → !true → false → !false → true → int(1)
}

