#include <cstddef>

template <typename T> class Vector {
public:
  Vector() : data_(nullptr), size_(0), capacity_(0) {}

  Vector(int count) : data_(new T[count]), size_(count), capacity_(count) {}

  Vector(int count, T &content) : size_(count), capacity_(count) {
    data_ = new T[count];

    for (std::size_t i{}; i < size_; ++i) {
      data_[i] = content;
    }
  }

  ~Vector() { delete[] data_; }

  [[nodiscard]] bool isAlloc() const { return data_ != nullptr; }
  [[nodiscard]] bool isEmpty() const { return size_ == 0; }
  [[nodiscard]] std::size_t size() const { return size_; }
  [[nodiscard]] std::size_t capacity() const { return capacity_; }

private:
  T *data_;
  std::size_t size_;
  std::size_t capacity_;
};
