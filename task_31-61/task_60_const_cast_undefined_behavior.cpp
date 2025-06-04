#include <iostream>

int main() {
    const int i = 0;

    // const_cast is used to remove constness from 'i'.
    // 'i' is a const object with static storage duration.
    int& r = const_cast<int&>(i);

    // Modifying a const object through a non-const reference
    // causes undefined behavior according to §[dcl.type.cv]¶4.
    r = 1;

    // Although this prints '1' on many implementations,
    // the behavior is undefined and cannot be relied upon.
    std::cout << r;
}

