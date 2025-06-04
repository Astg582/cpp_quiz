#include <future>
#include <iostream>

int main()
{
    std::promise<int> p;                  // Create a promise that will hold an int
    std::future<int> f = p.get_future();  // Get a future associated with the promise

    p.set_value(1);                       // Set the value of the promise (shared state becomes ready)

    std::cout << f.get();                 // First call to get() — retrieves the value and releases the shared state
    std::cout << f.get();                 // Second call to get() — UB: shared state was already released
}

