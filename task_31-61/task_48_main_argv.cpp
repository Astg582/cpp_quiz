#include <iostream>

int main(int argc, char* argv[]) {
    std::cout << (argv[argc] == nullptr);
}

//	argc     == 3
//	argv[0]  == "./a.out"
//	argv[1]  == "hello"
//	argv[2]	 == "world"
//	argv[3]	 == nullptr
