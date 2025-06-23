#include <iostream>
#include <map>

int main()
{
  // std::map with bool keys
  std::map<bool, int> mb = {{1, 2}, {3, 4}, {5, 0}};

  // Keys 1, 3, 5 convert to true (non-zero values)
  // So only one unique key 'true' is stored
  std::cout << mb.size();

  // std::map with int keys
  std::map<int, int> mi = {{1, 2}, {3, 4}, {5, 0}};

  // Keys are distinct, so all entries stored
  std::cout << mi.size();
}

