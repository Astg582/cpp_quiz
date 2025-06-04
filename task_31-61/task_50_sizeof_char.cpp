#include <iostream>

int main() {
    // Here, we index into the string literal "abcdefghij" using 0 as the index.
    // But the syntax is reversed: 0["abcdefghij"] is legal in C++.
    // That's because a[b] is defined as *(a + b), so b[a] is also valid.

    // So, 0["abcdefghij"] is equivalent to "abcdefghij"[0], which is the character 'a'.

    // Applying sizeof to this character ('a'), we get its size in bytes.
    // Since 'a' is of type char, and sizeof(char) is always 1 by the standard,
    // the value of n will be 1.

    int n = sizeof(0["abcdefghij"]);
    
    std::cout << n;  // Output: 1
}

