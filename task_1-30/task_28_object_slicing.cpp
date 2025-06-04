#include <iostream>

// Base class with a virtual function
struct X {
	virtual void f() const { std::cout << "X"; }
};

// Derived class overrides the virtual function
struct Y : public X {
	void f() const override { std::cout << "Y"; }
};

// Function that takes a reference to base class and calls the virtual function
void print(const X &x) {
	x.f();  // Dynamic dispatch based on the actual type of x
}

int main() {
	X arr[1];    // arr is an array of X, not of pointers to X

	Y y1;        // y1 is an object of derived class Y

	arr[0] = y1; // Object slicing: the "Y part" of y1 is sliced off.
		     // Only the X part is copied into arr[0]

	print(y1);     // Output: Y
		       // y1 is still a Y object, and dynamic dispatch works

	print(arr[0]); // Output: X
		       // arr[0] is a sliced X object — the Y part is gone
}
