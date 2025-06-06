#include <iostream>

int main()
{
    int i = 1;
    
    // Reference must be initialized immediately — this is correct:
    int& j = i;  
    
    // j now refers to i, so printing j will output the value of i
    std::cout << j;

    return 0;
}

