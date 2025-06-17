#include <iostream>

struct C {
	int& i; // Reference member variable
};

int main() {
	int x = 1;
	int y = 2;

	C c{x};  // c.i is bound to x
	c.i = y; // Assign value of y to the variable referenced by c.i (which is x)

	// Output the values of x, y, and c.i (which refers to x)
	std::cout << x << y << c.i << std::endl; // Output: 222
	std::cout << "x addres : " <<  &x << std::endl;
	std::cout << " c.i addres : " << &c.i << std::endl;
	return 0;
}

