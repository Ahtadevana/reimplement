#include "intVector.hpp"
#include <algorithm>
#include <utility>

int main() {
  IntVector v;
  IntVector z(16);

  v.reserve(4);
  v.pushBack(10);

  v = std::move(v);
  z = std::move(v);

  z.log();

  return 0;
}
