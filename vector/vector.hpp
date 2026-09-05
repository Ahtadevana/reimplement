#include <cstddef>

template <typename T> class Vector {
public:
  Vector();
  Vector(int count);
  Vector(int count, T &content);

  ~Vector();

  [[nodiscard]] bool isAlloc() const;
  [[nodiscard]] bool isEmpty() const;
  [[nodiscard]] std::size_t size() const;
  [[nodiscard]] std::size_t capacity() const;

private:
  T *data_;
  std::size_t size_;
  std::size_t capacity_;
};
