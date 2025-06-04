#include <iostream>

class show_id
{
public:
    // Destructor prints the id when the object is destroyed
    ~show_id() { std::cout << id; }
    int id;
};

int main()
{
    // Dynamically allocate an array of 3 show_id objects with ids 0, 1, and 2
    // The array is created using aggregate initialization
    // delete[] will destroy the objects in reverse order of their construction
    delete[] new show_id[3]{ {0}, {1}, {2} };
}

