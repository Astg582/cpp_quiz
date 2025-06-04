#include <iostream>
#include <type_traits>

int main() {
    // const int *      — pointer to const int (pointer itself is not const)
    std::cout << std::is_const_v<const int *>;       // 0

    // const int [1]    — array of const int (array is considered const too)
    std::cout << std::is_const_v<const int [1]>;     // 1

    // const int **     — pointer to pointer to const int (outer pointers are not const)
    std::cout << std::is_const_v<const int **>;      // 0

    // const int (*)[1] — pointer to array of const int (pointer is not const)
    std::cout << std::is_const_v<const int (*)[1]>;  // 0

    // const int *[1]   — array of pointers to const int (array is not const)
    std::cout << std::is_const_v<const int *[1]>;    // 0

    // const int [1][1] — multidimensional array of const int (elements are const)
    std::cout << std::is_const_v<const int [1][1]>;  // 1
}

