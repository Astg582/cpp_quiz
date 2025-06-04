#include <cstdlib>
#include <iostream>

// Define a struct S with a char member and a destructor that prints the character
struct S {
    char s;
    S(char s): s{s} {}
    ~S() { std::cout << s; }  // Print the character when the object is destroyed
};

// Global object 'a' with static storage duration
S a('a');

int main() {
    // Local object 'b' with automatic storage duration
    S b('b');
    
    // Call std::exit - terminates the program immediately
    // Destructors for local (automatic) variables like 'b' are NOT called
    // Only static/global objects like 'a' are destroyed
    std::exit(0);
}

