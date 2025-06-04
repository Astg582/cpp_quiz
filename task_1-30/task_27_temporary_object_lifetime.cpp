#include <iostream>

char a[2] = "0";  // Global buffer that will be used to simulate a string

struct a_string {
    // Constructor sets a[0] = '1'
    a_string() { *a = '1'; }

    // Destructor sets a[0] = '0'
    ~a_string() { *a = '0'; }

    // Returns the pointer to the global buffer
    const char* c_str() const { return a; }
};

void print(const char* s) {
    std::cout << s;
}

// Factory function that creates an a_string object
a_string make_string() {
    return a_string{};
}

int main() {
    // s1 is a named object, so its lifetime lasts until the end of main()
    a_string s1 = make_string();      // a[0] = '1'
    print(s1.c_str());                // prints '1'

    // make_string() returns a temporary object
    // s2 receives a pointer to the buffer, but the temporary is destroyed immediately after the full expression ends
    const char* s2 = make_string().c_str();  // a[0] becomes '0' again
    print(s2);                               // prints '0'

    // The temporary object is destroyed after the print() call completes
    print(make_string().c_str());     // prints '1'
}

