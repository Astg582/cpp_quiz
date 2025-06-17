#include <iostream>      // For std::cout
#include <typeinfo>      // For std::typeid
#include <vector>        // For std::vector

typedef std::vector<int> TVint;  
// Creates an alias TVint for the type std::vector<int>

int main() {
	TVint t(1);  
	// Creates a vector of int with one element initialized to 0

	std::cout << (typeid(t) == typeid(std::vector<int>));
	// Compares the runtime type information of t and std::vector<int>
	// Outputs 1 (true), because typedef does not create a new type
}

