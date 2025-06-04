#include <iostream>
#include <type_traits>

int main()
{
    std::cout << std::is_signed<char>::value;
}

// This program prints 1 if 'char' is signed, 0 if it's unsigned.
//
// In C++, 'char' is a distinct fundamental type. It is neither 'signed char' nor 'unsigned char',
// but the implementation chooses one of them as the underlying type.
//
// According to the C++ standard (§[basic.fundamental]¶7):
//   "Type 'char' is a distinct type that has an implementation-defined choice
//    of 'signed char' or 'unsigned char' as its underlying type."
//
// That means the result of std::is_signed<char>::value depends on your compiler and platform.
//
// Common defaults:
//   - On x86 platforms using GCC or Clang: 'char' is usually signed → prints 1
//   - On ARM or MSVC: 'char' may be unsigned → prints 0
//
// Use `std::is_signed<char>::value` when you need to write portable code that adapts accordingly.

