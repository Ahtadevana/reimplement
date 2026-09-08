#include "intVector.hpp"

int main() {
  IntVector v;
  v.reserve(16);

  v.log();
  v.pushBack(99);

  v.log();
  v.dump();

  return 0;
}
