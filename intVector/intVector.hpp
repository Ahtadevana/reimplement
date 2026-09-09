#include <cstddef>

class IntVector {
public:
  IntVector();
  IntVector(std::size_t count);
  IntVector(std::size_t count, int element);

  IntVector(IntVector &other);
  IntVector &operator=(IntVector &other);

  IntVector(IntVector &&other);
  IntVector &operator=(IntVector &&other);

  ~IntVector();

  void reserve(std::size_t amount);
  void pushBack(int value);
  void popBack();

  void dump() const;
  void log() const;

  [[nodiscard]] bool isAlloc() const;
  [[nodiscard]] bool isEmpty() const;
  [[nodiscard]] std::size_t size() const;
  [[nodiscard]] std::size_t capacity() const;

private:
  int *data_{nullptr};
  std::size_t size_{0};
  std::size_t capacity_{0};
};
