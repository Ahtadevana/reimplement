#include "intVector.hpp"

#include <cstddef>
#include <iostream>

IntVector::IntVector() {}

IntVector::IntVector(std::size_t count)
    : data_(new int[count]), size_(count), capacity_(count) {}

IntVector::IntVector(std::size_t count, int element)
    : size_(count), capacity_(count) {
  data_ = new int[count];

  for (std::size_t i{}; i < size_; ++i) {
    data_[i] = element;
  }
}

IntVector::IntVector(IntVector &other)
    : size_(other.size_), capacity_(other.capacity_) {
  data_ = new int[other.capacity_];

  for (int i{}; i < other.size_; ++i) {
    data_[i] = other.data_[i];
  }
}

IntVector &IntVector::operator=(IntVector &other) {
  if (this == &other)
    return *this;

  delete[] data_;
  data_ = new int[other.capacity_];

  for (int i{}; i < other.size_; ++i) {
    data_[i] = other.data_[i];
  }
  size_ = other.size_;
  capacity_ = other.capacity_;

  return *this;
}

IntVector::~IntVector() { delete[] data_; }

void IntVector::reserve(std::size_t amount) {
  if (!isAlloc()) {
    data_ = new int[amount];
    capacity_ = amount;
    return;
  }
  if (capacity_ > amount) {
    std::cout << "IntVector::reserve(std::size_t amount): amount smaller than "
                 "capacity\n";
    return;
  }
  int *temp = new int[amount];
  for (std::size_t i{}; i < size_; ++i) {
    temp[i] = data_[i];
  }
  delete[] data_;
  data_ = temp;
  capacity_ = amount;
}

void IntVector::log() {
  std::cout << "Base: " << data_ << '\n'
            << "Size: " << size_ << '\n'
            << "Capacity: " << capacity_ << '\n';
}

bool IntVector::isAlloc() { return data_ != nullptr; }
bool IntVector::isEmpty() { return size_ == 0; }
std::size_t IntVector::size() { return size_; }
std::size_t IntVector::capacity() { return capacity_; }
