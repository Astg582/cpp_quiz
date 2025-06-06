#include <iostream>
#include <typeinfo>

void takes_pointer(int* pointer) {
    // typeid(pointer) is typeid(int*)
    if (typeid(pointer) == typeid(int[])) std::cout << 'a';
    if (typeid(pointer) == typeid(int*)) std::cout << 'p';
}

void takes_array(int array[]) {
    // Although it looks like array[], it's adjusted to int* by the compiler.
    if (typeid(array) == typeid(int[])) std::cout << 'a';
    if (typeid(array) == typeid(int*)) std::cout << 'p';
}

int main() {
    int* pointer = nullptr;
    int array[1];

    // array "decays" to pointer when passed to takes_pointer
    takes_pointer(array);

    // array[] parameter is actually pointer, so pointer argument matches perfectly
    takes_array(pointer);

    // Check if typeid(int*) equals typeid(int[])
    std::cout << (typeid(int*) == typeid(int[]));
}

