#include <iostream>
#include <map>

// Global flags to track which operations were performed
bool default_constructed = false;
bool constructed = false;
bool assigned = false;

// Class with different constructors and assignment operator
class C {
public:
    // Default constructor
    C() { 
        default_constructed = true; 
    }

    // Constructor with an int argument
    C(int) { 
        constructed = true; 
    }

    // Copy assignment operator
    C& operator=(const C&) { 
        assigned = true; 
        return *this;
    }
};

int main() {
    std::map<int, C> m;

    // m[7] checks if key 7 exists.
    // If not, it default-constructs a C() for that key.
    // Then, it assigns C(1) to the existing element using operator=
    m[7] = C(1);

    // This prints 111 if:
    // - default constructor was called,
    // - constructor with int was called,
    // - assignment operator was used.
    std::cout << default_constructed << constructed << assigned;
}

