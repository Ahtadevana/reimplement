#include <cstddef>

class IntVector {
public:
  IntVector();
  IntVector(std::size_t count);
  IntVector(std::size_t count, int element);

  IntVector(IntVector &other);
  IntVector &operator=(IntVector &other);

  ~IntVector();

  [[nodiscard]] bool isAlloc();
  [[nodiscard]] bool isEmpty();
  [[nodiscard]] std::size_t size();
  [[nodiscard]] std::size_t capacity();

private:
  int *data_{nullptr};
  std::size_t size_{0};
  std::size_t capacity_{0};
};
