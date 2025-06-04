#include <future>
#include <iostream>

int main()
{
    // Launch an async task that immediately throws an exception
    auto f = std::async(std::launch::async, [](){ throw 0; });

    try {
        f.wait(); // Wait for the async task to complete
                 // This does NOT rethrow any exception from the task
    } catch (...)
    {
        std::cout << 1; // This block is NOT executed
    }

    std::cout << 2; // This is printed
}

