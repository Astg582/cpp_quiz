#include <iostream>

size_t get_size_1(int* arr)
{
  return sizeof arr;  // arr is a pointer to int; sizeof returns size of int*
}

size_t get_size_2(int arr[])
{
  return sizeof arr;  // also a pointer to int; same as get_size_1
}

size_t get_size_3(int (&arr)[10])
{
  return sizeof arr;  // arr is a reference to an array of 10 ints; sizeof returns size of entire array
}

int main()
{
  int array[10];
  // Assume sizeof(int*) != sizeof(int[10])
  std::cout << (sizeof(array) == get_size_1(array));  // false → 0
  std::cout << (sizeof(array) == get_size_2(array));  // false → 0
  std::cout << (sizeof(array) == get_size_3(array));  // true  → 1
}

