#include <future>
#include <iostream>

int main()
{
    try {
        std::promise<int> p;

        // Create the first future from the promise
        std::future<int> f1 = p.get_future();

        // Attempt to create a second future from the same promise
        // This throws std::future_error because only one future is allowed per promise
        std::future<int> f2 = p.get_future(); // ❗ Throws

        p.set_value(1);

        // If we somehow reached here (we won’t), this would print the values
        std::cout << f1.get() << f2.get();
    } catch(const std::exception& e)
    {
        // The exception is caught here: std::future_error is thrown
        std::cout << 2; // Expected output
    }
}

