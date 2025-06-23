#include <stdexcept>
#include <exception>
#include <iostream>

int main() {
    try {
        throw std::out_of_range("");
    } catch (std::exception& e) {
        std::cout << 1;
    } catch (std::out_of_range& e) {
        std::cout << 2;
    }
}

// Explanation:
// There are two catch blocks:
//  - catch(std::exception& e)
//  - catch(std::out_of_range& e)
//
// Since std::out_of_range inherits from std::exception,
// both catch blocks could handle the thrown exception.
//
// The catch blocks are checked in the order they appear.
//
// According to the standard (§[except.handle]¶4):
// The first matching handler is selected.
//
// So catch(std::exception& e) catches the exception first,
// printing '1' and preventing the second handler from running.
//
// Output:
// 1
