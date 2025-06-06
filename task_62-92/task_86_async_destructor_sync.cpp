#include <iostream>
#include <string>
#include <future>

int main() {
    std::string x = "x";

    // Launching first async task that changes x to "y"
    std::async(std::launch::async, [&x]() {
        x = "y";
    }); // temporary future is destroyed at the end of this line and waits for completion

    // Launching second async task that changes x to "z"
    std::async(std::launch::async, [&x]() {
        x = "z";
    }); // again, future is destroyed at the end of the line and blocks until task finishes

    std::cout << x; // Output could be "y" or "z", but never "x"
}

