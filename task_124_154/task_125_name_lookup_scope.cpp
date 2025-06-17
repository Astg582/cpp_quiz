#include <iostream>

// Global variable j
int j = 1;

int main() {
	// Declaration of a reference i bound to j, and a new local variable j
	// Note: int& i = j, j; declares two variables:
	// - i: reference to int, initialized by j (name lookup here!)
	// - j: a new local int variable, uninitialized
	int& i = j, j;

	// Assign 2 to local j
	j = 2;

	// Print i (refers to global j) and local j
	std::cout << i << j << std::endl; // Output: "12"
	std::cout << (i == j)<< std::endl;
	std::cout <<"i addres :"<< &i << '\t'<< "j addres :" << &j;
	return 0;
}
