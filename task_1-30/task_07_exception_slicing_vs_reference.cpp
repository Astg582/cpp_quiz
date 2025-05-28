#include <iostream>

// Base exception class with a virtual print() method
struct GeneralException {
    virtual void print() { 
        std::cout << "G"; 
    }
};

// Derived exception class that overrides the print() method
struct SpecialException : public GeneralException {
    void print() override { 
        std::cout << "S"; 
    }
};

// Function that throws a SpecialException
void f() { 
    throw SpecialException(); 
}

int main() {
    // --- Case 1: Catching by VALUE (slicing happens) ---
    try {
        f();
    }
    catch (GeneralException e) { 
        // Object slicing occurs:
        // SpecialException is sliced into a GeneralException object,
        // so the overridden method is not called.
        e.print(); // Output: G
    }

    std::cout << std::endl;

    // --- Case 2: Catching by REFERENCE (polymorphism preserved) ---
    try {
        f();
    }
    catch (GeneralException& e) {
        // No slicing: the exception is caught by reference,
        // so dynamic dispatch works and the overridden method is called.
        e.print(); // Output: S
    }

    std::cout << std::endl;
    return 0;
}

