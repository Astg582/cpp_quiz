#include <flat_map>  ////// C++23 header: std::flat_map is a sorted map implemented on top of std::vector
#include <iostream>
#include <algorithm>

int main() {
  std::flat_map<int, int> map;

  ////// std::min takes const references, so both map[1] and map[2] are evaluated before the call.
  ////// The order of evaluation is **indeterminate** — it may be map[1] first or map[2] first.
  ////// If map[2] is evaluated first, inserting key 1 for map[1] may reallocate the underlying vector,
  ////// invalidating the reference returned by map[2], causing **undefined behavior**.
  std::cout << std::min(map[1], map[2]);  ////// UB possible due to invalidated reference
}

