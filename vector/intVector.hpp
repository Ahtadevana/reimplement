#include <cstddef>

class IntVector {
public:
  IntVector();
  IntVector(int count);
  IntVector(int count, int element);

  IntVector(IntVector &other);
  IntVector &operator=(IntVector &other);

  ~IntVector();

  [[nodiscard]] bool isAlloc();
  [[nodiscard]] bool isEmpty();
  [[nodiscard]] std::size_t size();
  [[nodiscard]] std::size_t capacity();

private:
  int *data_;
  std::size_t size_;
  std::size_t capacity_;
};
