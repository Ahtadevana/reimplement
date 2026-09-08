#include "intVector.hpp"

int main() {
  IntVector v;
  v.reserve(128);
  v.log();

  v.reserve(64);
  v.log();

  return 0;
}
