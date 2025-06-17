#include <iostream>
#include <map>

int main() {
    std::map<int, int> m;
    std::cout << m[42]; // Accessing key 42 inserts it with default value 0
}

