#include <algorithm>
#include <iostream>

int main() {
    int x = 10;
    int y = 10;

    const int &max = std::max(x, y);  // max == &x 
    const int &min = std::min(x, y);  // min == &x

    x = 11;
    y = 9;

    std::cout << max << min; // output 1111
}
